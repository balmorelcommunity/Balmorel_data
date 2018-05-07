PARAMETER WNDFLH(AAA)  'Full load hours for wind power (hours)'                                    
/                                                                                                  
DK2_NoDH                                                                           2959            
DK1_NoDH                                                                           3199            
FinA                                                                               1937            
DE4-E_A                                                                            2263            
DE4-N_A                                                                            2467            
DE4-S_A                                                                            1887            
DE4-W_A                                                                            2177            
NO1_A1                                                                             2798            
NO2_A1                                                                             2798            
NO3_A1                                                                             2782            
NO4_A1                                                                             3120            
NO5_A1                                                                             2798            
SE1A                                                                               2533            
SE2A                                                                               2533            
SE3A                                                                               2212            
SE4A                                                                               2012            
UK_A                                                                               3176            
                                                                                                   
EE_A                                                                               2020            
LV_A                                                                               2019            
LT_A                                                                               1932            
PL_A                                                                               2286            
NL_A                                                                               2860            
                                                                                                   
                                                                                                   
DK2_Offshore                                                                       4380            
DK1_Offshore                                                                       4466            
DE4-E_Offshore_A                                                                   4380            
DE4-N_Offshore_A                                                                   4477            
DE4-W_Offshore_A                                                                   4477            
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
UK_OFFSHORE                                                                        3324            
/;                                                                                                 
WNDFLH(AAA)$(WNDFLH(AAA) EQ 0) = WNDFLH('FinA') ;                                                  
                                                                                                   
                                                                                                   
PARAMETER SOLEFLH(AAA)  'Full load hours for solar power'                                          
* Same data used for all regions as for Germany                                                    
/                                                                                                  
DK2_NoDH                                                                           1097.88013030086
DK1_NoDH                                                                           1099.12786969914
                                                                                                   
FinA                                                                               900             
DE4-E_A                                                                            1084.15773430489
DE4-N_A                                                                            1046.76999286996
DE4-S_A                                                                            1118.53727485046
DE4-W_A                                                                            1084.15773430489
NL_A                                                                               1098.504        
NO1_A1                                                                             957.869595400869
NO2_A1                                                                             953.285626109235
NO3_A1                                                                             907.046569963796
NO4_A1                                                                             877.325271495026
NO5_A1                                                                             798.352937031074
SE1A                                                                               961.490503317708
SE2A                                                                               986.138215874704
SE3A                                                                               1016.49276257529
SE4A                                                                               1020.2769844501 
UK_A                                                                               1098.504        
EE_A                                                                               998.64          
LV_A                                                                               998.64          
LT_A                                                                               998.64          
/;                                                                                                 
SOLEFLH(AAA)$(SOLEFLH(AAA) EQ 0) = SOLEFLH('DK2_NoDH') ;                                           
                                                                                                   
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
                                                                                                   
                                                                                                   
                                                                                                   
PARAMETER WAVEFLH(AAA)  'Full load hours for wave power (hours)'                                   
* NOT REAL DATA, DEMONSTRATION ONLY.                                                               
/                                                                                                  
DK2_Medium                                                                         816             
DK2_Rural                                                                          816             
DK1_MedSmall                                                                       816             
DK1_Rural                                                                          816             
                                                                                                   
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
EE_A                                                                               1040            
LV_A                                                                               1040            
LT_A                                                                               1040            
/;                                                                                                 
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
                                                                                                   
