PARAMETER HYDROGEN_DH2(YYY,CCCRRRAAA)  'Yearly demand for hydrogen at a Regional level(MWh of H2)'                    
* No exogenous demand defined yet                                                                                     
$ontext                                                                                                               
/                                                                                                                     
2020                                                                                               .    DK1  11303.5  
2025                                                                                               .    DK1  12434    
2030                                                                                               .    DK1  1273452  
2035                                                                                               .    DK1  2667381  
2040                                                                                               .    DK1  3475905  
2045                                                                                               .    DK1  3595028.5
2050                                                                                               .    DK1  3852743.5
2020                                                                                               .    DK2  11303.5  
2025                                                                                               .    DK2  12434    
2030                                                                                               .    DK2  1273452  
2035                                                                                               .    DK2  2667381  
2040                                                                                               .    DK2  3475905  
2045                                                                                               .    DK2  3595028.5
2050                                                                                               .    DK2  3852743.5
/;                                                                                                                    
$offtext                                                                                                              
;                                                                                                                     
HYDROGEN_DH2(YYY,AAA)=0;                                                                                              
HYDROGEN_DH2(YYY,RRR)=0;                                                                                              
HYDROGEN_DH2('2035','DK2')= 5000000/3.6;                                                                              
HYDROGEN_DH2('2040','DK2')=10000000/3.6;                                                                              
HYDROGEN_DH2('2045','DK2')=15000000/3.6;                                                                              
HYDROGEN_DH2('2050','DK2')=20000000/3.6;                                                                              
