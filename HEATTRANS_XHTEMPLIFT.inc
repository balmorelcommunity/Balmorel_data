PARAMETER XHTEMPLIFT(IAAAE,IAAAI) "Temperature lift supplied by heat pump used for lifting temperature for heat transmitted from low to high temperature Area (share)"                        
* Temperature of district heat areas is assumed to be 80 degree                                                                                                                               
* Temperature of process heat low (PHL) areas is assumed to be 80-150 degree, so in average 115 degree                                                                                        
* Temperature of process heat low (PHH) areas is assumed to be 150-250 degree, so in average 200 degree                                                                                       
* Has to be verified! Definition of XHTEMPLIFT not fully clear yet.                                                                                                                           
                                                                                                                                                                                              
/                                                                                                                                                                                             
DK1_Large                                                                                                                                                              .    DK1_Large_PHL 0.01
DK1_Large                                                                                                                                                              .    DK1_Large_PHH 0.01
DK1_Large_PHL                                                                                                                                                          .    DK1_Large     0   
DK1_Large_PHL                                                                                                                                                          .    DK1_Large_PHH 0.01
DK1_Large_PHH                                                                                                                                                          .    DK1_Large     0   
DK1_Large_PHH                                                                                                                                                          .    DK1_Large_PHL 0   
DK2_Large                                                                                                                                                              .    DK2_Large_PHL 0.01
DK2_Large                                                                                                                                                              .    DK2_Large_PHH 0.01
DK2_Large_PHL                                                                                                                                                          .    DK2_Large     0   
DK2_Large_PHL                                                                                                                                                          .    DK2_Large_PHH 0.01
DK2_Large_PHH                                                                                                                                                          .    DK2_Large     0   
DK2_Large_PHH                                                                                                                                                          .    DK2_Large_PHL 0   
DK1_NoDH_PHL                                                                                                                                                           .    DK1_NoDH_PHH  0.01
DK2_NoDH_PHH                                                                                                                                                           .    DK1_NoDH_PHL  0   
DK2_NoDH_PHL                                                                                                                                                           .    DK2_NoDH_PHH  0.01
DK2_NoDH_PHH                                                                                                                                                           .    DK2_NoDH_PHL  0   
                                                                                                                                                                                              
                                                                                                                                                                                              
/;                                                                                                                                                                                            
