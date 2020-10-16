PARAMETER WTRRSFLH(AAA) 'Full load hours for hydro reservoir plants (hours)'                                                                                                          
* This parameter should be phased out. For now set equal to ROR                                                                                                                       
/                                                                                                                                                                                     
HSTAN_A1	3500                                                                                                                                                            
/;                                                                                                                                                                                    
                                                                                                                                                                                      
* If WTRRSFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as HSTAN_A1                                                              
WTRRSFLH(IA)$((NOT WTRRSFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRS), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRS), GKFX(Y,IA,G)))) = WTRRSFLH('HSTAN_A1') ;                 
                                                                                                                                                                                      
