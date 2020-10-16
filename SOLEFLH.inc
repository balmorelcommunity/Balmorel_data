PARAMETER SOLEFLH(AAA)  'Full load hours for solar power'                                                                                                                                        
* Same data used for all regions as for Germany                                                                                                                                                  
/                                                                                                                                                                                                
HSTAN_A1                                                                                                                                                               970                       
WINDIA_A1                                                                                                                                                              970                       
/;                                                                                                                                                                                               
                                                                                                                                                                                                 
* If SOLEFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as WINDIA_A1                                                                      
SOLEFLH(IA)$((NOT SOLEFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLE), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLE), GKFX(Y,IA,G)))) = SOLEFLH('WINDIA_A1') ;                           
