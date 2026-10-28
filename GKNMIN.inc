* PARAMETER GKNMIN holds the minimum capacities of those production technologies
* for which investments is mandatory (accumulated endogenous capacity in that year).
* Units: MW (MWh for storage), as GKFX.
* No minimums by default. Add lines below, e.g.
* GKNMIN('2050','DK1_NoDH','GNR_ES_ELEC_BAT-LITHIO-GRID_E-86_Y-2050') = 100;
GKNMIN(YYY,AAA,GGG) = 0;
