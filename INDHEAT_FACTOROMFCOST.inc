PARAMETER INDHEAT_FACTOROMFCOST(YYY,INDHEAT_GGG,INDHEAT_GROUP) 'Factor to multiply fixed O&M cost with for specific heating groups (default 1)';

INDHEAT_FACTOROMFCOST(Y,INDHEAT_G,INDHEAT_GROUP) =                                                                                               1;
*Extra cost of installing heat pump for hybrid solutions (assuming size of HP for new buildings)
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_IND','GR_GBHPA2W') =                                                                                 1.85413143454619 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_IND','GR_GBHPA2W') =                                                                                 1.85413143454619 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_IND','GR_GBHPA2W') =                                                                                 1.85413143454619 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_IND','GR_GBHPA2W') =                                                                                 1.85413143454619 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_IND','GR_GBHPA2W') =                                                                                 1.85413143454619 ;

INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2010_APART','GR_GBHPA2W') =                                                                               1.31398501036517 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2020_APART','GR_GBHPA2W') =                                                                               1.31398501036517 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2030_APART','GR_GBHPA2W') =                                                                               1.31398501036517 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2040_APART','GR_GBHPA2W') =                                                                               1.31398501036517 ;
INDHEAT_FACTOROMFCOST(Y,'INDHEAT_HPA2W_2050_APART','GR_GBHPA2W') =                                                                               1.31398501036517 ;

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