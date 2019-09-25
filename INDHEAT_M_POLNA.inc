*Emission prices set the same as EU ETS for now.  Default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted
*LIM applies only in indheat_eu

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu


TABLE INDHEAT_M_POLNA(YYY,MPOLSET,SECTOR) 'Emission policy data in all countries by sector.'

                                                                                                                                          RES
2020.LIM_CO2
2030.LIM_CO2
2040.LIM_CO2
2050.LIM_CO2
;
$label endindheat_eu
