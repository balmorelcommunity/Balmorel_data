*-------------------------------------------------------------------------------
* PB_GDTYPE_SET.inc  --  Generator-type element list for the PB add-on
*-------------------------------------------------------------------------------
* Part of the Balmorel Planetary Boundaries (PB) add-on.
*
* Populates the PB_GDTYPE_SET set (declared empty in PB_setdefine.inc).
* Each element identifies a generator archetype used as the third index in
* the PB_LCA_DATA family of TABLEs. The set is partitioned into three
* logical groups:
*
*   (1) HYDROGEN technologies      gated by %HYDROGEN%==yes
*   (2) Electricity / Heat / CHP   always loaded (no gate)
*   (3) Electric-vehicle archetypes   always loaded (used by PB_LCA_DATA_EV)
*
* The HYDROGEN gate ensures the H2-specific generator types are only
* declared when the hydrogen add-on is active, mirroring the conditional
* inclusion of H2 LCA data in PB_pardefine.inc.
*
* Authors: Theo Balanza & Dhruv Sharma
*-------------------------------------------------------------------------------

SET PB_GDTYPE_SET 'Generator-type labels used as third index of PB_LCA_DATA*'
/

* --- (1) Hydrogen technologies (loaded only when %HYDROGEN%==yes) -------------
$ifi not %HYDROGEN%==yes $goto Only_Elec_Heat_CHP
HYDROGEN_GETOH2
HYDROGEN_GETOHH2
HYDROGEN_GH2TOE
HYDROGEN_GH2STO
HYDROGEN_GCH4TOH2
HYDROGEN_GBIOGASUPGRADING
HYDROGEN_GBIOGASMETHANATION
$label Only_Elec_Heat_CHP

* --- (2) Electricity / Heat / CHP technologies (always loaded) ----------------
GWND
GCND
GSOLE
GESTO
GHYRS
GETOH
GSOLH
GHOB
GBPR
GEXT
GHSTO
GHSTOS
GHYRR

* --- (3) Electric-vehicle archetypes (always loaded; used by PB_LCA_DATA_EV) --
CAR_EV_ONLY_BATTERY
CAR_EV_WITHOUT_BATTERY
CAR_DIESEL

/;
