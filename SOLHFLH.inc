PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'                                                                                                                    
* Data from https://zenodo.org/record/1146666#.Xl-shqhKguU                                                                                                                          
/                                                                                                                                                                                   
FinA                                                                                                                                                                386.329175591457
DE4-E_A                                                                                                                                                             612.251263689368
DE4-N_A                                                                                                                                                             612.251263689368
DE4-S_A                                                                                                                                                             612.251263689368
DE4-W_A                                                                                                                                                             612.251263689368
SE1A                                                                                                                                                                501.022626588929
SE2A                                                                                                                                                                501.022626588929
SE3A                                                                                                                                                                501.022626588929
SE4A                                                                                                                                                                501.022626588929
EE_Enefit                                                                                                                                                           444.791212631231
EE_Kohtla_Jarve                                                                                                                                                     444.791212631231
EE_Narva                                                                                                                                                            444.791212631231
EE_Parnu                                                                                                                                                            444.791212631231
EE_Rural                                                                                                                                                            444.791212631231
EE_Sillamae                                                                                                                                                         444.791212631231
EE_Tallinn                                                                                                                                                          444.791212631231
EE_Tartu                                                                                                                                                            444.791212631231
EE_Urban                                                                                                                                                            444.791212631231
LT_A                                                                                                                                                                490.359980287282
LT_KauU                                                                                                                                                             490.359980287282
LT_KlaU                                                                                                                                                             490.359980287282
LT_Other_DH                                                                                                                                                         490.359980287282
LT_Panevezys                                                                                                                                                        490.359980287282
LT_Rural                                                                                                                                                            490.359980287282
LT_SiaU                                                                                                                                                             490.359980287282
LT_VilU                                                                                                                                                             490.359980287282
LV_A                                                                                                                                                                466.25452712218 
LV_Other_DH                                                                                                                                                         466.25452712218 
LV_RigaR                                                                                                                                                            466.25452712218 
LV_Rural                                                                                                                                                            466.25452712218 
NL_A                                                                                                                                                                531.818287642972
PL_A                                                                                                                                                                584.952690003189
PL_Rural                                                                                                                                                            584.952690003189
UK_A                                                                                                                                                                455.498730490753
FI_large                                                                                                                                                            386.329175591457
FI_large_gas                                                                                                                                                        386.329175591457
FI_medium                                                                                                                                                           386.329175591457
FI_medium_gas                                                                                                                                                       386.329175591457
FI_small                                                                                                                                                            386.329175591457
FI_small_gas                                                                                                                                                        386.329175591457
NO1_A1                                                                                                                                                              423.202360176718
NO1_A2                                                                                                                                                              423.202360176718
NO1_A3                                                                                                                                                              423.202360176718
NO2_A1                                                                                                                                                              423.202360176718
NO2_A2                                                                                                                                                              423.202360176718
NO3_A1                                                                                                                                                              423.202360176718
NO3_A2                                                                                                                                                              423.202360176718
NO3_A3                                                                                                                                                              423.202360176718
NO4_A1                                                                                                                                                              423.202360176718
NO4_A2                                                                                                                                                              423.202360176718
NO5_A1                                                                                                                                                              423.202360176718
NO5_A2                                                                                                                                                              423.202360176718
SE1_medium                                                                                                                                                          501.022626588929
SE1_small                                                                                                                                                           501.022626588929
SE2_medium                                                                                                                                                          501.022626588929
SE2_small                                                                                                                                                           501.022626588929
SE3_large                                                                                                                                                           501.022626588929
SE3_medium                                                                                                                                                          501.022626588929
SE3_small                                                                                                                                                           501.022626588929
SE4_large                                                                                                                                                           501.022626588929
SE4_medium                                                                                                                                                          501.022626588929
SE4_small                                                                                                                                                           501.022626588929
DK1_Large                                                                                                                                                           520.212001354722
DK1_Rural                                                                                                                                                           520.212001354722
DK1_Medium                                                                                                                                                          520.212001354722
DK2_Large                                                                                                                                                           520.212001354722
DK2_Rural                                                                                                                                                           520.212001354722
DK2_Medium                                                                                                                                                          520.212001354722
DK2_MedSmall                                                                                                                                                        520.212001354722
DK1_Small                                                                                                                                                           520.212001354722
DK1_MedSmall                                                                                                                                                        520.212001354722
DK2_Small                                                                                                                                                           520.212001354722
DK2_NoDH                                                                                                                                                            520.212001354722
DK1_NoDH                                                                                                                                                            520.212001354722
BE_A                                                                                                                                                                561.986968554354
FR_A                                                                                                                                                                709.367418438484
IT_A                                                                                                                                                                700             
CH_A                                                                                                                                                                650             
AT_A                                                                                                                                                                650             
CZ_A                                                                                                                                                                600             
ES_A                                                                                                                                                                800             
PT_A                                                                                                                                                                800             
                                                                                                                                                                                    
/;                                                                                                                                                                                  
                                                                                                                                                                                    
                                                                                                                                                                                    
* If SOLHFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as DK2_NoDH                                                         
*SOLHFLH(IA)$((NOT SOLHFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLH), GKFX(Y,IA,G)))) = SOLHFLH('FR_A') ;                 
                                                                                                                                                                                    
