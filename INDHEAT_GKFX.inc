PARAMETER INDHEAT_GKFX(YYY,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)        'Capacity of technologies [MW]';

INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP)=0;

INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP) = INDHEAT_GINSTALL(Y,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)*
                                                                 SUM(INDHEAT_DHUSER$SUM((S,T),INDHEAT_DH_VAR_T(INDHEAT_AAA,INDHEAT_DHUSER,S,T)),
                                                                 (INDHEAT_DH(Y,INDHEAT_AAA,INDHEAT_DHUSER)
                                                                 *smax((S,T),INDHEAT_DH_VAR_T(INDHEAT_AAA,INDHEAT_DHUSER,S,T)))
                                                                 /(SUM((S,T), IOF8760*WEIGHT_S(S)*WEIGHT_T(T)*INDHEAT_DH_VAR_T(INDHEAT_AAA,INDHEAT_DHUSER,S,T))/(SUM(S, WEIGHT_S(S))*SUM(T, WEIGHT_T(T))))
                                                                 )
;

INDHEAT_GKFX(Y,INDHEAT_AAA,'IDVHG_WTRTANK_WTRONLY_2015_OFH',INDHEAT_IGROUPSTO) =SUM(INDHEAT_G,INDHEAT_GKFX(Y,INDHEAT_AAA,INDHEAT_G,INDHEAT_IGROUPSTO) )/4;