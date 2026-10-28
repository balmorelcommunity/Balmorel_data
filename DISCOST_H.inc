* Money: EUR2016. Legacy EUR2012 values x 1.022 (EU HICP 2016/2012).
PARAMETER DISCOST_H(AAA)  'Cost of heat distribution (Money/MWh)'     
* Areas merged, average values used                                   
/                                                                     
DK1_Large                                                         2.044
DK1_Rural                                                         2.044
DK1_Medium                                                        2.044
DK2_Large                                                         2.044
DK2_Rural                                                         2.044
DK2_Medium                                                        2.044
DK2_MedSmall                                                      2.044
DK1_Small                                                         2.044
DK1_MedSmall                                                      2.044
DK2_Small                                                         2.044
DK2_NoDH                                                          2.044
DK1_NoDH                                                          2.044
FinA                                                              2.044
DE4-E_A                                                           2.044
DE4-N_A                                                           2.044
DE4-S_A                                                           2.044
DE4-W_A                                                           2.044
EE_Enefit                                                         2.044
EE_Kohtla_Jarve                                                   2.044
EE_Narva                                                          2.044
EE_Parnu                                                          2.044
EE_Rural                                                          2.044
EE_Sillamae                                                       2.044
EE_Tallinn                                                        2.044
EE_Tartu                                                          2.044
EE_Urban                                                          2.044
LT_KauU                                                           2.044
LT_KlaU                                                           2.044
LT_Other_DH                                                       2.044
LT_Panevezys                                                      2.044
LT_Rural                                                          2.044
LT_SiaU                                                           2.044
LT_VilU                                                           2.044
LV_Other_DH                                                       2.044
LV_RigaR                                                          2.044
LV_Rural                                                          2.044
NL_A                                                              2.044
PL_A                                                              2.044
PL_Rural                                                          2.044
UK_A                                                              2.044
SE1A                                                              2.044
SE2A                                                              2.044
SE3A                                                              2.044
SE4A                                                              2.044
IT_A                                                              2.044
CH_A                                                              2.044
AT_A                                                              2.044
CZ_A                                                              2.044
ES_A                                                              2.044
PT_A                                                              2.044
SK_A                                                              2.044
HU_A                                                              2.044
SI_A                                                              2.044
HR_A                                                              2.044
RO_A                                                              2.044
BG_A                                                              2.044
GR_A                                                              2.044
IE_A                                                              2.044
LU_A                                                              2.044
AL_A                                                              2.044
ME_A                                                              2.044
MK_A                                                              2.044
BA_A                                                              2.044
RS_A                                                              2.044
TR_A                                                              2.044
MT_A                                                              2.044
CY_A                                                              2.044                                                                                                                          
/;                                                                    

$if     EXIST '../data/DISCOST_H_renewable.inc ' $INCLUDE      '../data/DISCOST_H_renewable.inc'; 
$if not EXIST '../data/DISCOST_H_renewable.inc ' $INCLUDE      '../../base/data/DISCOST_H_renewable.inc'; 