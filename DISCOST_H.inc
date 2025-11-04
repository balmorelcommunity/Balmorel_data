PARAMETER DISCOST_H(AAA)  'Cost of heat distribution (Money/MWh)'     
* Areas merged, average values used                                   
/                                                                     
DK1_A                                                             2   
DK2_A                                                             2   
FIN_A                                                             2   
DE4-E_A                                                           2   
DE4-N_A                                                           2   
DE4-S_A                                                           2   
DE4-W_A                                                           2   
EE_A                                                              2   
LT_A                                                              2   
LV_A                                                              2   
NL_A                                                              2   
PL_A                                                              2   
UK_A                                                              2   
SE1_A                                                             2   
SE2_A                                                             2   
SE3_A                                                             2   
SE4_A                                                             2   
IT_A                                                              2   
CH_A                                                              2   
AT_A                                                              2   
CZ_A                                                              2   
ES_A                                                              2   
PT_A                                                              2   
SK_A                                                              2   
HU_A                                                              2   
SI_A                                                              2   
HR_A                                                              2   
RO_A                                                              2   
BG_A                                                              2   
GR_A                                                              2   
IE_A                                                              2   
LU_A                                                              2   
AL_A                                                              2   
ME_A                                                              2   
MK_A                                                              2   
BA_A                                                              2   
RS_A                                                              2   
TR_A                                                              2   
MT_A                                                              2   
CY_A                                                              2                                                                                                                              
/;                                                                    

$if     EXIST '../data/DISCOST_H_renewable.inc ' $INCLUDE      '../data/DISCOST_H_renewable.inc'; 
$if not EXIST '../data/DISCOST_H_renewable.inc ' $INCLUDE      '../../base/data/DISCOST_H_renewable.inc'; 