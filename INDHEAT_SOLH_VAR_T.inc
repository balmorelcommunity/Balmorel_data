PARAMETER INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT) 'Variation in solar heating profile';

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('UNITED_KINGDOM',INDHEAT_AAA))                 =    SOLH_VAR_T('UK_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('GERMANY',INDHEAT_AAA))                        =    SOLH_VAR_T('DE4-S_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('POLAND',INDHEAT_AAA))                         =    SOLH_VAR_T('PL_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('FRANCE',INDHEAT_AAA))                         =    SOLH_VAR_T('FR_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('NETHERLANDS',INDHEAT_AAA))                    =    SOLH_VAR_T('NL_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('BELGIUM',INDHEAT_AAA))                        =    SOLH_VAR_T('BE_A',SSS,TTT);

INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('NORWAY',INDHEAT_AAA))                         =    SOLH_VAR_T('NO1_A1',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('SWEDEN',INDHEAT_AAA))                         =    SOLH_VAR_T('SE1A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('DENMARK',INDHEAT_AAA))                        =    SOLH_VAR_T('DK1_NoDH',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('FINLAND',INDHEAT_AAA))                        =    SOLH_VAR_T('FinA',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('ESTONIA',INDHEAT_AAA))                        =    SOLH_VAR_T('EE_Rural',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('LATVIA',INDHEAT_AAA))                         =    SOLH_VAR_T('LV_A',SSS,TTT);
INDHEAT_SOLH_VAR_T(INDHEAT_AAA,SSS,TTT)$(ICA('LITHUANIA',INDHEAT_AAA))                      =    SOLH_VAR_T('LT_A',SSS,TTT);
$label endindheat_eu

$ifi not %indheat_geo%==indheat_dk $goto endindheat_dk
INDHEAT_SOLH_VAR_T('DK1_noDH_ind',SSS,TTT)                                                  =    SOLH_VAR_T('DK1_noDH',SSS,TTT);
INDHEAT_SOLH_VAR_T('DK1_noDH_apart',SSS,TTT)                                                =    SOLH_VAR_T('DK1_noDH',SSS,TTT);
INDHEAT_SOLH_VAR_T('DK2_noDH_ind',SSS,TTT)                                                  =    SOLH_VAR_T('DK2_noDH',SSS,TTT);
INDHEAT_SOLH_VAR_T('DK2_noDH_apart',SSS,TTT)                                                =    SOLH_VAR_T('DK2_noDH',SSS,TTT);
$label endindheat_dk
