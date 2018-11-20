SET XHTEMPLIFT(IAAAE,IAAAI) "Pair of areas for which temperature lift is necessary"                                           
* Temperature of district heat areas is assumed to be 80 degree                                                               
* Temperature of process heat low (PHL) areas is assumed to be 80-150 degree, so in average 115 degree                        
* Temperature of process heat low (PHH) areas is assumed to be 150-250 degree, so in average 200 degree                       
* Energy required for temperature lift lies within the heat pump definition for these areas                                   
                                                                                                                              
/                                                                                                                             
DK1_Large                                                                                               .    DK1_Large_PHL    
DK1_Large                                                                                               .    DK1_Large_PHH    
DK1_Large_PHL                                                                                           .    DK1_Large_PHH    
DK2_Large                                                                                               .    DK2_Large_PHL    
DK2_Large                                                                                               .    DK2_Large_PHH    
DK2_Large_PHL                                                                                           .    DK2_Large_PHH    
DK1_NoDH_PHL                                                                                            .    DK1_NoDH_PHH     
DK2_NoDH_PHL                                                                                            .    DK2_NoDH_PHH     
                                                                                                                              
                                                                                                                              
/;                                                                                                                            
