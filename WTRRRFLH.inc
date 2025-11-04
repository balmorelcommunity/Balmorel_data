PARAMETER WTRRRFLH(AAA) 'Full load hours for hydro run-of-river plants (hours)'                                                                                                       
* Includes the three options "dry", "wet" and "normal" according to which hydrological conditions to analyze                                                                          
/                                                                                                                                                                                     
* Average year 2002-2011                                                                                                                                                              
FIN_A                                                                                                                                                                 4819.27012282765
DE4-E_A                                                                                                                                                               2035.37481427205
DE4-N_A                                                                                                                                                               2035.37481427205
DE4-S_A                                                                                                                                                               2035.37481427205
DE4-W_A                                                                                                                                                               2035.37481427205
NL_A                                                                                                                                                                  4200            
NO1_A                                                                                                                                                                 4175.15822434474
NO2_A                                                                                                                                                                 4734.04616878191
NO3_A                                                                                                                                                                 3856.64552610268
NO4_A                                                                                                                                                                 3844.41878371575
NO5_A                                                                                                                                                                 5285.48782040366
SE1_A                                                                                                                                                                 4117.721607607  
SE2_A                                                                                                                                                                 5120.45007111377
SE3_A                                                                                                                                                                 4202.55103738896
SE4_A                                                                                                                                                                 4772.87790539999
UK_A                                                                                                                                                                  3032            
EE_A                                                                                                                                                                  7500            
LV_A                                                                                                                                                                  2465            
LT_A                                                                                                                                                                  4800            
PL_A                                                                                                                                                                  2425            
DK2_A                                                                                                                                                                 4819.86064070176
DK1_A                                                                                                                                                                 4819.86064070176
BE_A                                                                                                                                                                  2999.99997642319
FR_A                                                                                                                                                                  2843.99998353587
IT_A                                                                                                                                                                  3300            
CH_A                                                                                                                                                                  4000            
AT_A                                                                                                                                                                  4000            
CZ_A                                                                                                                                                                  2843.99998353587
ES_A                                                                                                                                                                  2843.99998353587
PT_A                                                                                                                                                                  2843.99998353587
SK_A                                                                                                                                                                  2843.99998353587
HU_A                                                                                                                                                                  2843.99998353587
SI_A                                                                                                                                                                  2843.99998353587
HR_A                                                                                                                                                                  2843.99998353587
RO_A                                                                                                                                                                  2843.99998353587
BG_A                                                                                                                                                                  2843.99998353587
GR_A                                                                                                                                                                  2843.99998353587
IE_A                                                                                                                                                                  2843.99998353587
LU_A                                                                                                                                                                  2843.99998353587
AL_A                                                                                                                                                                  2843.99998353587
ME_A                                                                                                                                                                  2843.99998353587
MK_A                                                                                                                                                                  2843.99998353587
BA_A                                                                                                                                                                  2843.99998353587
RS_A                                                                                                                                                                  2843.99998353587
TR_A                                                                                                                                                                  2843.99998353587
MT_A                                                                                                                                                                  2843.99998353587
CY_A                                                                                                                                                                  2843.99998353587
/;                                                                                                                                                                                    
                                                                                                                                                                                      
* If WTRRRFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as FinA                                                              
WTRRRFLH(IA)$((NOT WTRRRFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GHYRR), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GHYRR), GKFX(Y,IA,G)))) = WTRRRFLH('FIN_A') ;                 
