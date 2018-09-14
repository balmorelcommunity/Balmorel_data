TABLE TAX_F_HO(YYY,CCC,FFF)
                                                                                                                 NUCLEAR NATGAS  COAL  LIGNITE FUELOIL          LIGHTOIL SHALE PEAT LPG   LNG    ELECTRIC
2015.NORWAY                                                                                                              0.57                  24.55            24.55                     0.57   0.516129032258065
2015.DENMARK                                                                                                             32.15   34.08         32.9             32.9                      32.15  51.4147651006711
2015.FINLAND                                                                                                             15.44   23.67         19.8449474247015 18.88          3.4        15.44  22.53
2018.FINLAND                                                                                                             19.86   29.36         25.9             24.52          1.9  22.11 19.86  22.53
2015.SWEDEN                                                                                                              20.93   46.11         41.58            41.58               31.78 20.93  30.83
2015.ESTONIA                                                                                                             3.65    4.03          5.78             5.78     4.08             3.65   9.6
2015.LATVIA                                                                                                              1.83    1.06          5.79                      5.79             1.83   26.79
2015.LITHUANIA                                                                                                           0.54    3.44          1.36             1.36     2.37             0.54   15.37
2015.GERMANY                                                                                                             17.2725 34.62 34.62   29.7187368561754 29.4775                   19.985 26.3227235332323
;
TAX_F_HO(YYY,'NETHERLANDS',FFF)= TAX_F_HO(YYY,'GERMANY',FFF);
TAX_F_HO(YYY,'UNITED_KINGDOM',FFF) = TAX_F_HO(YYY,'GERMANY',FFF);
TAX_F_HO(YYY,'POLAND',FFF)  = TAX_F_HO(YYY,'GERMANY',FFF);
TAX_F_HO(YYY,C,FFF)$(YVALUE(YYY) ne 2015) = TAX_F_HO('2015',C,FFF);
