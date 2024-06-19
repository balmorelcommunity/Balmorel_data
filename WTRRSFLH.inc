PARAMETER WTRRSFLH(AAA) 'Full load hours for hydro reservoir plants (hours)'                                                                                                            
* This parameter should be phased out. For now set equal to ROR                                                                                                                         
/                                                                                                                                                                                       
* Average year 2002-2011                                                                                                                                                                
NO1_A1                                                                                                                                                                  3017.78602223856
NO2_A1                                                                                                                                                                  4224.81456662124
NO3_A1                                                                                                                                                                  4441.3853415807 
NO4_A1                                                                                                                                                                  5022.26279196499
NO5_A1                                                                                                                                                                  4246.52449798427
/;                                                                                                                                                                                      
                                                                                                                                                                                        
* If WTRRSFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as FinA                                                                
WTRRSFLH(IA)$((NOT WTRRSFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRS), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRS), GKFX(Y,IA,G)))) = WTRRSFLH('NO1_A1') ;                 
                                                                                                                                                                                        
