TABLE TAX_F_CHPE(YYY,CCC,FFF)                                                                                                                     
                                                                        NUCLEAR NATGAS COAL LIGNITE FUELOIL LIGHTOIL SHALE PEAT LPG  LNG  ELECTRIC
2015.NORWAY                                                                     0.57                24.55   24.55                    0.57         
2015.DENMARK                                                                                                                                      
2015.FINLAND                                                                                                                                      
2015.SWEDEN                                                                                                                                       
2015.ESTONIA                                                                                        5.22    5.22     5.22                         
2015.LATVIA                                                                     1.83   1.06                          5.79                         
2015.LITHUANIA                                                                  0.54   3.44         1.36    1.36     2.37                 15.37   
;                                                                                                                                                 
TAX_F_CHPE(YYY,C,FFF)$(YVALUE(YYY) ne 2015) = TAX_F_CHPE('2015',C,FFF);                                                                           
