TABLE M_POLNA(YYY,MPOLSET)  "Emission policy data; default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted (aggerated countries)"

*                                                                                                                                                                 LIM_CO2    LIM_SO2    LIM_NOX
* Units:                                                                                                                                                          t CO2/year t SO2/year t NOx/year
*2012

;

M_POLNA('2030','LIM_CO2')= 494000000 * (1-0.28);
M_POLNA('2040','LIM_CO2')= M_POLNA('2030','LIM_CO2')/2;
M_POLNA('2050','LIM_CO2')= eps;
