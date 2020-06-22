PARAMETER INDHEAT_FACTOROMFCOST(YYY,INDHEAT_GGG,INDHEAT_GROUP) 'Factor to multiply fixed O&M cost with for specific heating groups (default 1)';

INDHEAT_FACTOROMFCOST(Y,INDHEAT_G,INDHEAT_GROUP) =                                                                                                      1;
*From DGC Notat:
INDHEAT_FACTOROMFCOST(Y,INDHEAT_G,'GR_GBHPA2W') =                                                                                                       0.5;

$ifi not %TECHALT%=="_highCostHybrid" $goto endHighCostHybrid
INDHEAT_FACTOROMFCOST(Y,INDHEAT_G,INDHEAT_GROUP) =                                                                                                      1;
*Extra cost of installing heat pump for hybrid solutions (assuming size of HP for new buildings)
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                        2.43062938525125 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                        2.43062938525125 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                        2.43062938525125 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                        2.43062938525125 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                        2.43062938525125 ;

INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                                      2.48549938298424 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                                      2.48549938298424 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                                      2.48549938298424 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                                      2.48549938298424 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                                      2.48549938298424 ;
$label endHighCostHybrid
$ontext
*Diana's numbers based on DGC
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                 0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                 0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                 0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                 0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                 0.63 ;

INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                               0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                               0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                               0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                               0.63 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                               0.63 ;

INDHEAT_FACTOROMFCOST(Y,'INDHEAT_GB_2010_IND','GR_GBHPA2W') =                                                                                 1.37 ;

INDHEAT_FACTOROMFCOST(Y,'INDHEAT_GB_2010_APART','GR_GBHPA2W') =                                                                               1.37 ;
$offtext
