PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'                                                                                                                        
* Data from https://zenodo.org/record/1146666#.Xl-shqhKguU                                                                                                                              
/                                                                                                                                                                                       
NO1_A1                                                                                                                                                                  423.202360176718
NO1_A2                                                                                                                                                                  423.202360176718
NO1_A3                                                                                                                                                                  423.202360176718
NO2_A1                                                                                                                                                                  423.202360176718
NO2_A2                                                                                                                                                                  423.202360176718
NO3_A1                                                                                                                                                                  423.202360176718
NO3_A2                                                                                                                                                                  423.202360176718
NO3_A3                                                                                                                                                                  423.202360176718
NO4_A1                                                                                                                                                                  423.202360176718
NO4_A2                                                                                                                                                                  423.202360176718
NO5_A1                                                                                                                                                                  423.202360176718
NO5_A2                                                                                                                                                                  423.202360176718
DK1_Large                                                                                                                                                               520.212001354722
DK1_Rural                                                                                                                                                               520.212001354722
DK1_Medium                                                                                                                                                              520.212001354722
DK2_Large                                                                                                                                                               520.212001354722
DK2_Rural                                                                                                                                                               520.212001354722
DK2_Medium                                                                                                                                                              520.212001354722
DK2_MedSmall                                                                                                                                                            520.212001354722
DK1_Small                                                                                                                                                               520.212001354722
DK1_MedSmall                                                                                                                                                            520.212001354722
DK2_Small                                                                                                                                                               520.212001354722
DK2_NoDH                                                                                                                                                                520.212001354722
DK1_NoDH                                                                                                                                                                520.212001354722
                                                                                                                                                                                        
/;                                                                                                                                                                                      
                                                                                                                                                                                        
                                                                                                                                                                                        
* If SOLHFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as DK2_NoDH                                                             
*SOLHFLH(IA)$((NOT SOLHFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLH), GKFX(Y,IA,G)))) = SOLHFLH('DK2_NoDH') ;                 
                                                                                                                                                                                        
