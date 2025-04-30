TABLE GMAXF(YYY,CCCRRRAAA,FFF)  'Maximum fuel use (GJ) per year'                                                                                                          
                                                                        STRAW     WOOD WOODWASTE BIOGAS    OTHERGAS RETORTGAS SHALE COAL PEAT NATGAS WOODCHIPS WOODPELLETS
2016.ALBANIA                                                            27394450                 1800000                                             8943930   6800000    
2016.AUSTRIA                                                            85309230                 4900000                                             178740300 11500000   
2016.BELGIUM                                                            86358900                 38400000                                            34877540  1400000    
2016.BOSNIA_AND_HERZEGOVINA                                             65373410                 1600000                                             18931270  18900000   
2016.BULGARIA                                                           120251800                6100000                                             69757640  3500000    
2016.CROATIA                                                            50369765                 EPS                                                 37357590  3700000    
2016.CYPRUS                                                             1162770                  4100000                                             EPS       300000     
2016.CZECH_REPUBLIC                                                     136545120                45000000                                            125277630 4600000    
2016.DENMARK                                                            34638430                 43700000                                            24407230  2400000    
2016.ESTONIA                                                            22800670                 8200000                                             68046310  4300000    
2016.FINLAND                                                            76309770                 3800000                                             327583030 11100000   
2016.FRANCE                                                             942561650                258200000                                           401428040 89900000   
2016.GERMANY                                                            550595040                103000000                                           598436170 18000000   
2016.GREECE                                                             67743640                 7100000                                             18922240  6200000    
2016.HUNGARY                                                            204871980                EPS                                                 75464500  7300000    
2016.IRELAND                                                            26700160                 18300000                                            24547660  500000     
2016.ITALY                                                              369514390                118900000                                           198703450 26200000   
2016.LATVIA                                                             37680820                 7900000                                             108177760 5900000    
2016.LITHUANIA                                                          119355140                14300000                                            56921930  4000000    
2016.LUXEMBOURG                                                         908009                   EPS                                                 5097810   EPS        
2016.MALTA                                                              EPS                      EPS                                                 EPS       EPS        
2016.MONTENEGRO                                                         2427330                  300000                                              1000000   3000000    
2016.NETHERLANDS                                                        54545340                 48800000                                            9272760   700000     
2016.NORTH_MACEDONIA                                                    EPS                      700000                                              EPS       EPS        
2016.NORWAY                                                             7700000                  EPS                                                 108153790 5400000    
2016.POLAND                                                             474003930                77900000                                            336507060 7900000    
2016.PORTUGAL                                                           38483860                 22200000                                            85037460  3500000    
2016.ROMANIA                                                            488539520                23800000                                            235084370 6500000    
2016.SERBIA                                                             58141190                 10500000                                            6100000   29700000   
2016.SLOVAKIA                                                           50975150                 13400000                                            71509320  1000000    
2016.SLOVENIA                                                           6937590                  1500000                                             67973060  2800000    
2016.SPAIN                                                              547085030                102300000                                           173024030 53300000   
2016.SWEDEN                                                             144593980                17200000                                            532422910 15300000   
2016.SWITZERLAND                                                        EPS                      EPS                                                 74473640  2600000    
2016.TURKEY                                                             328388510                EPS                                                 66900     66200000   
2016.UNITED_KINGDOM                                                     341871120                158500000                                           92192860  3400000    
;                                                                                                                                                                         
                                                                                                                                                                          
$ifi %baloptgasbridge%==yes GMAXF(Y,CCCRRRAAA,'BIOGAS')=EPS;                                                                                                              
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
GMAXF(Y,CCCRRRAAA,'STRAW')=GMAXF('2016',CCCRRRAAA,'STRAW');                                                                                                               
GMAXF(Y,CCCRRRAAA,'WOOD')=GMAXF('2016',CCCRRRAAA,'WOOD');                                                                                                                 
GMAXF(Y,CCCRRRAAA,'WOODWASTE')=GMAXF('2016',CCCRRRAAA,'WOODWASTE');                                                                                                       
GMAXF(Y,CCCRRRAAA,'BIOGAS')=GMAXF('2016',CCCRRRAAA,'BIOGAS');                                                                                                             
GMAXF(Y,CCCRRRAAA,'OTHERGAS')=GMAXF('2016',CCCRRRAAA,'OTHERGAS');                                                                                                         
GMAXF(Y,CCCRRRAAA,'COAL')=GMAXF('2016',CCCRRRAAA,'COAL');                                                                                                                 
GMAXF(Y,CCCRRRAAA,'WOODCHIPS')=GMAXF('2016',CCCRRRAAA,'WOODCHIPS');                                                                                                       
GMAXF(Y,CCCRRRAAA,'WOODPELLETS')=GMAXF('2016',CCCRRRAAA,'WOODPELLETS');                                                                                                   
                                                                                                                                                                          
*Removing not needed data if stepwiseprice addon is activated                                                                                                             
$ifi %STEPWISEPRICE%==yes GMAXF(Y,CCCRRRAAA,STEPWISEPRICE_FFF)=0;                                                                                                         
                                                                                                                                                                          
