$if     EXIST '../data/WND_VAR_T_OFF.inc' $INCLUDE      '../data/WND_VAR_T_OFF.inc';        
$if not EXIST '../data/WND_VAR_T_OFF.inc' $INCLUDE      '../../base/data/WND_VAR_T_OFF.inc';

$if     EXIST '../data/WND_VAR_T_ON1.inc' $INCLUDE      '../data/WND_VAR_T_ON1.inc';                         
$if not EXIST '../data/WND_VAR_T_ON1.inc'    $INCLUDE '../../base/data/WND_VAR_T_ON1.inc';

$if     EXIST '../data/WND_VAR_T_ON2.inc' $INCLUDE      '../data/WND_VAR_T_ON2.inc';                       
$if not EXIST '../data/WND_VAR_T_ON2.inc'    $INCLUDE '../../base/data/WND_VAR_T_ON2.inc';

$if     EXIST '../data/WND_VAR_T_Existing.inc' $INCLUDE      '../data/WND_VAR_T_Existing.inc';                  
$if not EXIST '../data/WND_VAR_T_Existing.inc'    $INCLUDE '../../base/data/WND_VAR_T_Existing.inc';

WND_VAR_T(AAA,SSS,TTT) = WND_VAR_T1(SSS,TTT,AAA);  
WND_VAR_T(IA,SSS,TTT)$((NOT SUM((S,T), WND_VAR_T(IA,S,T))) AND WNDFLH(IA)) = WND_VAR_T('DK1_OFF_OFF_Existing_RG2',SSS,TTT) ; 
WND_VAR_T1(SSS,TTT,AAA)=0;