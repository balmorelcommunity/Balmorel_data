PARAMETER INDHEAT_FACTORINVCOST(YYY,INDHEAT_GGG,INDHEAT_GROUP) 'Factor to multiply investment cost with for specific heating groups (default 1)';                              
*Draft version: assuming that 80% would have the same type of technology in the following year                                                                                 
INDHEAT_FACTORINVCOST(Y,INDHEAT_G,INDHEAT_GROUP) =                                                                                                      1;                     
*Extra cost of installing heat pump for hybrid solutions (assuming size of HP for new buildings)                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                        1.7253786856961  ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                        1.73045032927393 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                        1.71135181417374 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                        1.7152281386493  ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                        1.71910446312485 ;     
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                                      1.24878574610512 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                                      1.25759906218929 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                                      1.23900017206602 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                                      1.24389295908557 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                                      1.24878574610512 ;     
                                                                                                                                                                               
$ontext                                                                                                                                                                        
*Diana's numbers based on DGC                                                                                                                                                  
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                 1.42 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                 1.42 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                 1.42 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                 1.42 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                 1.42 ;                        
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                               1.58 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                               1.58 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                               1.58 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                               1.58 ;                        
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                               1.58 ;                        
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_GB_2010_IND','GR_GBHPA2W') =                                                                                 1.23 ;                           
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_GB_2010_APART','GR_GBHPA2W') =                                                                               1.23 ;                           
$offtext                                                                                                                                                                       
                                                                                                                                                                               
$ifi not %TECHALT%==_cheapHP_lo $goto endcheapHP_lo                                                                                                                            
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                        1.7253786856961  ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                        1.84429535604293 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                        1.79031137116627 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                        1.63460369373861 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                        1.47889601631095 ;     
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                                      1.24878574610512 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                                      1.15315614235465 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                                      1.17972709092485 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                                      1.21425641851499 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                                      1.24878574610512 ;     
$label endcheapHP_lo                                                                                                                                                           
                                                                                                                                                                               
$ifi not %TECHALT%==_cheapHP_up $goto endcheapHP_up                                                                                                                            
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                        1.7253786856961  ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                        1.84429535604293 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                        1.77829931840836 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                        1.71097267739633 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                        1.64364603638429 ;     
                                                                                                                                                                               
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                                      1.24878574610512 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                                      1.55908905267673 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                                      1.59205575428684 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                                      1.62720602614049 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                                      1.66235629799415 ;     
$label endcheapHP_up                                                                                                                                                           
