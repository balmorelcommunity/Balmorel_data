PARAMETER XKRATE  "Transmission capacity rating (share; non-negative, typically close to 1; default/1/, use eps for 0)";                                                                       
*TABLE XKRATE(IRRRE,IRRRI,SSS,TTT)                                                                                                                                                             
TABLE XKRATE(IRRRE,IRRRI,SSS)                                                                                                                                                                  
                                                                                                                                                                                               
;                                                                                                                                                                                              
                                                                                                                                                                                               
                                                                                                                                                                                               
XKRATE(IRRRE,IRRRI,S)$((XKRATE(IRRRE,IRRRI,S) EQ 0) and (SUM(Y,XINVCOST(Y,IRRRE,IRRRI))   OR SUM(Y,(XKINI(Y,IRRRE,IRRRI)))))= 0.95;                                                            
*----------------------------------------------------------------------------------------                                                                                                      
                                                                                                                                                                                               
                                                                                                                                                                                               
