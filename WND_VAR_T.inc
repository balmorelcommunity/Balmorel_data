TABLE   WND_VAR_T1(SSS,TTT,AAA)   'Variation in wind generation'

    
$onMulti

$if     EXIST "../data/WND_VAR_T_OFF.inc"        $include "../data/WND_VAR_T_OFF.inc"
$if not EXIST "../data/WND_VAR_T_OFF.inc"        $include "../../base/data/WND_VAR_T_OFF.inc"

$if     EXIST "../data/WND_VAR_T_ON1.inc"        $include "../data/WND_VAR_T_ON1.inc"
$if not EXIST "../data/WND_VAR_T_ON1.inc"        $include "../../base/data/WND_VAR_T_ON1.inc"

$if     EXIST "../data/WND_VAR_T_ON2.inc"        $include "../data/WND_VAR_T_ON2.inc"
$if not EXIST "../data/WND_VAR_T_ON2.inc"        $include "../../base/data/WND_VAR_T_ON2.inc"

$if     EXIST "../data/WND_VAR_T_Existing.inc"   $include "../data/WND_VAR_T_Existing.inc"
$if not EXIST "../data/WND_VAR_T_Existing.inc"   $include "../../base/data/WND_VAR_T_Existing.inc"

$offMulti

WND_VAR_T(AAA,SSS,TTT) = WND_VAR_T1(SSS,TTT,AAA);
WND_VAR_T1(SSS,TTT,AAA)=0;

