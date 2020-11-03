PARAMETER XHINVCOST(YYY,IAAAE,IAAAI)  "Investment cost in new heat transmission capacity (Money/MW)";      
*Data from  https://www.sciencedirect.com/science/article/pii/S1364032113006710?via%3Dihub#bib65           
XHINVCOST('2016','BE_A','BE_IND-LT-NODH')=396000;                                                          
XHINVCOST('2016','BE_IND-LT-NODH','BE_A')=396000;                                                          
XHINVCOST('2016','DE4-E_A','DE4-E_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DE4-E_IND-LT-NODH','DE4-E_A')=396000;                                                    
XHINVCOST('2016','DE4-N_A','DE4-N_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DE4-N_IND-LT-NODH','DE4-N_A')=396000;                                                    
XHINVCOST('2016','DE4-S_A','DE4-S_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DE4-S_IND-LT-NODH','DE4-S_A')=396000;                                                    
XHINVCOST('2016','DE4-W_A','DE4-W_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DE4-W_IND-LT-NODH','DE4-W_A')=396000;                                                    
XHINVCOST('2016','DK1_Large','DK1_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DK1_IND-LT-NODH','DK1_Large')=396000;                                                    
XHINVCOST('2016','DK2_Large','DK2_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','DK2_IND-LT-NODH','DK2_Large')=396000;                                                    
XHINVCOST('2016','EE_Tallinn','EE_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','EE_IND-LT-NODH','EE_Tallinn')=396000;                                                    
XHINVCOST('2016','FI_large','FIN_IND-LT-NODH')=396000;                                                     
XHINVCOST('2016','FIN_IND-LT-NODH','FI_large')=396000;                                                     
XHINVCOST('2016','FR_A','FR_IND-LT-NODH')=396000;                                                          
XHINVCOST('2016','FR_IND-LT-NODH','FR_A')=396000;                                                          
XHINVCOST('2016','LT_Other_DH','LT_IND-LT-NODH')=396000;                                                   
XHINVCOST('2016','LT_IND-LT-NODH','LT_Other_DH')=396000;                                                   
XHINVCOST('2016','LV_RigaR','LV_IND-LT-NODH')=396000;                                                      
XHINVCOST('2016','LV_IND-LT-NODH','LV_RigaR')=396000;                                                      
XHINVCOST('2016','NL_A','NL_IND-LT-NODH')=396000;                                                          
XHINVCOST('2016','NL_IND-LT-NODH','NL_A')=396000;                                                          
XHINVCOST('2016','NO1_A2','NO1_IND-LT-NODH')=396000;                                                       
XHINVCOST('2016','NO1_IND-LT-NODH','NO1_A2')=396000;                                                       
XHINVCOST('2016','NO2_A2','NO2_IND-LT-NODH')=396000;                                                       
XHINVCOST('2016','NO2_IND-LT-NODH','NO2_A2')=396000;                                                       
XHINVCOST('2016','NO3_A2','NO3_IND-LT-NODH')=396000;                                                       
XHINVCOST('2016','NO3_IND-LT-NODH','NO3_A2')=396000;                                                       
XHINVCOST('2016','NO4_A2','NO4_IND-LT-NODH')=396000;                                                       
XHINVCOST('2016','NO4_IND-LT-NODH','NO4_A2')=396000;                                                       
XHINVCOST('2016','NO5_A2','NO5_IND-LT-NODH')=396000;                                                       
XHINVCOST('2016','NO5_IND-LT-NODH','NO5_A2')=396000;                                                       
XHINVCOST('2016','PL_A','PL_IND-LT-NODH')=396000;                                                          
XHINVCOST('2016','PL_IND-LT-NODH','PL_A')=396000;                                                          
XHINVCOST('2016','SE1_medium','SE1_IND-LT-NODH')=396000;                                                   
XHINVCOST('2016','SE1_IND-LT-NODH','SE1_medium')=396000;                                                   
XHINVCOST('2016','SE2_medium','SE2_IND-LT-NODH')=396000;                                                   
XHINVCOST('2016','SE2_IND-LT-NODH','SE2_medium')=396000;                                                   
XHINVCOST('2016','SE3_large','SE3_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','SE3_IND-LT-NODH','SE3_large')=396000;                                                    
XHINVCOST('2016','SE4_large','SE4_IND-LT-NODH')=396000;                                                    
XHINVCOST('2016','SE4_IND-LT-NODH','SE4_large')=396000;                                                    
XHINVCOST('2016','UK_A','UK_IND-LT-NODH')=396000;                                                          
XHINVCOST('2016','UK_IND-LT-NODH','UK_A')=396000;                                                          
                                                                                                           
                                                                                                           
XHINVCOST(Y,IAE,IAI)$(YVALUE(Y) GE 2016) =XHINVCOST('2016',IAE,IAI);                                       