PARAMETER GINVCOST_ES(GGG,XES) 'Investment cost in hubs at the beginning of each XES (Mmoney)'                           
/                                                                                                                        
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES2 168.746096792521
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES3 168.746096792521
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES4 213.952565953892
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES5 364.640796491796
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES6 2187.84477895078
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES2 168.746096792521
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES3 168.746096792521
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES4 213.952565953892
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES5 364.640796491796
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES6 2187.84477895078
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES2 152.649487663949
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES3 152.649487663949
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES4 193.543733443537
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES5 329.857886042163
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES6 1979.14731625298
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES2 152.649487663949
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES3 152.649487663949
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES4 193.543733443537
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES5 329.857886042163
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES6 1979.14731625298
/;                                                                                                                       
*Increasing potential                                                                                                    
GINVCOST_ES(GGG,'XES6')$GINVCOST_ES(GGG,'XES6')=GINVCOST_ES(GGG,'XES6')*50;                                              
