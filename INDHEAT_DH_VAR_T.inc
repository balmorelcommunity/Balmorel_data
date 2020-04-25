PARAMETER INDHEAT_DH_VAR_T(INDHEAT_AAA,INDHEAT_DHUSER,SSS,TTT) 'Variation in individual heat demand' ;                                                                                         
*Draft version: assuming the same profiles as DK1_large                                                                                                                                        
                                                                                                                                                                                               
INDHEAT_DH_VAR_T(INDHEAT_AAA,'SPACEHEAT',SSS,TTT)  = DH_VAR_T('DK1_Medium','RESH',SSS,TTT)-DH_VAR_T('DK1_Medium','RESH',SSS,TTT)$(ORD(SSS)>18 AND ORD(SSS)<37);                                
INDHEAT_DH_VAR_T(INDHEAT_AAA,'HOTWATER',SSS,TTT)  = DH_VAR_T('DK1_Medium','RESH',SSS,TTT)$(ORD(SSS)>18 AND ORD(SSS)<37) + DH_VAR_T('DK1_Medium','RESH','S20',TTT)$(ORD(SSS)<19 OR ORD(SSS)>36);
