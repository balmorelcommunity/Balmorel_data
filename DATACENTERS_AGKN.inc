* DATACENTERS AGKN(AAA,GGG) ADDITIONS            
                                                 
* Uniformely assign across areas                 
* $ontext                                        
AGKN(AAA,'G_DC_ABSCHILLER')$DC_AG(AAA)     = NO; 
AGKN(AAA,'G_DC_ELCHILLER')$DC_AG(AAA)      = YES;
AGKN(AAA,'G_DC_HEATPUMP')$DC_AG(AAA)       = YES;
AGKN(AAA,'G_DC_FREECOOLING')$DC_AG(AAA)    = YES;
AGKN(AAA,'G_DC_COLDSTORAGE')$DC_AS(AAA)    = YES;
* $offtext                                       
                                                 
* Assign to each area specifically               
$ontext                                          
AGKN('DK1_Large-DC_G','G_DC_ABSCHILLER')   = NO; 
AGKN('DK1_Large-DC_G','G_DC_ELCHILLER')    = YES;
AGKN('DK1_Large-DC_S','G_DC_COLDSTORAGE')  = YES;
AGKN('DK1_Large-DC_G','G_DC_HEATPUMP')     = YES;
AGKN('DK1_Large-DC_G','G_DC_FREECOOLING')  = YES;
                                                 
AGKN('DK2_Large-DC_G','G_DC_ABSCHILLER')   = NO; 
AGKN('DK2_Large-DC_G','G_DC_ELCHILLER')    = YES;
AGKN('DK2_Large-DC_S','G_DC_COLDSTORAGE')  = YES;
AGKN('DK2_Large-DC_G','G_DC_HEATPUMP')     = YES;
AGKN('DK2_Large-DC_G','G_DC_FREECOOLING')  = YES;
                                                 
AGKN('DK1_Medium-DC_G','G_DC_ABSCHILLER')  = NO; 
AGKN('DK1_Medium-DC_G','G_DC_ELCHILLER')   = YES;
AGKN('DK1_Medium-DC_S','G_DC_COLDSTORAGE') = YES;
AGKN('DK1_Medium-DC_G','G_DC_HEATPUMP')    = YES;
AGKN('DK1_Medium-DC_G','G_DC_FREECOOLING') = YES;
$offtext                                         
