PARAMETER INDHEAT_MINPERCENTREL(YYY,INDHEAT_AAA,INDHEAT_SUMGROUP) 'Minimum percentage assumed to be fixed to a specific summed group';
*Draft version: assuming that 80% would have the same type of technology in the following year                                        
                                                                                                                                      
INDHEAT_MINPERCENTREL(Y,INDHEAT_AAA,'NO_RADIATOR')  = 0.65;                                                                           
INDHEAT_MINPERCENTREL(Y,INDHEAT_AAA,'RADIATOR')  = 1;                                                                                 