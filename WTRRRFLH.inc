PARAMETER WTRRRFLH(AAA) 'Full load hours for hydro run-of-river plants (hours)'                                                                                                       
* Includes the three options "dry", "wet" and "normal" according to which hydrological conditions to analyze                                                                          
/                                                                                                                                                                                     
HSTAN_A1                   3500
/;                                                                                                                                                                                    
                                                                                                                                                                                      
* If WTRRRFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as HSTAN_A1                                                              
WTRRRFLH(IA)$((NOT WTRRRFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRR), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRR), GKFX(Y,IA,G)))) = WTRRRFLH('HSTAN_A1') ;                 
