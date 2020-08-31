PARAMETER GINVCOST_ES(GGG,XES) 'Investment cost in hubs at the beginning of each XES (Mmoney)'                           
/                                                                                                                        
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES2 168.514646884802
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES3 1501.23157138843
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES4 2117.57102716457
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES5 4172.03587975168
GNR_OFF_HUB_2GW_Y-2020                                                                         .    XES6 25032.2152785101
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES2 160.481166753731
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES3 1366.932397807  
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES4 1927.0029460192 
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES5 3793.90477339322
GNR_OFF_HUB_2GW_Y-2030                                                                         .    XES6 22763.4286403593
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES2 152.456251889373
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES3 1292.59009121746
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES4 1822.08753200512
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES5 3587.07900129731
GNR_OFF_HUB_2GW_Y-2040                                                                         .    XES6 21522.4740077839
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES2 145.170593280752
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES3 1220.07701328075
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES4 1719.66654677136
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES5 3384.96499174005
GNR_OFF_HUB_2GW_Y-2050                                                                         .    XES6 20309.7899504403
/;                                                                                                                       
*Increasing potential                                                                                                    
GINVCOST_ES(GGG,'XES6')$GINVCOST_ES(GGG,'XES6')=GINVCOST_ES(GGG,'XES6')*50;                                              
