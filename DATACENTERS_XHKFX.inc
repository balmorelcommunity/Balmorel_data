* DATACENTERS XHKFX(YYY,IAAAE,IAAAI) ADDITIONS                                            
                                                                                          
PARAMETER XHKFX(YYY,IAAAE,IAAAI) 'Initial heat transmission capacicty between areas (MW)';
*One way flow from generation area to storage area                                        
XHKFX(Y,'DK1_Large-DC_G','DK1_Large-DC_S') = 1000000;                                     
XHKFX(Y,'DK2_Large-DC_G','DK2_Large-DC_S') = 1000000;                                     
XHKFX(Y,'DK1_Medium-DC_G','DK1_Medium-DC_S') = 1000000;                                   
XHKFX(Y,'DK2_Medium-DC_G','DK2_Medium-DC_S') = 1000000;                                   
XHKFX(Y,'DK1_MedSmall-DC_G','DK1_MedSmall-DC_S') = 1000000;                               
XHKFX(Y,'DK2_MedSmall-DC_G','DK2_MedSmall-DC_S') = 1000000;                               
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
$ontext                                                                                   
*Exogenous District heating connections (SO FAR assumed to be non-existent)               
*Heat transmission capacity unlimited (two way flow)                                      
XHKFX(Y,'DK1_Large','DK1_Large-DC_G') = 1000000;                                          
XHKFX(Y,'DK1_Large-DC_G','DK1_Large') = 1000000;                                          
XHKFX(Y,'DK2_Large','DK2_Large-DC_G') = 1000000;                                          
XHKFX(Y,'DK2_Large-DC_G','DK2_Large') = 1000000;                                          
XHKFX(Y,'DK1_Medium','DK1_Medium-DC_G') = 1000000;                                        
XHKFX(Y,'DK1_Medium-DC_G','DK1_Medium') = 1000000;                                        
XHKFX(Y,'DK2_Medium','DK2_Medium-DC_G') = 1000000;                                        
XHKFX(Y,'DK2_Medium-DC_G','DK2_Medium') = 1000000;                                        
XHKFX(Y,'DK1_MedSmall','DK1_MedSmall-DC_G') = 1000000;                                    
XHKFX(Y,'DK1_MedSmall-DC_G','DK1_MedSmall') = 1000000;                                    
XHKFX(Y,'DK2_MedSmall','DK2_MedSmall-DC_G') = 1000000;                                    
XHKFX(Y,'DK2_MedSmall-DC_G','DK2_MedSmall') = 1000000;                                    
$offtext                                                                                  
                                                                                          
                                                                                          
                                                                                          
