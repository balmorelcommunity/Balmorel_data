PARAMETER INDHEAT_MAXPERCENTREL(YYY,INDHEAT_AAA,INDHEAT_SUMGROUP) 'Maximum percentage assumed to be fixed to a specific summed group';                                                          
*Assuming solar cannot be installed in more than 30% of the houses                                                                                                                              
INDHEAT_MAXPERCENTREL(Y,INDHEAT_AAA,'SOLARHEATING')  = 0.3;                                                                                                                                     
INDHEAT_MAXPERCENTREL(Y,INDHEAT_AAA,'BIOMASS')  = INDHEAT_GINSTALL('2016',INDHEAT_AAA,'INDHEAT_OIL_2010_IND','GR_OIL')+INDHEAT_GINSTALL('2016',INDHEAT_AAA,'INDHEAT_WP_2010_IND','GR_WP')       
                                                  + INDHEAT_GINSTALL('2016',INDHEAT_AAA,'INDHEAT_OIL_2010_APART','GR_OIL')+INDHEAT_GINSTALL('2016',INDHEAT_AAA,'INDHEAT_WP_2010_APART','GR_WP');
