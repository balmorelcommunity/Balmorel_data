PARAMETER WTRRRFLH(AAA) 'Full load hours for hydro run-of-river plants (hours)'                                                                                                         
* Includes the three options "dry", "wet" and "normal" according to which hydrological conditions to analyze                                                                            
/                                                                                                                                                                                       
* Average year 2002-2011                                                                                                                                                                
NO1_A1                                                                                                                                                                  4175.15822434474
NO2_A1                                                                                                                                                                  4734.04616878191
NO3_A1                                                                                                                                                                  3856.64552610268
NO4_A1                                                                                                                                                                  3844.41878371575
NO5_A1                                                                                                                                                                  5285.48782040366
DK2_NoDH                                                                                                                                                                4819.86064070176
DK1_NoDH                                                                                                                                                                4819.86064070176
/;                                                                                                                                                                                      
                                                                                                                                                                                        
* If WTRRRFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as FinA                                                                
WTRRRFLH(IA)$((NOT WTRRRFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRR), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRR), GKFX(Y,IA,G)))) = WTRRRFLH('NO1_A1') ;                 
