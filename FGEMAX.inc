TABLE FGEMAX(YYY,CCCRRRAAA,FFF)   'Maximum electricity generation by fuel (MWh)'                                                                                               
                                                                                 COAL      NATGAS       MUNIWASTE     STRAW       WOOD        WOODWASTE NUCLEAR   SUN      WIND
2020.DENMARK                                                                     4944448.4                                                                        833334       
2025.DENMARK                                                                     1944446                                                                          11388898     
2030.DENMARK                                                                                                                                                      17083347     
                                                                                                                                                                               
                                                                                                                                                                               
                                                                                                                                                                               
                                                                                                                                                                               
                                                                                                                                                                               
2020.FRANCE                                                                                                                                             398360000              
                                                                                                                                                                               
;                                                                                                                                                                              
FGEMAX(Y,'NORWAY','Coal')$(Y.VAL GE 2020) =EPS;                                                                                                                                
FGEMAX(Y,'NORWAY','Lignite')$(Y.VAL GE 2020) =EPS;                                                                                                                             
                                                                                                                                                                               
FGEMAX(Y,'SWEDEN','Coal')$(Y.VAL GE 2020) =EPS;                                                                                                                                
FGEMAX(Y,'SWEDEN','Lignite')$(Y.VAL GE 2020) =EPS;                                                                                                                             
                                                                                                                                                                               
FGEMAX(Y,'FINLAND','Coal')$(Y.VAL GE 2030) =EPS;                                                                                                                               
FGEMAX(Y,'FINLAND','Lignite')$(Y.VAL GE 2030) =EPS;                                                                                                                            
                                                                                                                                                                               
FGEMAX(Y,'DENMARK','Coal')$(Y.VAL GE 2030) =EPS;                                                                                                                               
FGEMAX(Y,'DENMARK','Lignite')$(Y.VAL GE 2030) =EPS;                                                                                                                            
                                                                                                                                                                               
FGEMAX(Y,'GERMANY','Coal')$(Y.VAL GE 2040) =EPS;                                                                                                                               
FGEMAX(Y,'GERMANY','Lignite')$(Y.VAL GE 2040) =EPS;                                                                                                                            
                                                                                                                                                                               
FGEMAX(Y,'UNITED_KINGDOM','Coal')$(Y.VAL GE 2030) =EPS;                                                                                                                        
FGEMAX(Y,'UNITED_KINGDOM','Lignite')$(Y.VAL GE 2030) =EPS;                                                                                                                     
                                                                                                                                                                               
FGEMAX(Y,'FRANCE','Coal')$(Y.VAL GE 2020) =EPS;                                                                                                                                
FGEMAX(Y,'FRANCE','Lignite')$(Y.VAL GE 2020) =EPS;                                                                                                                             
                                                                                                                                                                               
FGEMAX(Y,'BELGIUM','Coal')$(Y.VAL GE 2020) =EPS;                                                                                                                               
FGEMAX(Y,'BELGIUM','Lignite')$(Y.VAL GE 2020) =EPS;                                                                                                                            
                                                                                                                                                                               
FGEMAX(Y,'NETHERLANDS','Coal')$(Y.VAL GE 2030) =EPS;                                                                                                                           
FGEMAX(Y,'NETHERLANDS','Lignite')$(Y.VAL GE 2030) =EPS;                                                                                                                        
