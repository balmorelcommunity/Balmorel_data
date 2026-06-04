*-------------------------------------------------------------------------------
* PB_RULE_CONFIG.inc  --  Rolling-foresight threshold-type configuration
*-------------------------------------------------------------------------------
* Active only when %PB_ROLLING_FORESIGHT%==yes in balopt.opt.
*
* CLASSIFIES each PB category by its THRESHOLD TYPE, which determines how the
* per-window update rule treats the committed iter's IS:
*
*   CUMULATIVE     -- threshold is the year's share of an integrated horizon
*                     budget. Banking is meaningful (signed both ways):
*                     unused budget from a committed year can be redistributed
*                     to subsequent years; over-emit must be paid back later.
*                     Implementation uses an accumulated residual (Path B) so
*                     total horizon emissions equal total allocated when the
*                     LP uses all available budget. See
*                     PB_threshold_update.inc for the math.
*
*   STEADY_STATE   -- threshold is a per-year safety rate (e.g. derived by
*                     pyaesa from a global steady-state planetary boundary).
*                     Banking is NOT meaningful (each year stands alone);
*                     only tightening fires when the LP overshoots the safety
*                     limit. Tightening is computed against ORIGINAL (not
*                     against the possibly-tightened current threshold), so
*                     once the LP brings IS back under ORIGINAL the threshold
*                     auto-resets -- the system self-corrects rather than
*                     ratcheting deeper into tightening (Approach B).
*
* THRESHOLD-TYPE CHOICE
*   Today every category is classified as STEADY_STATE because the current
*   pyaesa output is a per-year steady-state allocation (pyaesa starts from
*   the global PB steady-state envelope and applies a sharing principle to
*   the energy sector). If/when pyaesa produces a cumulative-budget value for
*   a category (most likely CO2, framed as a horizon carbon budget), move
*   that category's element to PB_THRESHOLD_TYPE_CUMULATIVE.
*
* INVARIANTS (enforced by ABORTs below)
*   - Every PB category is in EXACTLY ONE of the two sets (no orphans,
*     no overlap). Forces an explicit classification choice for every
*     category.
*
* FLOOR
*   PB_RF_FLOOR_FRAC caps how tight a single update can leave the threshold
*   (default 0.1 = at most 90% tightening per update). Same floor for both
*   threshold types -- a feasibility safety net against pathological
*   overshoots. When the floor activates, the strict mass-balance / safety
*   guarantee is broken (debt is partially forgiven), but the LP stays
*   feasible. Documented in the diagnostic log line.
*
* DYNAMIC YEAR-GAP
*   PB_RF_GAP_COMMIT and PB_RF_GAP_NEXT are computed at runtime from YVALUE
*   differences, so Y need not be evenly spaced. Y = {2030, 2040, 2050} gives
*   gap_commit = gap_next = 10 yr per window.
*
* Author: Dhruv Sharma
*-------------------------------------------------------------------------------

* PB_THRESHOLD_TYPE_CUMULATIVE: categories whose threshold is the year-share of
* an integrated horizon budget. Banking (signed both ways) via accumulated
* residual (Path B). Empty by default -- add a category here only if pyaesa
* produces a true cumulative-budget threshold for it (likely future: SOS_CO2_sector).
SET PB_THRESHOLD_TYPE_CUMULATIVE(PB_THRESHOLDS_SET) 'Cumulative-budget threshold categories (Path B banking)' / /;

* PB_THRESHOLD_TYPE_STEADY_STATE: categories whose threshold is a per-year
* steady-state safety rate (current pyaesa output for all 10 categories).
* Tightening only via Approach B (IS against ORIGINAL, idempotent on recovery).
SET PB_THRESHOLD_TYPE_STEADY_STATE(PB_THRESHOLDS_SET) 'Steady-state safety-rate threshold categories (Approach B tightening)'
/
  SOS_CO2_sector
  SOS_Ozone_depletion_sector
  SOS_LU_sector
  SOS_WU_sector
  SOS_EUTROPHICATION_FRESHWATER_sector
  SOS_ECOTOXICITY_FRESHWATER_sector
  SOS_PM_sector
  SOS_RADIATION_sector
  SOS_ACIDIFICATION_sector
  SOS_RESOURCE_sector
/;

SCALAR PB_RF_FLOOR_FRAC 'Min adjusted thr as fraction of original (default 0.1 = at most 90% tightening per update)' / 0.1 /;

* Sanity checks: every category must be classified as either CUMULATIVE or
* STEADY_STATE, and the two sets must be disjoint. Either condition violated
* would silently route a category through unintended logic; ABORT instead.
ABORT$(SUM(PB_THRESHOLDS_SET$(PB_THRESHOLD_TYPE_CUMULATIVE(PB_THRESHOLDS_SET) AND PB_THRESHOLD_TYPE_STEADY_STATE(PB_THRESHOLDS_SET)), 1) > 0)
    'PB_RULE_CONFIG: PB_THRESHOLD_TYPE_CUMULATIVE and PB_THRESHOLD_TYPE_STEADY_STATE overlap; each category must be in exactly one set';
ABORT$(SUM(PB_THRESHOLDS_SET$((NOT PB_THRESHOLD_TYPE_CUMULATIVE(PB_THRESHOLDS_SET)) AND (NOT PB_THRESHOLD_TYPE_STEADY_STATE(PB_THRESHOLDS_SET))), 1) > 0)
    'PB_RULE_CONFIG: every PB category must be classified -- assign each one to either PB_THRESHOLD_TYPE_CUMULATIVE or PB_THRESHOLD_TYPE_STEADY_STATE';
