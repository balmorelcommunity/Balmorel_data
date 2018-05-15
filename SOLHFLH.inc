PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'                       
* NOT REAL DATA, DEMONSTRATION ONLY. Same data used for all regions as for Germany     
/                                                                                      
DK2_NoDH                                                                           816 
DK1_NoDH                                                                           816 
                                                                                       
FinA                                                                               1040
DE4-E_A                                                                            1040
DE4-N_A                                                                            1040
DE4-S_A                                                                            1040
DE4-W_A                                                                            1040
NL_A                                                                               1040
NO1_A1                                                                             1040
NO2_A1                                                                             1040
NO3_A1                                                                             1040
NO4_A1                                                                             1040
NO5_A1                                                                             1040
SE1A                                                                               1040
SE2A                                                                               1040
SE3A                                                                               1040
SE4A                                                                               1040
UK_A                                                                               1040
EE_Rural                                                                           1040
LV_A                                                                               1040
LT_A                                                                               1040
/;                                                                                     
SOLHFLH(AAA)$(SOLHFLH(AAA) EQ 0) = SOLHFLH('DK2_NoDH') ;                               
