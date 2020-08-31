PARAMETER GKN_ES(GGG,XES) 'Installed capacity in hubs at the beginning of each XES (MW)'                
/                                                                                                       
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES1 Eps  
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES2 0.1  
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES3 700  
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES4 1000 
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES5 2000 
GNR_OFF_HUB_2GW_Y-2020                                                                   .    XES6 12000
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES1 Eps  
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES2 0.1  
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES3 700  
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES4 1000 
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES5 2000 
GNR_OFF_HUB_2GW_Y-2030                                                                   .    XES6 12000
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES1 Eps  
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES2 0.1  
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES3 700  
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES4 1000 
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES5 2000 
GNR_OFF_HUB_2GW_Y-2040                                                                   .    XES6 12000
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES1 Eps  
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES2 0.1  
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES3 700  
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES4 1000 
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES5 2000 
GNR_OFF_HUB_2GW_Y-2050                                                                   .    XES6 12000
/;                                                                                                      
*Increasing potential                                                                                   
GKN_ES(GGG,'XES6')$GKN_ES(GGG,'XES6')=GKN_ES(GGG,'XES6')*50;                                            
