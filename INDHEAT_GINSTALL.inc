PARAMETER INDHEAT_GINSTALL(YYY,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)        'Capacity of technologies that must be installed [% of total demand]';

INDHEAT_GINSTALL(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP)=0;

*Percentage of installations
*DK1
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','INDHEAT_OIL_2010_IND','GR_OIL')=                                                                            0.3  ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','INDHEAT_GB_2010_IND','GR_GB')=                                                                              0.35 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','INDHEAT_WP_2010_IND','GR_WP')=                                                                              0.15 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','INDHEAT_HPA2W_2010_IND','GR_HPA2W')=                                                                        0.11 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','INDHEAT_EL_2010_IND','GR_EL')=                                                                              0.11 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','INDHEAT_OIL_2010_APART','GR_OIL')=                                                                        0.33 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','INDHEAT_GB_2010_APART','GR_GB')=                                                                          0.48 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','INDHEAT_WP_2010_APART','GR_WP')=                                                                          0.05 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','INDHEAT_HPA2W_2010_APART','GR_HPA2W')=                                                                    0.05 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','INDHEAT_EL_2010_APART','GR_EL')=                                                                          0.11 ;
*DK2
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','INDHEAT_OIL_2010_IND','GR_OIL')=                                                                            0.21 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','INDHEAT_GB_2010_IND','GR_GB')=                                                                              0.53 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','INDHEAT_WP_2010_IND','GR_WP')=                                                                              0.05 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','INDHEAT_HPA2W_2010_IND','GR_HPA2W')=                                                                        0.07 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','INDHEAT_EL_2010_IND','GR_EL')=                                                                              0.14 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','INDHEAT_OIL_2010_APART','GR_OIL')=                                                                        0.24 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','INDHEAT_GB_2010_APART','GR_GB')=                                                                          0.66 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','INDHEAT_WP_2010_APART','GR_WP')=                                                                          0.02 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','INDHEAT_HPA2W_2010_APART','GR_HPA2W')=                                                                    0.02 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','INDHEAT_EL_2010_APART','GR_EL')=                                                                          0.06 ;

INDHEAT_GINSTALL('2020',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP) = 0.9*INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP);
INDHEAT_GINSTALL('2025',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP) = 0.55*INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP);
INDHEAT_GINSTALL('2030',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP) = 0.2*INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP);
