PARAMETER SOLEFLH(AAA)  'Full load hours for solar power'                           
* Same data used for all regions as for Germany                                     
/                                                                                   
DK2_NoDH                                                  980                       
DK1_NoDH                                                  970                       
                                                                                    
FinA                                                      900                       
DE4-E_A                                                   1084.15773430489          
DE4-N_A                                                   1046.76999286996          
DE4-S_A                                                   1118.53727485046          
DE4-W_A                                                   1084.15773430489          
NL_A                                                      1000                      
NO1_A1                                                    957.869595400869          
NO2_A1                                                    953.285626109235          
NO3_A1                                                    907.046569963796          
NO4_A1                                                    877.325271495026          
NO5_A1                                                    798.352937031074          
SE1A                                                      961.490503317708          
SE2A                                                      986.138215874704          
SE3A                                                      1016.49276257529          
SE4A                                                      1020.2769844501           
UK_A                                                      1098.504                  
EE_A                                                      998.64                    
LV_A                                                      998.64                    
LT_A                                                      998.64                    
BE_A                                                      1010                      
FR_A                                                      1180                      
PL_A                                                      1054                      
                                                                                    
/;                                                                                  
                                                                                    
SOLEFLH(AAA)$(SOLEFLH(AAA)=0)=SOLEFLH('DK2_NoDH');                                  
