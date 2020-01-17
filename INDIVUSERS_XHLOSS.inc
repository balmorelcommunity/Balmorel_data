PARAMETER XHLOSS(IAAAE,IAAAI)  "Heat transmission loss between areas (calculated from exported quantity) (share)";       
                                                                                                                         
*Loss of High Temperature areas to Low Temperature areas is assumed to be 0 (they are in the same location)              
XHLOSS('BE_IDVU-HOTWTR','BE_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('DE4-E_IDVU-HOTWTR','DE4-E_IDVU-SPACEHEAT')=0;                                                                    
XHLOSS('DE4-N_IDVU-HOTWTR','DE4-N_IDVU-SPACEHEAT')=0;                                                                    
XHLOSS('DE4-S_IDVU-HOTWTR','DE4-S_IDVU-SPACEHEAT')=0;                                                                    
XHLOSS('DE4-W_IDVU-HOTWTR','DE4-W_IDVU-SPACEHEAT')=0;                                                                    
XHLOSS('DK1_IDVU-HOTWTR','DK1_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('DK2_IDVU-HOTWTR','DK2_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('EE_IDVU-HOTWTR','EE_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('FIN_IDVU-HOTWTR','FIN_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('FR_IDVU-HOTWTR','FR_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('LT_IDVU-HOTWTR','LT_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('LV_IDVU-HOTWTR','LV_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('NL_IDVU-HOTWTR','NL_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('NO1_IDVU-HOTWTR','NO1_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('NO2_IDVU-HOTWTR','NO2_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('NO3_IDVU-HOTWTR','NO3_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('NO4_IDVU-HOTWTR','NO4_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('NO5_IDVU-HOTWTR','NO5_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('PL_IDVU-HOTWTR','PL_IDVU-SPACEHEAT')=0;                                                                          
XHLOSS('SE1_IDVU-HOTWTR','SE1_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('SE2_IDVU-HOTWTR','SE2_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('SE3_IDVU-HOTWTR','SE3_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('SE4_IDVU-HOTWTR','SE4_IDVU-SPACEHEAT')=0;                                                                        
XHLOSS('UK_IDVU-HOTWTR','UK_IDVU-SPACEHEAT')=0;                                                                          
                                                                                                                         
                                                                                                                         
*Loss from water heating individual heating areas to dh areas is 0 not do double count losses in distribution network    
XHLOSS('BE_IDVU-HOTWTR','BE_A')=0;                                                                                       
XHLOSS('DE4-E_IDVU-HOTWTR','DE4-E_A')=0;                                                                                 
XHLOSS('DE4-N_IDVU-HOTWTR','DE4-N_A')=0;                                                                                 
XHLOSS('DE4-S_IDVU-HOTWTR','DE4-S_A')=0;                                                                                 
XHLOSS('DE4-W_IDVU-HOTWTR','DE4-W_A')=0;                                                                                 
XHLOSS('DK1_IDVU-HOTWTR','DK1_Large')=0;                                                                                 
XHLOSS('DK2_IDVU-HOTWTR','DK2_Large')=0;                                                                                 
XHLOSS('EE_IDVU-HOTWTR','EE_Tallinn')=0;                                                                                 
XHLOSS('FIN_IDVU-HOTWTR','FI_large')=0;                                                                                  
XHLOSS('FR_IDVU-HOTWTR','FR_A')=0;                                                                                       
XHLOSS('LT_IDVU-HOTWTR','LT_Other_DH')=0;                                                                                
XHLOSS('LV_IDVU-HOTWTR','LV_RigaR')=0;                                                                                   
XHLOSS('NL_IDVU-HOTWTR','NL_A')=0;                                                                                       
XHLOSS('NO1_IDVU-HOTWTR','NO1_A2')=0;                                                                                    
XHLOSS('NO2_IDVU-HOTWTR','NO2_A2')=0;                                                                                    
XHLOSS('NO3_IDVU-HOTWTR','NO3_A2')=0;                                                                                    
XHLOSS('NO4_IDVU-HOTWTR','NO4_A2')=0;                                                                                    
XHLOSS('NO5_IDVU-HOTWTR','NO5_A2')=0;                                                                                    
XHLOSS('PL_IDVU-HOTWTR','PL_A')=0;                                                                                       
XHLOSS('SE1_IDVU-HOTWTR','SE1_medium')=0;                                                                                
XHLOSS('SE2_IDVU-HOTWTR','SE2_medium')=0;                                                                                
XHLOSS('SE3_IDVU-HOTWTR','SE3_large')=0;                                                                                 
XHLOSS('SE4_IDVU-HOTWTR','SE4_large')=0;                                                                                 
XHLOSS('UK_IDVU-HOTWTR','UK_A')=0;                                                                                       
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
                                                                                                                         
