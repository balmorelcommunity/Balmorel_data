PARAMETER INDHEAT_MINPERCENT(YYY,INDHEAT_AAA,INDHEAT_GROUP) 'Minimum percentage assumed to be fixed to a specific group';                                                                                                                                                                                    
*Draft version: assuming that 10% would have the same type of technology in the future - except for oil boilers!                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                             
*INDHEAT_MINPERCENT('2020',INDHEAT_AAA,INDHEAT_GROUP)  = 0.9$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX('2020',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);
*INDHEAT_MINPERCENT('2030',INDHEAT_AAA,INDHEAT_GROUP)  = 0.6$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX('2030',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);
*INDHEAT_MINPERCENT('2040',INDHEAT_AAA,INDHEAT_GROUP)  = 0.3$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX('2040',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);
*INDHEAT_MINPERCENT('2050',INDHEAT_AAA,INDHEAT_GROUP)  = 0$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX('2050',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);  
INDHEAT_MINPERCENT(Y,INDHEAT_AAA,INDHEAT_GROUP)  = 0.5$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);           
                                                                                                                                                                                                                                                                                                             
INDHEAT_MINPERCENT('2030',INDHEAT_AAA,'GR_OIL')  = 0$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,'GR_OIL') AND (INDHEAT_GKFX('2030',INDHEAT_AAA,INDHEAT_G,'GR_OIL') OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,'GR_OIL'))),INDHEAT_GKFX('2030',INDHEAT_AAA,INDHEAT_G,'GR_OIL'))=0);                                
                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                             
*INDHEAT_MINPERCENT(Y,INDHEAT_AAA,INDHEAT_GROUP)  = 0$(SUM(INDHEAT_G$(INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP) AND (INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP) OR INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))),INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);            