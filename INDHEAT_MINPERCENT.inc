PARAMETER INDHEAT_MINPERCENT(YYY,INDHEAT_AAA,INDHEAT_GROUP) 'Minimum percentage assumed to be fixed to a specific group';
*Draft version: assumption that DH accounts for 80% of the total heat demand in DK, therefore indheat must be 25% of this demand

INDHEAT_MINPERCENT(Y,INDHEAT_AAA,INDHEAT_GROUP)  = 0.1$(SUM(INDHEAT_G$INDHEAT_GINGROUP(INDHEAT_G,INDHEAT_GROUP),INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP))>0);


































































































