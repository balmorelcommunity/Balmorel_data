PARAMETER INDHEAT_COP(INDHEAT_AAA,INDHEAT_GGG,SSS,TTT) 'COP of heat pump technologies' ;                                        
                                                                                                                                
*Assumption on indoor temperature = 20 degrees celcius - efficiency 23%?                                                        
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2010_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.23; 
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2020_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.23; 
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2040_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.23; 
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2030_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.23; 
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2050_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.23; 
                                                                                                                                
*Assumption on temperature = 55 degrees celcius - hot water - efficiency 50%                                                    
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2010_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;  
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2020_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;  
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2030_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;  
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2040_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;  
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2050_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;  
                                                                                                                                
*Assumption on temperature = 55 degrees celcius - hot water - efficiency 50%                                                    
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2010_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2020_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2030_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2040_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2050_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*0.5;
