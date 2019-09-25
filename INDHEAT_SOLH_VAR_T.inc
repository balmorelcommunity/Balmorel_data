PARAMETER INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT) 'Variation in solar heating profile';                                 
                                                                                                                        
$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu                                                                  
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('UNITED_KINGDOM',INDHEAT_AAA))                 =    SOLH_VAR_T('UK_A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('GERMANY',INDHEAT_AAA))                        =    SOLH_VAR_T('DE4-S_A',S,T); 
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('POLAND',INDHEAT_AAA))                         =    SOLH_VAR_T('PL_A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('FRANCE',INDHEAT_AAA))                         =    SOLH_VAR_T('FR_A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('NETHERLANDS',INDHEAT_AAA))                    =    SOLH_VAR_T('NL_A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('BELGIUM',INDHEAT_AAA))                        =    SOLH_VAR_T('BE_A',S,T);    
                                                                                                                        
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('NORWAY',INDHEAT_AAA))                         =    SOLH_VAR_T('NO1_A1',S,T);  
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('SWEDEN',INDHEAT_AAA))                         =    SOLH_VAR_T('SE1A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('DENMARK',INDHEAT_AAA))                        =    SOLH_VAR_T('DK1_NoDH',S,T);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('FINLAND',INDHEAT_AAA))                        =    SOLH_VAR_T('FinA',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('ESTONIA',INDHEAT_AAA))                        =    SOLH_VAR_T('EE_Rural',S,T);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('LATVIA',INDHEAT_AAA))                         =    SOLH_VAR_T('LV_A',S,T);    
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,S,T)$(ICA('LITHUANIA',INDHEAT_AAA))                      =    SOLH_VAR_T('LT_A',S,T);    
$label endindheat_eu                                                                                                    
                                                                                                                        
$ifi not %indheat_geo%==indheat_dk $goto endindheat_dk                                                                  
INDHEAT_SOLH_VAR_T('DK1_noDH_ind',S,T)                                                  =    SOLH_VAR_T('DK1_noDH',S,T);
INDHEAT_SOLH_VAR_T('DK1_noDH_apart',S,T)                                                =    SOLH_VAR_T('DK1_noDH',S,T);
INDHEAT_SOLH_VAR_T('DK2_noDH_ind',S,T)                                                  =    SOLH_VAR_T('DK2_noDH',S,T);
INDHEAT_SOLH_VAR_T('DK2_noDH_apart',S,T)                                                =    SOLH_VAR_T('DK2_noDH',S,T);
$label endindheat_dk                                                                                                    
