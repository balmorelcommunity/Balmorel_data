TABLE GMINF(YYY,CCCRRRAAA,FFF) 'Minimum fuel use (GJ) per year'                                                                                                                               
                                                                                                                                             NATGAS           BIOGAS                          
2016.DE4-N_A                                                                                                                                                  19258441.22 !!   DE4-N_A        
2016.DE4-S_A                                                                                                                                                  82777760.88 !!   DE4-S_A        
2016.DE4-W_A                                                                                                                                                  94133401.34 !!   DE4-W_A        
2016.DE4-E_A                                                                                                                                                  53830396.56 !!   DE4-E_A        
2016.ESTONIA                                                                                                                                 0                                                
2017.ESTONIA                                                                                                                                 1440000                                          
2018.ESTONIA                                                                                                                                 1418181.81818182                                 
2019.ESTONIA                                                                                                                                 1396363.63636364                                 
2020.ESTONIA                                                                                                                                 1374545.45454545                                 
2021.ESTONIA                                                                                                                                 1352727.27272727                                 
2022.ESTONIA                                                                                                                                 1330909.09090909                                 
2023.ESTONIA                                                                                                                                 1309090.90909091                                 
2024.ESTONIA                                                                                                                                 1287272.72727273                                 
2025.ESTONIA                                                                                                                                 1265454.54545455                                 
2026.ESTONIA                                                                                                                                 1243636.36363636                                 
2027.ESTONIA                                                                                                                                 1221818.18181818                                 
2028.ESTONIA                                                                                                                                 1200000                                          
2029.ESTONIA                                                                                                                                 1178181.81818182                                 
2030.ESTONIA                                                                                                                                 1156363.63636364                                 
2031.ESTONIA                                                                                                                                 1134545.45454545                                 
2032.ESTONIA                                                                                                                                 1112727.27272727                                 
2033.ESTONIA                                                                                                                                 1090909.09090909                                 
2034.ESTONIA                                                                                                                                 1069090.90909091                                 
2035.ESTONIA                                                                                                                                 1047272.72727273                                 
2036.ESTONIA                                                                                                                                 1025454.54545455                                 
2037.ESTONIA                                                                                                                                 1003636.36363636                                 
2038.ESTONIA                                                                                                                                 981818.181818182                                 
2039.ESTONIA                                                                                                                                 960000                                           
2040.ESTONIA                                                                                                                                 938181.818181818                                 
2041.ESTONIA                                                                                                                                 916363.636363636                                 
2042.ESTONIA                                                                                                                                 894545.454545454                                 
2043.ESTONIA                                                                                                                                 872727.272727273                                 
2044.ESTONIA                                                                                                                                 850909.090909091                                 
2045.ESTONIA                                                                                                                                 829090.909090909                                 
2046.ESTONIA                                                                                                                                 807272.727272727                                 
2047.ESTONIA                                                                                                                                 785454.545454545                                 
2048.ESTONIA                                                                                                                                 763636.363636364                                 
2049.ESTONIA                                                                                                                                 741818.181818182                                 
2050.ESTONIA                                                                                                                                 720000                                           
                                                                                                                                                                                              
;                                                                                                                                                                                             
GMINF(YYY,CCCRRRAAA,'BIOGAS') = GMINF('2016',CCCRRRAAA,'BIOGAS');                                                                                                                             
                                                                                                                                                                                              
GMINF(Y,'estonia','NATGAS')$(Y.VAL GE 2030) = 0 ;                                                                                                                                             
                                                                                                                                                                                              
* minimum fuel limit on seasonal level for German Biogas                                                                                                                                      
* (Gustav 29.08.19 this is for testing, assures a seasonal profile for use of biogas, but biogas plants operates VERY flexible over the day)                                                  
PARAMETER GMINF_S(YYY,AAA,FFF,SSS) 'Minimum fuel use (GJ) per season'  ;                                                                                                                      
GMINF_S(Y,IA,FFF,S)$ICA('GERMANY',IA) = GMINF(Y,IA,FFF)/CARD(S);                                                                                                                              
                                                                                                                                                                                              
GMINF_S(YYY,IA,'BIOGAS',SSS) = 0;                                                                                                                                                             
GMINF(YYY,IA,'BIOGAS') = 0;                                                                                                                                                                   
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              
