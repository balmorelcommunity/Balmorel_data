PARAMETER SOLHFLH(AAA)  'Full load hours for solar heat (hours)'                                                                                                                    
* Data from https://zenodo.org/record/1146666#.Xl-shqhKguU                                                                                                                          
/                                                                                                                                                                                   
FIN_A                                                                                                                                                               386.329175591457
DE4-E_A                                                                                                                                                             612.251263689368
DE4-N_A                                                                                                                                                             612.251263689368
DE4-S_A                                                                                                                                                             612.251263689368
DE4-W_A                                                                                                                                                             612.251263689368
SE1_A                                                                                                                                                               501.022626588929
SE2_A                                                                                                                                                               501.022626588929
SE3_A                                                                                                                                                               501.022626588929
SE4_A                                                                                                                                                               501.022626588929
EE_A                                                                                                                                                                444.791212631231
LT_A                                                                                                                                                                490.359980287282
LV_A                                                                                                                                                                466.25452712218 
NL_A                                                                                                                                                                531.818287642972
PL_A                                                                                                                                                                584.952690003189
UK_A                                                                                                                                                                455.498730490753
NO1_A                                                                                                                                                               423.202360176718
NO2_A                                                                                                                                                               423.202360176718
NO3_A                                                                                                                                                               423.202360176718
NO4_A                                                                                                                                                               423.202360176718
NO5_A                                                                                                                                                               423.202360176718
DK1_A                                                                                                                                                               520.212001354722
DK2_A                                                                                                                                                               520.212001354722
BE_A                                                                                                                                                                561.986968554354
FR_A                                                                                                                                                                709.367418438484
IT_A                                                                                                                                                                700             
CH_A                                                                                                                                                                650             
AT_A                                                                                                                                                                650             
CZ_A                                                                                                                                                                600             
ES_A                                                                                                                                                                800             
PT_A                                                                                                                                                                800             
SK_A                                                                                                                                                                800             
HU_A                                                                                                                                                                800             
SI_A                                                                                                                                                                800             
HR_A                                                                                                                                                                800             
RO_A                                                                                                                                                                800             
BG_A                                                                                                                                                                800             
GR_A                                                                                                                                                                800             
IE_A                                                                                                                                                                800             
LU_A                                                                                                                                                                800             
AL_A                                                                                                                                                                800             
ME_A                                                                                                                                                                800             
MK_A                                                                                                                                                                800             
BA_A                                                                                                                                                                800             
RS_A                                                                                                                                                                800             
TR_A                                                                                                                                                                800             
MT_A                                                                                                                                                                800             
CY_A                                                                                                                                                                800             
                                                                                                                                                                                    
/;                                                                                                                                                                                  
                                                                                                                                                                                    
                                                                                                                                                                                    
* If SOLHFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as DK2_NoDH                                                         
*SOLHFLH(IA)$((NOT SOLHFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLH), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLH), GKFX(Y,IA,G)))) = SOLHFLH('FR_A') ;                 
                                                                                                                                                                                    
