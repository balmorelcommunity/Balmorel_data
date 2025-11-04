PARAMETER WTRRSFLH(AAA) 'Full load hours for hydro reservoir plants (hours)'                                                                                                            
* This parameter should be phased out. For now set equal to ROR                                                                                                                         
/                                                                                                                                                                                       
* Average year 2002-2011                                                                                                                                                                
FIN_A                                                                                                                                                                   5800            
DE4-E_A                                                                                                                                                                 4819.86064070176
DE4-N_A                                                                                                                                                                 4819.86064070176
DE4-S_A                                                                                                                                                                 4819.86064070176
DE4-W_A                                                                                                                                                                 4819.86064070176
                                                                                                                                                                                        
NO1_A                                                                                                                                                                   3017.78602223856
NO2_A                                                                                                                                                                   4224.81456662124
NO3_A                                                                                                                                                                   4441.3853415807 
NO4_A                                                                                                                                                                   5022.26279196499
NO5_A                                                                                                                                                                   4246.52449798427
SE1_A                                                                                                                                                                   3280.48661247439
SE2_A                                                                                                                                                                   4441.3853415807 
SE3_A                                                                                                                                                                   4078.00735163047
SE4_A                                                                                                                                                                   4500            
FR_A                                                                                                                                                                    2999.99997600292
IT_A                                                                                                                                                                    3300            
CH_A                                                                                                                                                                    4000            
AT_A                                                                                                                                                                    4000            
CZ_A                                                                                                                                                                    3000            
ES_A                                                                                                                                                                    2999.99997600292
PT_A                                                                                                                                                                    2999.99997600292
SK_A                                                                                                                                                                    2999.99997600292
HU_A                                                                                                                                                                    2999.99997600292
SI_A                                                                                                                                                                    2999.99997600292
HR_A                                                                                                                                                                    2999.99997600292
RO_A                                                                                                                                                                    2999.99997600292
BG_A                                                                                                                                                                    2999.99997600292
GR_A                                                                                                                                                                    2999.99997600292
IE_A                                                                                                                                                                    2999.99997600292
LU_A                                                                                                                                                                    2999.99997600292
AL_A                                                                                                                                                                    2999.99997600292
ME_A                                                                                                                                                                    2999.99997600292
MK_A                                                                                                                                                                    2999.99997600292
BA_A                                                                                                                                                                    2999.99997600292
RS_A                                                                                                                                                                    2999.99997600292
TR_A                                                                                                                                                                    2999.99997600292
MT_A                                                                                                                                                                    2999.99997600292
CY_A                                                                                                                                                                    2999.99997600292
/;                                                                                                                                                                                      
                                                                                                                                                                                        
* If WTRRSFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as FinA                                                                
WTRRSFLH(IA)$((NOT WTRRSFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRS), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRS), GKFX(Y,IA,G)))) = WTRRSFLH('NO1_A') ;                 
                                                                                                                                                                                        
