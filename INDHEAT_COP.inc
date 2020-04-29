PARAMETER INDHEAT_COP(INDHEAT_AAA,INDHEAT_GGG,SSS,TTT) 'COP of heat pump technologies' ;

PARAMETER INDHEAT_EFFICIENCY(INDHEAT_GGG) 'Multiplication factor to reach the given COP from GDATA';
*Note that I on purpose used the COP from the earlier technology as reference as we do not assume it can be used for hot water demand
*I have further multiplied with the increase in COP as from 2010 to 2020
INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2010_IND') = INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE')/((272+20)/(20-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2020_IND') = INDHEAT_GDATA('INDHEAT_HPA2A_2020_IND','GDFE')/((272+20)/(20-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2030_IND') = INDHEAT_GDATA('INDHEAT_HPA2A_2020_IND','GDFE')/((272+20)/(20-7))*(1+(INDHEAT_GDATA('INDHEAT_HPA2A_2020_IND','GDFE')-INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'))/INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'));
INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2040_IND') = INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2030_IND')*(1+(INDHEAT_GDATA('INDHEAT_HPA2A_2020_IND','GDFE')-INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'))/INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'));
INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2050_IND') = INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2040_IND')*(1+(INDHEAT_GDATA('INDHEAT_HPA2A_2020_IND','GDFE')-INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'))/INDHEAT_GDATA('INDHEAT_HPA2A_2010_IND','GDFE'));

INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2010_IND') = INDHEAT_GDATA('INDHEAT_HPA2W_2010_IND','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2020_IND') = INDHEAT_GDATA('INDHEAT_HPA2W_2020_IND','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2030_IND') = INDHEAT_GDATA('INDHEAT_HPA2W_2030_IND','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2040_IND') = INDHEAT_GDATA('INDHEAT_HPA2W_2040_IND','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2050_IND') = INDHEAT_GDATA('INDHEAT_HPA2W_2050_IND','GDFE')/((272+55)/(55-7));

INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2010_APART') = INDHEAT_GDATA('INDHEAT_HPA2W_2010_APART','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2020_APART') = INDHEAT_GDATA('INDHEAT_HPA2W_2020_APART','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2030_APART') = INDHEAT_GDATA('INDHEAT_HPA2W_2030_APART','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2040_APART') = INDHEAT_GDATA('INDHEAT_HPA2W_2040_APART','GDFE')/((272+55)/(55-7));
INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2050_APART') = INDHEAT_GDATA('INDHEAT_HPA2W_2050_APART','GDFE')/((272+55)/(55-7));

*Assumption on indoor temperature = 20 degrees celcius - efficiency as above
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2010_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR))$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) <10) - 10$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) GE 10))*INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2010_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2020_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR))$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) <10) - 10$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) GE 10))*INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2020_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2040_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR))$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) <10) - 10$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) GE 10))*INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2030_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2030_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR))$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) <10) - 10$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) GE 10))*INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2040_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2A_2050_IND',S,T)= (272+20)/(20-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR))$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) <10) - 10$(SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)) GE 10))*INDHEAT_EFFICIENCY('INDHEAT_HPA2A_2050_IND');

*Assumption on temperature = 55 degrees celcius - hot water - efficiency as above
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2010_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2010_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2020_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2020_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2030_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2030_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2040_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2040_IND');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2050_IND',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2050_IND');

*Assumption on temperature = 55 degrees celcius - hot water - efficiency as above
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2010_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2010_APART');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2020_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2020_APART');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2030_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2030_APART');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2040_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2040_APART');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPA2W_2050_APART',S,T)= (272+55)/(55-SUM(RRR$RRRAAA(RRR,INDHEAT_AAA),TEMP_VAR_T(S,T,RRR)))*INDHEAT_EFFICIENCY('INDHEAT_HPA2W_2050_APART');

*Assumption on ground source COP for apartments. (average of radiators and floor heating total efficiency)
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2010_APART',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2010_APART','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2020_APART',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2020_APART','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2030_APART',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2030_APART','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2040_APART',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2040_APART','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2050_APART',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2050_APART','GDFE');

*Assumption on ground source COP for ind. (average of radiators and floor heating total efficiency)
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2010_IND',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2010_IND','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2020_IND',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2020_IND','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2030_IND',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2030_IND','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2040_IND',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2040_IND','GDFE');
INDHEAT_COP(INDHEAT_AAA,'INDHEAT_HPB2W_2050_IND',S,T)=INDHEAT_GDATA('INDHEAT_HPB2W_2050_IND','GDFE');