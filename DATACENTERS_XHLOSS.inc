* DATACENTERS XHLOSS(IAAAE,IAAAI) ADDITIONS                                                                       
                                                                                                                  
PARAMETER XHLOSS(IAAAE,IAAAI)  'Heat transmission loss between areas (calculated from exported quantity) (share)';
*No losses in cooling transmission from DC-generation to DC-storage areas                                         
XHLOSS(IAAAE,IAAAI)$DC_AMAP(IAAAE,IAAAI) = 0;                                                                     
                                                                                                                  
XHLOSS('DK1_Large','DK1_Large-DC_G') = 0.1;                                                                       
XHLOSS('DK1_Large-DC_G','DK1_Large') = 0.1;                                                                       
XHLOSS('DK2_Large','DK2_Large-DC_G') = 0.1;                                                                       
XHLOSS('DK2_Large-DC_G','DK2_Large') = 0.1;                                                                       
XHLOSS('DK1_Medium','DK1_Medium-DC_G') = 0.1;                                                                     
XHLOSS('DK1_Medium-DC_G','DK1_Medium') = 0.1;                                                                     
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
                                                                                                                  
