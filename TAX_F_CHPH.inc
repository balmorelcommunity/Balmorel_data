TABLE TAX_F_CHPH(YYY,CCC,FFF)
                                                                                                                     NUCLEAR NATGAS  COAL  LIGNITE FUELOIL          LIGHTOIL SHALE PEAT LPG   LNG     ELECTRIC
2015.NORWAY                                                                                                                  0.57                  24.55            24.55                     0.57    0.516129032258065
2015.DENMARK                                                                                                                 32.15   34.08         32.9             32.9                      32.15   51.4147651006711
2015.FINLAND                                                                                                                 11.09   15.74         13.4958117982534 13.7           3.4        11.09   22.53
2018.FINLAND                                                                                                                 13.72   18.59         16.96            16.25          1.9  14.82 13.72   22.53
2015.SWEDEN                                                                                                                  5       7.03          7.86             7.86                5.23  5       30.83
2015.ESTONIA                                                                                                                 3.65    4.03          5.78             5.78     4.08             3.65    9.6
2015.LATVIA                                                                                                                  1.83    1.06                                    5.79             1.83    26.79
2015.LITHUANIA                                                                                                               0.54    3.44          1.36             1.36     2.37             0.54    15.37
2015.GERMANY                                                                                                                 12.2025 18.95 18.95   19.7014529495634 19.7525                   12.2025 26.3227235332323
;
TAX_F_CHPH(YYY,'NETHERLANDS',FFF)= TAX_F_CHPH(YYY,'GERMANY',FFF);
TAX_F_CHPH(YYY,'UNITED_KINGDOM',FFF) = TAX_F_CHPH(YYY,'GERMANY',FFF);
TAX_F_CHPH(YYY,'POLAND',FFF)  = TAX_F_CHPH(YYY,'GERMANY',FFF);
TAX_F_CHPH(YYY,C,FFF)$(YVALUE(YYY) ne 2015) = TAX_F_CHPH('2015',C,FFF);
