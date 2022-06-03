* DATACENTERS XHINVCOST(IAAAE,IAAAI) ADDITIONS                                                      
                                                                                                    
PARAMETER XHINVCOST(YYY,IAAAE,IAAAI) 'Investment cost in new heat transmission capacity (Money/MW)';
                                                                                                    
XHINVCOST('2016','DK1_Large','DK1_Large-DC_G') = 396000;                                            
XHINVCOST('2016','DK1_Large-DC_G','DK1_Large') = 396000;                                            
XHINVCOST('2016','DK2_Large','DK2_Large-DC_G') = 396000;                                            
XHINVCOST('2016','DK2_Large-DC_G','DK2_Large') = 396000;                                            
                                                                                                    
XHINVCOST('2016','DK1_Medium','DK1_Medium-DC_G') = 396000;                                          
XHINVCOST('2016','DK1_Medium-DC_G','DK1_Medium') = 396000;                                          
                                                                                                    
XHINVCOST(Y,IAE,IAI)$(YVALUE(Y) GE 2016) =XHINVCOST('2016',IAE,IAI);                                
                                                                                                    
