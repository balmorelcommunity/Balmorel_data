PARAMETER INDHEAT_FACTORINVCOST(YYY,INDHEAT_GGG,INDHEAT_GROUP) 'Factor to multiply investment cost with for specific heating groups (default 1)';                        
*Draft version: assuming that 80% would have the same type of technology in the following year                                                                           
INDHEAT_FACTORINVCOST(Y,INDHEAT_G,INDHEAT_GROUP) =                                                                                                1;                     
*Extra cost of installing heat pump for hybrid solutions (assuming size of HP for new buildings)                                                                         
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                  1.49041436127158 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                  1.49337343917588 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                  1.48220088555895 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                  1.48447335547983 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                  1.4867458254007  ;     
                                                                                                                                                                         
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                                1.08654564634522 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                                1.08920101552517 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                                1.08356856248491 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                                1.08505710441506 ;     
INDHEAT_FACTORINVCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                                1.08654564634522 ;     
                                                                                                                                                                         
                                                                                                                                                                         
                                                                                                                                                                         
