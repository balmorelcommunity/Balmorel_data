PARAMETER WNDFLH(AAA)  'Full load hours for wind power (hours)'                 
/                                                                               
DK2_NoDH                                                        2959            
DK1_NoDH                                                        3199            
FinA                                                            1937            
DE4-E_A                                                         2263            
DE4-N_A                                                         2467            
DE4-S_A                                                         1887            
DE4-W_A                                                         2177            
NO1_A1                                                          2798            
NO2_A1                                                          2798            
NO3_A1                                                          2782            
NO4_A1                                                          3120            
NO5_A1                                                          2798            
SE1A                                                            2533            
SE2A                                                            2533            
SE3A                                                            2212            
SE4A                                                            2012            
UK_A                                                            3176            
                                                                                
EE_A                                                            2020            
LV_A                                                            2019            
LT_A                                                            1932            
PL_A                                                            2286            
NL_A                                                            2860            
                                                                                
                                                                                
DK2_Offshore                                                    4385.55367807462
DK1_Offshore                                                    4590.06282111033
DE4-E_Offshore_A                                                4533.91095821735
DE4-N_Offshore_A                                                4636.6909935232 
DE4-W_Offshore_A                                                4636.6909935232 
SE1_Offshore                                                    3721.248        
SE2_Offshore                                                    3563.568        
SE3_Offshore                                                    3872.796        
SE4_Offshore                                                    4333.572        
NO1_Offshore                                                    3942            
NO2_Offshore                                                    4532.63189907563
NO3_Offshore                                                    4089.34448842777
NO4_Offshore                                                    4156.04267384894
NO5_Offshore                                                    4564.52553921362
FI_Offshore                                                     3942            
                                                                                
UK_OFFSHORE                                                     4510.18077510104
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
/;                                                                              
WNDFLH(AAA)$(WNDFLH(AAA) EQ 0) = WNDFLH('FinA') ;                               
