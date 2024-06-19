PARAMETER WNDFLH(AAA)  'Full load hours for wind power (hours)'                                                                                                                 
/                                                                                                                                                                               
                                                                                                                                                                                
DK1_NoDH                                                                                                                                                        2202.23589015986
DK2_NoDH                                                                                                                                                        2368.97717551004
NO3_A1                                                                                                                                                          3392.71083846055
NO4_A1                                                                                                                                                          3520.66688056646
NO2_A1                                                                                                                                                          3267.47777477613
NO5_A1                                                                                                                                                          3520.66688056646
NO1_A1                                                                                                                                                          3267.47777477613
DK1_Offshore                                                                                                                                                    3873.06282178953
DK2_Offshore                                                                                                                                                    2969.17929910534
DK2_VRE-OFF1_20-30                                                                                                                                              4545.98978950348
DK1_VRE-OFF1_20-30                                                                                                                                              4521.62080544798
NO3_VRE-OFF1_20-30                                                                                                                                              4140.25855294986
NO4_VRE-OFF1_20-30                                                                                                                                              4172.7397094965 
NO2_VRE-OFF1_20-30                                                                                                                                              4731.51170492638
NO5_VRE-OFF1_20-30                                                                                                                                              4564.52553920863
DK2_VRE-OFF1_30-40                                                                                                                                              4545.98978950348
DK1_VRE-OFF1_30-40                                                                                                                                              4521.62080544798
NO3_VRE-OFF1_30-40                                                                                                                                              4140.25855294986
NO4_VRE-OFF1_30-40                                                                                                                                              4172.7397094965 
NO2_VRE-OFF1_30-40                                                                                                                                              4731.51170492638
NO5_VRE-OFF1_30-40                                                                                                                                              4564.52553920863
DK2_VRE-OFF1_40-50                                                                                                                                              4545.98978950348
DK1_VRE-OFF1_40-50                                                                                                                                              4792.72122317389
NO3_VRE-OFF1_40-50                                                                                                                                              4341.05342360307
NO4_VRE-OFF1_40-50                                                                                                                                              4402.44317399865
NO2_VRE-OFF1_40-50                                                                                                                                              4923.04682499193
NO5_VRE-OFF1_40-50                                                                                                                                              4757.71117382281
DK2_VRE-OFF1_50                                                                                                                                                 4545.98978950348
DK1_VRE-OFF1_50                                                                                                                                                 4792.72122317389
NO3_VRE-OFF1_50                                                                                                                                                 4341.05342360307
NO4_VRE-OFF1_50                                                                                                                                                 4402.44317399865
NO2_VRE-OFF1_50                                                                                                                                                 4923.04682499193
NO5_VRE-OFF1_50                                                                                                                                                 4757.71117382281
DK1_VRE-ONS_SP277-HH100                                                                                                                                         3386.86768009496
DK2_VRE-ONS_SP277-HH100                                                                                                                                         3365.37481118894
NO1_VRE-ONS_SP277-HH100                                                                                                                                         2453.23313322192
NO2_VRE-ONS_SP277-HH100                                                                                                                                         3453.76532088703
NO3_VRE-ONS_SP277-HH100                                                                                                                                         3822.16241958054
NO4_VRE-ONS_SP277-HH100                                                                                                                                         4050.94576624534
NO5_VRE-ONS_SP277-HH100                                                                                                                                         3457.34605020809
                                                                                                                                                                                
                                                                                                                                                                                
/;                                                                                                                                                                              
                                                                                                                                                                                
                                                                                                                                                                                
                                                                                                                                                                                
* If WNDFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as FinA                                                          
WNDFLH(IA)$((NOT WNDFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GWND), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GWND), GKFX(Y,IA,G)))) = WNDFLH('NO1_A1') ;                 
