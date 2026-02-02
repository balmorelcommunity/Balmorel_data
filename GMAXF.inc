TABLE GMAXF(YYY,CCCRRRAAA,FFF)  'Maximum fuel use (GJ) per year'                                                                                                               
                                                                        STRAW     WOOD WOODWASTE BIOGAS         OTHERGAS RETORTGAS SHALE COAL PEAT NATGAS WOODCHIPS WOODPELLETS
2016.ALBANIA                                                            1192552                  107306169.0948                                           2337087   2337087    
2016.AUSTRIA                                                            21842210                 107306169.0948                                           46737010  46737010   
2016.BELGIUM                                                            7358488                  107306169.0948                                           7266890   7266890    
2016.BOSNIA_AND_HERZEGOVINA                                             2303058                  107306169.0948                                           6112565   6112565    
2016.BULGARIA                                                           27292200                 107306169.0948                                           11233775  11233775   
2016.CROATIA                                                            9878027                  107306169.0948                                           9786635   9786635    
2016.CYPRUS                                                             291455                   107306169.0948                                           eps       eps        
2016.CZECH_REPUBLIC                                                     36763470                 107306169.0948                                           32510335  32510335   
2016.DENMARK                                                            29037390                 40193869.5249                                            4461035.5 4461035.5  
2016.ESTONIA                                                            3397943                  4722004.5785                                             17765025  17765025   
2016.FINLAND                                                            14483330                 17990181.8675                                            79624550  79624550   
2016.FRANCE                                                             211786700                257187105.5387                                           113883700 113883700  
2016.GERMANY                                                            202266800                257187105.5387                                           136483100 136483100  
2016.GREECE                                                             14023650                 107306169.0948                                           5214940   5214940    
2016.HUNGARY                                                            48242340                 107306169.0948                                           15252095  15252095   
2016.IRELAND                                                            242117                   107306169.0948                                           4993466.5 4993466.5  
2016.ITALY                                                              61673810                 257187105.5387                                           43970820  43970820   
2016.LATVIA                                                             6985259                  7373506.1176                                             23326465  23326465   
2016.LITHUANIA                                                          14773810                 13396211.4011                                            12580430  12580430   
2016.LUXEMBOURG                                                         372841                   107306169.0948                                           1691534.5 1691534.5  
2016.MALTA                                                              6886472                  107306169.0948                                           eps       eps        
2016.MONTENEGRO                                                         82496                    107306169.0948                                           eps       eps        
2016.NETHERLANDS                                                        5728760                  107306169.0948                                           2141437   2141437    
2016.NORTH_MACEDONIA                                                    1498381                  107306169.0948                                           1269475.5 1269475.5  
2016.NORWAY                                                             5923942                  18125130.7649                                            30074865  30074865   
2016.POLAND                                                             103200100                106633628.2096                                           82393650  82393650   
2016.PORTUGAL                                                           5837455                  107306169.0948                                           15810415  15810415   
2016.ROMANIA                                                            57010870                 107306169.0948                                           50967350  50967350   
2016.SERBIA                                                             19873060                 107306169.0948                                           eps       eps        
2016.SLOVAKIA                                                           13357180                 107306169.0948                                           16199265  16199265   
2016.SLOVENIA                                                           797214                   107306169.0948                                           15550895  15550895   
2016.SPAIN                                                              79609180                 257187105.5387                                           33192780  33192780   
2016.SWEDEN                                                             20078430                 28013157.6054                                            135564350 135564350  
2016.SWITZERLAND                                                        4413720                  107306169.0948                                           17007920  17007920   
2016.TURKEY                                                             eps                      eps                                                      eps       eps        
2016.UNITED_KINGDOM                                                     71334410                 208572176.7846                                           21677940  21677940   
;                                                                                                                                                                              
                                                                                                                                                                                                                                                                           
GMAXF(Y,CCCRRRAAA,'BIOGAS')=GMAXF('2016',CCCRRRAAA,'BIOGAS');
GMAXF(Y,CCCRRRAAA,'MUNIWASTE')=GMAXF('2016',CCCRRRAAA,'MUNIWASTE');
GMAXF(Y,CCCRRRAAA,'STRAW')=GMAXF('2016',CCCRRRAAA,'STRAW');
GMAXF(Y,CCCRRRAAA,'WOODCHIPS')=GMAXF('2016',CCCRRRAAA,'WOODCHIPS');

*Removing not needed data if stepwiseprice addon is activated
$ifi %STEPWISEPRICE%==yes GMAXF(Y,CCCRRRAAA,STEPWISEPRICE_FFF)=0;
$ifi %baloptgasbridge%==yes GMAXF(Y,CCCRRRAAA,'BIOGAS')=EPS;