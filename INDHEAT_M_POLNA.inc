*Emission prices set the same as EU ETS for now.  Default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted
*LIM applies only in indheat_eu

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu


TABLE INDHEAT_M_POLNA(YYY,MPOLSET) 'Emission policy data in all countries by sector.'

      LIM_CO2
2020
2030
2040
2050
;

$label endindheat_eu
