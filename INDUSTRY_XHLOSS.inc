PARAMETER XHLOSS(IAAAE,IAAAI)  "Heat transmission loss between areas (calculated from exported quantity) (share)";    
                                                                                                                      
*Loss of High Temperature areas to Low Temperature areas is assumed to be 0 (they are in the same location)           
XHLOSS('BE_IND-HT-NODH','BE_IND-LT-NODH')=0;                                                                          
XHLOSS('BE_IND-HT-DH','BE_IND-LT-DH')=0;                                                                              
XHLOSS('DE4-E_IND-HT-NODH','DE4-E_IND-LT-NODH')=0;                                                                    
XHLOSS('DE4-E_IND-HT-DH','DE4-E_IND-LT-DH')=0;                                                                        
XHLOSS('DE4-N_IND-HT-NODH','DE4-N_IND-LT-NODH')=0;                                                                    
XHLOSS('DE4-N_IND-HT-DH','DE4-N_IND-LT-DH')=0;                                                                        
XHLOSS('DE4-S_IND-HT-NODH','DE4-S_IND-LT-NODH')=0;                                                                    
XHLOSS('DE4-S_IND-HT-DH','DE4-S_IND-LT-DH')=0;                                                                        
XHLOSS('DE4-W_IND-HT-NODH','DE4-W_IND-LT-NODH')=0;                                                                    
XHLOSS('DE4-W_IND-HT-DH','DE4-W_IND-LT-DH')=0;                                                                        
XHLOSS('DK1_IND-HT-NODH','DK1_IND-LT-NODH')=0;                                                                        
XHLOSS('DK1_IND-HT-DH','DK1_IND-LT-DH')=0;                                                                            
XHLOSS('DK2_IND-HT-NODH','DK2_IND-LT-NODH')=0;                                                                        
XHLOSS('DK2_IND-HT-DH','DK2_IND-LT-DH')=0;                                                                            
XHLOSS('EE_IND-HT-NODH','EE_IND-LT-NODH')=0;                                                                          
XHLOSS('EE_IND-HT-DH','EE_IND-LT-DH')=0;                                                                              
XHLOSS('FIN_IND-HT-NODH','FIN_IND-LT-NODH')=0;                                                                        
XHLOSS('FIN_IND-HT-DH','FIN_IND-LT-DH')=0;                                                                            
XHLOSS('FR_IND-HT-NODH','FR_IND-LT-NODH')=0;                                                                          
XHLOSS('FR_IND-HT-DH','FR_IND-LT-DH')=0;                                                                              
XHLOSS('LT_IND-HT-NODH','LT_IND-LT-NODH')=0;                                                                          
XHLOSS('LT_IND-HT-DH','LT_IND-LT-DH')=0;                                                                              
XHLOSS('LV_IND-HT-NODH','LV_IND-LT-NODH')=0;                                                                          
XHLOSS('LV_IND-HT-DH','LV_IND-LT-DH')=0;                                                                              
XHLOSS('NL_IND-HT-NODH','NL_IND-LT-NODH')=0;                                                                          
XHLOSS('NL_IND-HT-DH','NL_IND-LT-DH')=0;                                                                              
XHLOSS('NO1_IND-HT-NODH','NO1_IND-LT-NODH')=0;                                                                        
XHLOSS('NO1_IND-HT-DH','NO1_IND-LT-DH')=0;                                                                            
XHLOSS('NO2_IND-HT-NODH','NO2_IND-LT-NODH')=0;                                                                        
XHLOSS('NO2_IND-HT-DH','NO2_IND-LT-DH')=0;                                                                            
XHLOSS('NO3_IND-HT-NODH','NO3_IND-LT-NODH')=0;                                                                        
XHLOSS('NO3_IND-HT-DH','NO3_IND-LT-DH')=0;                                                                            
XHLOSS('NO4_IND-HT-NODH','NO4_IND-LT-NODH')=0;                                                                        
XHLOSS('NO4_IND-HT-DH','NO4_IND-LT-DH')=0;                                                                            
XHLOSS('NO5_IND-HT-NODH','NO5_IND-LT-NODH')=0;                                                                        
XHLOSS('NO5_IND-HT-DH','NO5_IND-LT-DH')=0;                                                                            
XHLOSS('PL_IND-HT-NODH','PL_IND-LT-NODH')=0;                                                                          
XHLOSS('PL_IND-HT-DH','PL_IND-LT-DH')=0;                                                                              
XHLOSS('SE1_IND-HT-NODH','SE1_IND-LT-NODH')=0;                                                                        
XHLOSS('SE1_IND-HT-DH','SE1_IND-LT-DH')=0;                                                                            
XHLOSS('SE2_IND-HT-NODH','SE2_IND-LT-NODH')=0;                                                                        
XHLOSS('SE2_IND-HT-DH','SE2_IND-LT-DH')=0;                                                                            
XHLOSS('SE3_IND-HT-NODH','SE3_IND-LT-NODH')=0;                                                                        
XHLOSS('SE3_IND-HT-DH','SE3_IND-LT-DH')=0;                                                                            
XHLOSS('SE4_IND-HT-NODH','SE4_IND-LT-NODH')=0;                                                                        
XHLOSS('SE4_IND-HT-DH','SE4_IND-LT-DH')=0;                                                                            
XHLOSS('UK_IND-HT-NODH','UK_IND-LT-NODH')=0;                                                                          
XHLOSS('UK_IND-HT-DH','UK_IND-LT-DH')=0;                                                                              
                                                                                                                      
                                                                                                                      
*Loss from industry areas to other areas is 0 not do double count losses in distribution network                      
XHLOSS('BE_IND-LT-DH','BE_A')=0;                                                                                      
XHLOSS('DE4-E_IND-LT-DH','DE4-E_A')=0;                                                                                
XHLOSS('DE4-N_IND-LT-DH','DE4-N_A')=0;                                                                                
XHLOSS('DE4-S_IND-LT-DH','DE4-S_A')=0;                                                                                
XHLOSS('DE4-W_IND-LT-DH','DE4-W_A')=0;                                                                                
XHLOSS('DK1_IND-LT-DH','DK1_Large')=0;                                                                                
XHLOSS('DK2_IND-LT-DH','DK2_Large')=0;                                                                                
XHLOSS('EE_IND-LT-DH','EE_Tallinn')=0;                                                                                
XHLOSS('FIN_IND-LT-DH','FI_large')=0;                                                                                 
XHLOSS('FR_IND-LT-DH','FR_A')=0;                                                                                      
XHLOSS('LT_IND-LT-DH','LT_Other_DH')=0;                                                                               
XHLOSS('LV_IND-LT-DH','LV_RigaR')=0;                                                                                  
XHLOSS('NL_IND-LT-DH','NL_A')=0;                                                                                      
XHLOSS('NO1_IND-LT-DH','NO1_A2')=0;                                                                                   
XHLOSS('NO2_IND-LT-DH','NO2_A2')=0;                                                                                   
XHLOSS('NO3_IND-LT-DH','NO3_A2')=0;                                                                                   
XHLOSS('NO4_IND-LT-DH','NO4_A2')=0;                                                                                   
XHLOSS('NO5_IND-LT-DH','NO5_A2')=0;                                                                                   
XHLOSS('PL_IND-LT-DH','PL_A')=0;                                                                                      
XHLOSS('SE1_IND-LT-DH','SE1_medium')=0;                                                                               
XHLOSS('SE2_IND-LT-DH','SE2_medium')=0;                                                                               
XHLOSS('SE3_IND-LT-DH','SE3_large')=0;                                                                                
XHLOSS('SE4_IND-LT-DH','SE4_large')=0;                                                                                
XHLOSS('UK_IND-LT-DH','UK_A')=0;                                                                                      
XHLOSS('BE_IND-LT-NODH','BE_A')=0;                                                                                    
XHLOSS('DE4-E_IND-LT-NODH','DE4-E_A')=0;                                                                              
XHLOSS('DE4-N_IND-LT-NODH','DE4-N_A')=0;                                                                              
XHLOSS('DE4-S_IND-LT-NODH','DE4-S_A')=0;                                                                              
XHLOSS('DE4-W_IND-LT-NODH','DE4-W_A')=0;                                                                              
XHLOSS('DK1_IND-LT-NODH','DK1_Large')=0;                                                                              
XHLOSS('DK2_IND-LT-NODH','DK2_Large')=0;                                                                              
XHLOSS('EE_IND-LT-NODH','EE_Tallinn')=0;                                                                              
XHLOSS('FIN_IND-LT-NODH','FI_large')=0;                                                                               
XHLOSS('FR_IND-LT-NODH','FR_A')=0;                                                                                    
XHLOSS('LT_IND-LT-NODH','LT_Other_DH')=0;                                                                             
XHLOSS('LV_IND-LT-NODH','LV_RigaR')=0;                                                                                
XHLOSS('NL_IND-LT-NODH','NL_A')=0;                                                                                    
XHLOSS('NO1_IND-LT-NODH','NO1_A2')=0;                                                                                 
XHLOSS('NO2_IND-LT-NODH','NO2_A2')=0;                                                                                 
XHLOSS('NO3_IND-LT-NODH','NO3_A2')=0;                                                                                 
XHLOSS('NO4_IND-LT-NODH','NO4_A2')=0;                                                                                 
XHLOSS('NO5_IND-LT-NODH','NO5_A2')=0;                                                                                 
XHLOSS('PL_IND-LT-NODH','PL_A')=0;                                                                                    
XHLOSS('SE1_IND-LT-NODH','SE1_medium')=0;                                                                             
XHLOSS('SE2_IND-LT-NODH','SE2_medium')=0;                                                                             
XHLOSS('SE3_IND-LT-NODH','SE3_large')=0;                                                                              
XHLOSS('SE4_IND-LT-NODH','SE4_large')=0;                                                                              
XHLOSS('UK_IND-LT-NODH','UK_A')=0;                                                                                    
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
                                                                                                                      
