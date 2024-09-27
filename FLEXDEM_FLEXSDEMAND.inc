TABLE FLEXSDEMAND1(YYY,CCCRRRAAA,FLEXUSER) 'Flexible yearly demand node and user (MWh)'
;
* Assume even distribution of road transport demand throughout the weeks in a year
FLEXSDEMAND(YYY,SSS,CCCRRRAAA,FLEXUSER) = FLEXYDEMAND(YYY,CCCRRRAAA,FLEXUSER)/52;
