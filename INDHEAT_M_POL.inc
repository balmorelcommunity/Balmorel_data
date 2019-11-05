*Emission prices set the same as EU ETS for now.                        Default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted
*LIM applies only in indheat_eu

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu

TABLE INDHEAT_M_POL(YYY,MPOLSET,SECTOR,CCC)  'Emission policy data'
                                                                        RES.DENMARK RES.UNITED_KINGDOM
* Units:                                                                t CO2       t CO2
2020.LIM_CO2
2030.LIM_CO2
2040.LIM_CO2
2050.LIM_CO2
;
INDHEAT_M_POL('2050','LIM_CO2',SECTOR,CCC)=EPS;
$label endindheat_eu

INDHEAT_M_POL(Y,'TAX_CO2',SECTOR,C) = M_POL(Y,'TAX_CO2',C);
INDHEAT_M_POL(Y,'TAX_SO2',SECTOR,C) = M_POL(Y,'TAX_SO2',C);
INDHEAT_M_POL(Y,'TAX_NOX',SECTOR,C) = M_POL(Y,'TAX_NOX',C);
INDHEAT_M_POL(Y,'TAX_CO2','RES',C) = 0;
