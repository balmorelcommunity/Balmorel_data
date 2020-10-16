PARAMETER GKFX(YYY,AAA,GGG)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      'Capacity of generation technologies';
TABLE GKFX1(AAA,GGG,YYY)
                                                        2020    2030    2040    2050
HSTAN_A1        .       GNR_CC_NGAS_CND_E-51            1000    500
HSTAN_A1        .       GNR_GT_LIGHTOIL_CND_E-27        2500    2500    2500    2500
HSTAN_A1        .       GNR_WT_WIND_ONS                         5000    10000   10000
HSTAN_A1        .       GNR_PV_SUN                                      5000    5000
HSTAN_A1        .       GNR_ROR_WTR                     10000   10000   10000   10000
HSTAN_A1        .       GNR_RES_WTR_NOPMP_MC-01         24000   24000   24000   24000
WINDIA_A1       .       GNR_CC_NGAS_CND_E-51            500     500     500     500
WINDIA_A1       .       GNR_ST_COAL_CND_E-33            2000    1000
WINDIA_A1       .       GNR_ST_COAL_CND_E-40            500
WINDIA_A1       .       GNR_GT_LIGHTOIL_CND_E-27        2500    2500    2500    2500
WINDIA_A1       .       GNR_WT_WIND_ONS                         2000    4000    5000
WINDIA_A1       .       GNR_PV_SUN                                      5000    5000

HSTAN_A2        .       GNR_BO_BIOIL_E-90                       5000    5000    5000
HSTAN_A2        .       GNR_BO_ELEC_E-98                        1000    1000    1000
HSTAN_A2        .       GNR_BO_FUELOIL_E-90             5000
HSTAN_A2        .       GNR_BO_MSW_E-90                         250     250     250
WINDIA_A2       .       GNR_ST_WOODCHI_BP_E-30
WINDIA_A2       .       GNR_ST_COAL_EXT_E-39                    500     500
WINDIA_A2       .       GNR_ENG_NGAS_BP_E-45                    500     500     500
WINDIA_A2       .       GNR_BO_BIOIL_E-90                       10000   10000   10000
WINDIA_A2       .       GNR_BO_FUELOIL_E-90             10000
WINDIA_A2       .       GNR_BO_MSW_E-90                         200     200     200
;
GKFX(Y,AAA,GGG) = GKFX1(AAA,GGG,Y);

$offmulti

*GKFX(YYY,AAA,'Back-up-power') =50000;
GKFX(Y,AAA,GGG) = GKFX1(AAA,GGG,Y);
