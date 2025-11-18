PARAMETER MAXFLOW(YYY,CCCRRRAAA,PROC,FLOW) "Constraint about fuel use limitations (U/year)"        
/                                                                                                  
/;                                                                                                 
                                                                                                   
*Limit on fossil CO2 in fuel production                                                            
MAXFLOW('2040',AAAOPTIFLOW,'CO2_Grid_Out','CO2_FLOW_FOSSIL_CU')=EPS;                               
MAXFLOW('2050',AAAOPTIFLOW,'CO2_Grid_Out','CO2_FLOW_FOSSIL_CU')=EPS;                               
