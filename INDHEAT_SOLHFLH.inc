PARAMETER INDHEAT_SOLHFLH(INDHEAT_AAA)                                 'Full load hours for solar heat (hours)'; 
                                                                                                                 
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('DENMARK',INDHEAT_AAA))        =    SOLHFLH('DK1_NoDH');                       
                                                                                                                 
$ifi not %indheat_geo%==indheat_eu                                    $goto endindheat_eu                        
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('NORWAY',INDHEAT_AAA))         =    SOLHFLH('NO1_A1');                         
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('SWEDEN',INDHEAT_AAA))         =    SOLHFLH('SE1A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('FINLAND',INDHEAT_AAA))        =    SOLHFLH('FinA');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('ESTONIA',INDHEAT_AAA))        =    SOLHFLH('EE_Rural');                       
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('LATVIA',INDHEAT_AAA))         =    SOLHFLH('LV_A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('LITHUANIA',INDHEAT_AAA))      =    SOLHFLH('LT_A');                           
                                                                                                                 
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('UNITED_KINGDOM',INDHEAT_AAA)) =    SOLHFLH('UK_A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('GERMANY',INDHEAT_AAA))        =    SOLHFLH('DE4-S_A');                        
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('POLAND',INDHEAT_AAA))         =    SOLHFLH('PL_A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('FRANCE',INDHEAT_AAA))         =    SOLHFLH('FR_A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('NETHERLANDS',INDHEAT_AAA))    =    SOLHFLH('NL_A');                           
INDHEAT_SOLHFLH(INDHEAT_AAA)$(ICA('BELGIUM',INDHEAT_AAA))        =    SOLHFLH('BE_A');                           
$label endindheat_eu                                                                                             
