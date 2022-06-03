* DATACENTERS XHCOST(IAAAE,IAAAI) ADDITIONS                                                                           
                                                                                                                      
PARAMETER XHCOST(IAAAE,IAAAI) 'Heat transmission cost between areas (calculated from exported quantity) (Money/MWh)'; 
*Free cooling transmission from DC-generation to DC-storage areas                                                     
XHCOST(IAAAE,IAAAI)$DC_AMAP(IAAAE,IAAAI) = 0;                                                                         
                                                                                                                      
XHCOST('DK1_Large','DK1_Large-DC_G') = 0.01;                                                                          
XHCOST('DK1_Large-DC_G','DK1_Large') = 0.01;                                                                          
XHCOST('DK2_Large','DK2_Large-DC_G') = 0.01;                                                                          
XHCOST('DK2_Large-DC_G','DK2_Large') = 0.01;                                                                          
XHCOST('DK1_Medium','DK1_Medium-DC_G') = 0.01;                                                                        
XHCOST('DK1_Medium-DC_G','DK1_Medium') = 0.01;                                                                        
