SET XHGETOH(GGG) "Heat pumps used for lifting temperature for heat transmitted between two Areas"
/
$ifi not %INDUSTRY%==yes $goto noindustry
* Try out with/without and verify:
GNR_HP_ELEC_COP-160_PHL_Y-2020
GNR_HP_ELEC_COP-160_PHL_Y-2030
GNR_HP_ELEC_COP-160_PHL_Y-2040
GNR_HP_ELEC_COP-160_PHL_Y-2050
GNR_HP_ELEC_COP-100_PHH_Y-2020
GNR_HP_ELEC_COP-100_PHH_Y-2030
GNR_HP_ELEC_COP-100_PHH_Y-2040
GNR_HP_ELEC_COP-100_PHH_Y-2050
$label noindustry
/;
