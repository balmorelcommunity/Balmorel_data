SET INVDATASET_INDIVUSERS                                                                                                                                                                             
/                                                                                                                                                                                                     
                                                                                                                                                                                                      
IDVU-HOTWTR                                                                                                                    'individual users, area with hot water demand'                         
IDVU-SPACEHEAT                                                                                                                 'individual users, area with space heating demand'                     
                                                                                                                                                                                                      
/;                                                                                                                                                                                                    
                                                                                                                                                                                                      
                                                                                                                                                                                                      
*** TABLE to connect areas to regions, countries and other subsets                                                                                                                                    
TABLE INVDATA_INDIVUSERS(AAA,INVDATASET_INDIVUSERS)                                                                                                                                                   
                                                                                                                               IDVU-HOTWTR                                        IDVU-SPACEHEAT      
BE_IDVU-HOTWTR                                                                                                                 1                                                                      
DE4-E_IDVU-HOTWTR                                                                                                              1                                                                      
DE4-N_IDVU-HOTWTR                                                                                                              1                                                                      
DE4-S_IDVU-HOTWTR                                                                                                              1                                                                      
DE4-W_IDVU-HOTWTR                                                                                                              1                                                                      
DK1_IDVU-HOTWTR                                                                                                                1                                                                      
DK2_IDVU-HOTWTR                                                                                                                1                                                                      
EE_IDVU-HOTWTR                                                                                                                 1                                                                      
FIN_IDVU-HOTWTR                                                                                                                1                                                                      
FR_IDVU-HOTWTR                                                                                                                 1                                                                      
LT_IDVU-HOTWTR                                                                                                                 1                                                                      
LV_IDVU-HOTWTR                                                                                                                 1                                                                      
NL_IDVU-HOTWTR                                                                                                                 1                                                                      
NO1_IDVU-HOTWTR                                                                                                                1                                                                      
NO2_IDVU-HOTWTR                                                                                                                1                                                                      
NO3_IDVU-HOTWTR                                                                                                                1                                                                      
NO4_IDVU-HOTWTR                                                                                                                1                                                                      
NO5_IDVU-HOTWTR                                                                                                                1                                                                      
PL_IDVU-HOTWTR                                                                                                                 1                                                                      
SE1_IDVU-HOTWTR                                                                                                                1                                                                      
SE2_IDVU-HOTWTR                                                                                                                1                                                                      
SE3_IDVU-HOTWTR                                                                                                                1                                                                      
SE4_IDVU-HOTWTR                                                                                                                1                                                                      
UK_IDVU-HOTWTR                                                                                                                 1                                                                      
                                                                                                                                                                                                      
BE_IDVU-SPACEHEAT                                                                                                                                                                 1                   
DE4-E_IDVU-SPACEHEAT                                                                                                                                                              1                   
DE4-N_IDVU-SPACEHEAT                                                                                                                                                              1                   
DE4-S_IDVU-SPACEHEAT                                                                                                                                                              1                   
DE4-W_IDVU-SPACEHEAT                                                                                                                                                              1                   
DK1_IDVU-SPACEHEAT                                                                                                                                                                1                   
DK2_IDVU-SPACEHEAT                                                                                                                                                                1                   
EE_IDVU-SPACEHEAT                                                                                                                                                                 1                   
FIN_IDVU-SPACEHEAT                                                                                                                                                                1                   
FR_IDVU-SPACEHEAT                                                                                                                                                                 1                   
LT_IDVU-SPACEHEAT                                                                                                                                                                 1                   
LV_IDVU-SPACEHEAT                                                                                                                                                                 1                   
NL_IDVU-SPACEHEAT                                                                                                                                                                 1                   
NO1_IDVU-SPACEHEAT                                                                                                                                                                1                   
NO2_IDVU-SPACEHEAT                                                                                                                                                                1                   
NO3_IDVU-SPACEHEAT                                                                                                                                                                1                   
NO4_IDVU-SPACEHEAT                                                                                                                                                                1                   
NO5_IDVU-SPACEHEAT                                                                                                                                                                1                   
PL_IDVU-SPACEHEAT                                                                                                                                                                 1                   
SE1_IDVU-SPACEHEAT                                                                                                                                                                1                   
SE2_IDVU-SPACEHEAT                                                                                                                                                                1                   
SE3_IDVU-SPACEHEAT                                                                                                                                                                1                   
SE4_IDVU-SPACEHEAT                                                                                                                                                                1                   
UK_IDVU-SPACEHEAT                                                                                                                                                                 1                   
                                                                                                                                                                                                      
$ifi not %GROUP_DEMAND_SHIFT%==yes      $goto NO_INDIVUSERS_INDIVUSERS                                                                                                                                
BE_IDVU_RES-HOTWTR                                                                                                             1                                                                      
DE4-E_IDVU_RES-HOTWTR                                                                                                          1                                                                      
DE4-N_IDVU_RES-HOTWTR                                                                                                          1                                                                      
DE4-S_IDVU_RES-HOTWTR                                                                                                          1                                                                      
DE4-W_IDVU_RES-HOTWTR                                                                                                          1                                                                      
DK1_IDVU_RES-HOTWTR                                                                                                            1                                                                      
DK2_IDVU_RES-HOTWTR                                                                                                            1                                                                      
EE_IDVU_RES-HOTWTR                                                                                                             1                                                                      
FIN_IDVU_RES-HOTWTR                                                                                                            1                                                                      
FR_IDVU_RES-HOTWTR                                                                                                             1                                                                      
LT_IDVU_RES-HOTWTR                                                                                                             1                                                                      
LV_IDVU_RES-HOTWTR                                                                                                             1                                                                      
NL_IDVU_RES-HOTWTR                                                                                                             1                                                                      
NO1_IDVU_RES-HOTWTR                                                                                                            1                                                                      
NO2_IDVU_RES-HOTWTR                                                                                                            1                                                                      
NO3_IDVU_RES-HOTWTR                                                                                                            1                                                                      
NO4_IDVU_RES-HOTWTR                                                                                                            1                                                                      
NO5_IDVU_RES-HOTWTR                                                                                                            1                                                                      
PL_IDVU_RES-HOTWTR                                                                                                             1                                                                      
SE1_IDVU_RES-HOTWTR                                                                                                            1                                                                      
SE2_IDVU_RES-HOTWTR                                                                                                            1                                                                      
SE3_IDVU_RES-HOTWTR                                                                                                            1                                                                      
SE4_IDVU_RES-HOTWTR                                                                                                            1                                                                      
UK_IDVU_RES-HOTWTR                                                                                                             1                                                                      
BE_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
DE4-E_IDVU_RES-SPACEHEAT                                                                                                                                                          1                   
DE4-N_IDVU_RES-SPACEHEAT                                                                                                                                                          1                   
DE4-S_IDVU_RES-SPACEHEAT                                                                                                                                                          1                   
DE4-W_IDVU_RES-SPACEHEAT                                                                                                                                                          1                   
DK1_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
DK2_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
EE_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
FIN_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
FR_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
LT_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
LV_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
NL_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
NO1_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
NO2_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
NO3_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
NO4_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
NO5_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
PL_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
SE1_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
SE2_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
SE3_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
SE4_IDVU_RES-SPACEHEAT                                                                                                                                                            1                   
UK_IDVU_RES-SPACEHEAT                                                                                                                                                             1                   
BE_IDVU_TER-HOTWTR                                                                                                             1                                                                      
DE4-E_IDVU_TER-HOTWTR                                                                                                          1                                                                      
DE4-N_IDVU_TER-HOTWTR                                                                                                          1                                                                      
DE4-S_IDVU_TER-HOTWTR                                                                                                          1                                                                      
DE4-W_IDVU_TER-HOTWTR                                                                                                          1                                                                      
DK1_IDVU_TER-HOTWTR                                                                                                            1                                                                      
DK2_IDVU_TER-HOTWTR                                                                                                            1                                                                      
EE_IDVU_TER-HOTWTR                                                                                                             1                                                                      
FIN_IDVU_TER-HOTWTR                                                                                                            1                                                                      
FR_IDVU_TER-HOTWTR                                                                                                             1                                                                      
LT_IDVU_TER-HOTWTR                                                                                                             1                                                                      
LV_IDVU_TER-HOTWTR                                                                                                             1                                                                      
NL_IDVU_TER-HOTWTR                                                                                                             1                                                                      
NO1_IDVU_TER-HOTWTR                                                                                                            1                                                                      
NO2_IDVU_TER-HOTWTR                                                                                                            1                                                                      
NO3_IDVU_TER-HOTWTR                                                                                                            1                                                                      
NO4_IDVU_TER-HOTWTR                                                                                                            1                                                                      
NO5_IDVU_TER-HOTWTR                                                                                                            1                                                                      
PL_IDVU_TER-HOTWTR                                                                                                             1                                                                      
SE1_IDVU_TER-HOTWTR                                                                                                            1                                                                      
SE2_IDVU_TER-HOTWTR                                                                                                            1                                                                      
SE3_IDVU_TER-HOTWTR                                                                                                            1                                                                      
SE4_IDVU_TER-HOTWTR                                                                                                            1                                                                      
UK_IDVU_TER-HOTWTR                                                                                                             1                                                                      
BE_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
DE4-E_IDVU_TER-SPACEHEAT                                                                                                                                                          1                   
DE4-N_IDVU_TER-SPACEHEAT                                                                                                                                                          1                   
DE4-S_IDVU_TER-SPACEHEAT                                                                                                                                                          1                   
DE4-W_IDVU_TER-SPACEHEAT                                                                                                                                                          1                   
DK1_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
DK2_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
EE_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
FIN_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
FR_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
LT_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
LV_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
NL_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
NO1_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
NO2_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
NO3_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
NO4_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
NO5_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
PL_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
SE1_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
SE2_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
SE3_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
SE4_IDVU_TER-SPACEHEAT                                                                                                                                                            1                   
UK_IDVU_TER-SPACEHEAT                                                                                                                                                             1                   
$label NO_INDIVUSERS_INDIVUSERS                                                                                                                                                                       
;                                                                                                                                                                                                     
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
$ontext                                                                                                                                                                                               
To avoid manual entry in each area the following catagories of areas are defined.                                                                                                                     
Note that each area can belong to one group only                                                                                                                                                      
1 - Areas with space heating                                                                                                                                                                          
2 - Areas with water heating                                                                                                                                                                          
                                                                                                                                                                                                      
$offtext                                                                                                                                                                                              
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
SET ALLOWEDINV_INDIVUSERS(AAA,GGG) "Area, technology where technolgy may be invested based on AGKN and implicit constraints "                                                                         
/                                                                                                                                                                                                     
*GROUP 1 - Areas with space heating                                                                                                                                                                   
DK1_IDVU-SPACEHEAT.(                                                                                                                                                                                  
                                                                                                                                                                                                      
GNR_HP_ELEC_AIR-AIR_COP-490_SS-3-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-340_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-350_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-360_SS-4-KW_Y-2050                                                                                                                                                            
                                                                                                                                                                                                      
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*GROUP 2 -  Areas with water heating                                                                                                                                                                  
DK1_IDVU-HOTWTR.(                                                                                                                                                                                     
                                                                                                                                                                                                      
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2020                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2030                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2040                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2050                                                                                                                                                                 
GNR_BO_NGAS_E-95_SS-10-KW_Y-2020                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2030                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2040                                                                                                                                                                      
GNR_BO_NGAS_E-97_SS-10-KW_Y-2050                                                                                                                                                                      
GNR_BO_WOODPEL_E-78_SS-10-KW-FEED_Y-2020                                                                                                                                                              
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2030                                                                                                                                                               
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2040                                                                                                                                                               
GNR_BO_WOODPEL_E-85_SS-8-KW-FEED_Y-2050                                                                                                                                                               
GNR_HP_ELEC_AIR-WTR_COP-335_SS-4-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-365_SS-4-KW_Y-2050                                                                                                                                                            
GNR_HP_ELEC_GROUND-WTR_COP-370_SS-10-KW_Y-2020                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-380_SS-10-KW_Y-2030                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-388_SS-10-KW_Y-2040                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-400_SS-10-KW_Y-2050                                                                                                                                                        
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
GNR_SH_SUN_SS-4-KW_Y-2020                                                                                                                                                                             
GNR_SH_SUN_SS-4-KW_Y-2030                                                                                                                                                                             
GNR_SH_SUN_SS-4-KW_Y-2040                                                                                                                                                                             
GNR_SH_SUN_SS-4-KW_Y-2050                                                                                                                                                                             
                                                                                                                                                                                                      
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
                                                                                                                                                                                                      
/;                                                                                                                                                                                                    
                                                                                                                                                                                                      
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-HOTWTR')=1)  and ALLOWEDINV_INDIVUSERS('DK1_IDVU-HOTWTR',G))        = yes;                                                                
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-SPACEHEAT')=1)  and ALLOWEDINV_INDIVUSERS('DK1_IDVU-SPACEHEAT',G))  = yes;                                                                
                                                                                                                                                                                                      
                                                                                                                                                                                                      
$ifi not %GROUP_DEMAND_SHIFT%==yes  $goto NO_INDIVUSERS_AGKN                                                                                                                                          
*Redefine indivuser areas without sector as new DH areas, where no technology is allowed.                                                                                                             
ALLOWEDINV_INDIVUSERS(AAA,G)$SUM(DHUSER,INDIVUSERS_GROUP_A(AAA,DHUSER,'RES_NEW_DH')) = NO ;                                                                                                           
                                                                                                                                                                                                      
SET INDIV_AGKN_GROUP(G,AAA)                                                                                                                                                                           
/                                                                                                                                                                                                     
*Coal boilers                                                                                                                                                                                         
(GNR_BO_COAL_E-76_SS_Y-2020                                                                                                                                                                           
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
).(                                                                                                                                                                                                   
BE_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,BE_IDVU_TER_BO_COAL-HOTWTR                                            
DE4-E_IDVU_RES_BO_COAL-HOTWTR                                                                                                  ,DE4-E_IDVU_TER_BO_COAL-HOTWTR                                         
DE4-N_IDVU_RES_BO_COAL-HOTWTR                                                                                                  ,DE4-N_IDVU_TER_BO_COAL-HOTWTR                                         
DE4-S_IDVU_RES_BO_COAL-HOTWTR                                                                                                  ,DE4-S_IDVU_TER_BO_COAL-HOTWTR                                         
DE4-W_IDVU_RES_BO_COAL-HOTWTR                                                                                                  ,DE4-W_IDVU_TER_BO_COAL-HOTWTR                                         
EE_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,EE_IDVU_TER_BO_COAL-HOTWTR                                            
FIN_IDVU_RES_BO_COAL-HOTWTR                                                                                                    ,FIN_IDVU_TER_BO_COAL-HOTWTR                                           
FR_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,FR_IDVU_TER_BO_COAL-HOTWTR                                            
LT_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,LT_IDVU_TER_BO_COAL-HOTWTR                                            
LV_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,LV_IDVU_TER_BO_COAL-HOTWTR                                            
NL_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,NL_IDVU_TER_BO_COAL-HOTWTR                                            
PL_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,PL_IDVU_TER_BO_COAL-HOTWTR                                            
UK_IDVU_RES_BO_COAL-HOTWTR                                                                                                     ,UK_IDVU_TER_BO_COAL-HOTWTR                                            
)                                                                                                                                                                                                     
*Oil boilers                                                                                                                                                                                          
(GNR_BO_LIGHTOIL_E-92_SS_Y-2020                                                                                                                                                                       
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
).(                                                                                                                                                                                                   
BE_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,BE_IDVU_TER_BO_OIL-HOTWTR                                             
DE4-E_IDVU_RES_BO_OIL-HOTWTR                                                                                                   ,DE4-E_IDVU_TER_BO_OIL-HOTWTR                                          
DE4-N_IDVU_RES_BO_OIL-HOTWTR                                                                                                   ,DE4-N_IDVU_TER_BO_OIL-HOTWTR                                          
DE4-S_IDVU_RES_BO_OIL-HOTWTR                                                                                                   ,DE4-S_IDVU_TER_BO_OIL-HOTWTR                                          
DE4-W_IDVU_RES_BO_OIL-HOTWTR                                                                                                   ,DE4-W_IDVU_TER_BO_OIL-HOTWTR                                          
DK1_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,DK1_IDVU_TER_BO_OIL-HOTWTR                                            
DK2_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,DK2_IDVU_TER_BO_OIL-HOTWTR                                            
EE_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,EE_IDVU_TER_BO_OIL-HOTWTR                                             
FIN_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,FIN_IDVU_TER_BO_OIL-HOTWTR                                            
FR_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,FR_IDVU_TER_BO_OIL-HOTWTR                                             
LT_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,LT_IDVU_TER_BO_OIL-HOTWTR                                             
LV_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,LV_IDVU_TER_BO_OIL-HOTWTR                                             
NL_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,NL_IDVU_TER_BO_OIL-HOTWTR                                             
NO1_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,NO1_IDVU_TER_BO_OIL-HOTWTR                                            
NO2_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,NO2_IDVU_TER_BO_OIL-HOTWTR                                            
NO3_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,NO3_IDVU_TER_BO_OIL-HOTWTR                                            
NO4_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,NO4_IDVU_TER_BO_OIL-HOTWTR                                            
NO5_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,NO5_IDVU_TER_BO_OIL-HOTWTR                                            
PL_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,PL_IDVU_TER_BO_OIL-HOTWTR                                             
SE1_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,SE1_IDVU_TER_BO_OIL-HOTWTR                                            
SE2_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,SE2_IDVU_TER_BO_OIL-HOTWTR                                            
SE3_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,SE3_IDVU_TER_BO_OIL-HOTWTR                                            
SE4_IDVU_RES_BO_OIL-HOTWTR                                                                                                     ,SE4_IDVU_TER_BO_OIL-HOTWTR                                            
UK_IDVU_RES_BO_OIL-HOTWTR                                                                                                      ,UK_IDVU_TER_BO_OIL-HOTWTR                                             
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*Biomass boilers                                                                                                                                                                                      
(                                                                                                                                                                                                     
GNR_BO_WOODPEL_E-78_SS-10-KW-FEED_Y-2020                                                                                                                                                              
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2030                                                                                                                                                               
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2040                                                                                                                                                               
GNR_BO_WOODPEL_E-85_SS-8-KW-FEED_Y-2050                                                                                                                                                               
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
).(                                                                                                                                                                                                   
BE_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,BE_IDVU_TER_BO_BIO-HOTWTR                                             
DE4-E_IDVU_RES_BO_BIO-HOTWTR                                                                                                   ,DE4-E_IDVU_TER_BO_BIO-HOTWTR                                          
DE4-N_IDVU_RES_BO_BIO-HOTWTR                                                                                                   ,DE4-N_IDVU_TER_BO_BIO-HOTWTR                                          
DE4-S_IDVU_RES_BO_BIO-HOTWTR                                                                                                   ,DE4-S_IDVU_TER_BO_BIO-HOTWTR                                          
DE4-W_IDVU_RES_BO_BIO-HOTWTR                                                                                                   ,DE4-W_IDVU_TER_BO_BIO-HOTWTR                                          
DK1_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,DK1_IDVU_TER_BO_BIO-HOTWTR                                            
DK2_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,DK2_IDVU_TER_BO_BIO-HOTWTR                                            
EE_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,EE_IDVU_TER_BO_BIO-HOTWTR                                             
FIN_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,FIN_IDVU_TER_BO_BIO-HOTWTR                                            
FR_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,FR_IDVU_TER_BO_BIO-HOTWTR                                             
LT_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,LT_IDVU_TER_BO_BIO-HOTWTR                                             
LV_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,LV_IDVU_TER_BO_BIO-HOTWTR                                             
NL_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,NL_IDVU_TER_BO_BIO-HOTWTR                                             
NO1_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,NO1_IDVU_TER_BO_BIO-HOTWTR                                            
NO2_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,NO2_IDVU_TER_BO_BIO-HOTWTR                                            
NO3_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,NO3_IDVU_TER_BO_BIO-HOTWTR                                            
NO4_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,NO4_IDVU_TER_BO_BIO-HOTWTR                                            
NO5_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,NO5_IDVU_TER_BO_BIO-HOTWTR                                            
PL_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,PL_IDVU_TER_BO_BIO-HOTWTR                                             
SE1_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,SE1_IDVU_TER_BO_BIO-HOTWTR                                            
SE2_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,SE2_IDVU_TER_BO_BIO-HOTWTR                                            
SE3_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,SE3_IDVU_TER_BO_BIO-HOTWTR                                            
SE4_IDVU_RES_BO_BIO-HOTWTR                                                                                                     ,SE4_IDVU_TER_BO_BIO-HOTWTR                                            
UK_IDVU_RES_BO_BIO-HOTWTR                                                                                                      ,UK_IDVU_TER_BO_BIO-HOTWTR                                             
                                                                                                                                                                                                      
SE1_IDVU_RES_BO_BIO_WOODSTOVE-HOTWTR                                                                                           ,SE1_IDVU_TER_BO_BIO_WOODSTOVE-HOTWTR                                  
SE2_IDVU_RES_BO_BIO_WOODSTOVE-HOTWTR                                                                                           ,SE2_IDVU_TER_BO_BIO_WOODSTOVE-HOTWTR                                  
SE3_IDVU_RES_BO_BIO_WOODSTOVE-HOTWTR                                                                                           ,SE3_IDVU_TER_BO_BIO_WOODSTOVE-HOTWTR                                  
SE4_IDVU_RES_BO_BIO_WOODSTOVE-HOTWTR                                                                                           ,SE4_IDVU_TER_BO_BIO_WOODSTOVE-HOTWTR                                  
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*Wood stoves                                                                                                                                                                                          
*(GNR_BO_WOOD_E-65_SS-6-KW                                                                                                                                                                            
*GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                  
*).(                                                                                                                                                                                                  
*SE1_IDVU_RES_BO_BIO_WOODSTOVE-SPACEHEAT                                                                                       ,SE1_IDVU_TER_BO_BIO_WOODSTOVE-SPACEHEAT                               
*SE2_IDVU_RES_BO_BIO_WOODSTOVE-SPACEHEAT                                                                                       ,SE2_IDVU_TER_BO_BIO_WOODSTOVE-SPACEHEAT                               
*SE3_IDVU_RES_BO_BIO_WOODSTOVE-SPACEHEAT                                                                                       ,SE3_IDVU_TER_BO_BIO_WOODSTOVE-SPACEHEAT                               
*SE4_IDVU_RES_BO_BIO_WOODSTOVE-SPACEHEAT                                                                                       ,SE4_IDVU_TER_BO_BIO_WOODSTOVE-SPACEHEAT                               
*)                                                                                                                                                                                                    
                                                                                                                                                                                                      
*Gas boilers                                                                                                                                                                                          
(                                                                                                                                                                                                     
GNR_BO_NGAS_E-95_SS-10-KW_Y-2020                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2030                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2040                                                                                                                                                                      
GNR_BO_NGAS_E-97_SS-10-KW_Y-2050                                                                                                                                                                      
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
).(                                                                                                                                                                                                   
BE_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,BE_IDVU_TER_BO_GAS-HOTWTR                                             
DE4-E_IDVU_RES_BO_GAS-HOTWTR                                                                                                   ,DE4-E_IDVU_TER_BO_GAS-HOTWTR                                          
DE4-N_IDVU_RES_BO_GAS-HOTWTR                                                                                                   ,DE4-N_IDVU_TER_BO_GAS-HOTWTR                                          
DE4-S_IDVU_RES_BO_GAS-HOTWTR                                                                                                   ,DE4-S_IDVU_TER_BO_GAS-HOTWTR                                          
DE4-W_IDVU_RES_BO_GAS-HOTWTR                                                                                                   ,DE4-W_IDVU_TER_BO_GAS-HOTWTR                                          
DK1_IDVU_RES_BO_GAS-HOTWTR                                                                                                     ,DK1_IDVU_TER_BO_GAS-HOTWTR                                            
DK2_IDVU_RES_BO_GAS-HOTWTR                                                                                                     ,DK2_IDVU_TER_BO_GAS-HOTWTR                                            
EE_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,EE_IDVU_TER_BO_GAS-HOTWTR                                             
FIN_IDVU_RES_BO_GAS-HOTWTR                                                                                                     ,FIN_IDVU_TER_BO_GAS-HOTWTR                                            
FR_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,FR_IDVU_TER_BO_GAS-HOTWTR                                             
LT_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,LT_IDVU_TER_BO_GAS-HOTWTR                                             
LV_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,LV_IDVU_TER_BO_GAS-HOTWTR                                             
NL_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,NL_IDVU_TER_BO_GAS-HOTWTR                                             
NO2_IDVU_RES_BO_GAS-HOTWTR                                                                                                     ,NO2_IDVU_TER_BO_GAS-HOTWTR                                            
PL_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,PL_IDVU_TER_BO_GAS-HOTWTR                                             
SE4_IDVU_RES_BO_GAS-HOTWTR                                                                                                     ,SE4_IDVU_TER_BO_GAS-HOTWTR                                            
UK_IDVU_RES_BO_GAS-HOTWTR                                                                                                      ,UK_IDVU_TER_BO_GAS-HOTWTR                                             
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*Electric heating                                                                                                                                                                                     
(                                                                                                                                                                                                     
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2020                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2030                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2040                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2050                                                                                                                                                                 
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010).(                                                                                                                                                                
BE_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,BE_IDVU_TER_BO_EL-HOTWTR                                              
DE4-E_IDVU_RES_BO_EL-HOTWTR                                                                                                    ,DE4-E_IDVU_TER_BO_EL-HOTWTR                                           
DE4-N_IDVU_RES_BO_EL-HOTWTR                                                                                                    ,DE4-N_IDVU_TER_BO_EL-HOTWTR                                           
DE4-S_IDVU_RES_BO_EL-HOTWTR                                                                                                    ,DE4-S_IDVU_TER_BO_EL-HOTWTR                                           
DE4-W_IDVU_RES_BO_EL-HOTWTR                                                                                                    ,DE4-W_IDVU_TER_BO_EL-HOTWTR                                           
DK1_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,DK1_IDVU_TER_BO_EL-HOTWTR                                             
DK2_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,DK2_IDVU_TER_BO_EL-HOTWTR                                             
EE_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,EE_IDVU_TER_BO_EL-HOTWTR                                              
FIN_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,FIN_IDVU_TER_BO_EL-HOTWTR                                             
FR_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,FR_IDVU_TER_BO_EL-HOTWTR                                              
LT_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,LT_IDVU_TER_BO_EL-HOTWTR                                              
LV_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,LV_IDVU_TER_BO_EL-HOTWTR                                              
NL_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,NL_IDVU_TER_BO_EL-HOTWTR                                              
NO1_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,NO1_IDVU_TER_BO_EL-HOTWTR                                             
NO2_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,NO2_IDVU_TER_BO_EL-HOTWTR                                             
NO3_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,NO3_IDVU_TER_BO_EL-HOTWTR                                             
NO4_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,NO4_IDVU_TER_BO_EL-HOTWTR                                             
NO5_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,NO5_IDVU_TER_BO_EL-HOTWTR                                             
PL_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,PL_IDVU_TER_BO_EL-HOTWTR                                              
SE1_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,SE1_IDVU_TER_BO_EL-HOTWTR                                             
SE2_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,SE2_IDVU_TER_BO_EL-HOTWTR                                             
SE3_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,SE3_IDVU_TER_BO_EL-HOTWTR                                             
SE4_IDVU_RES_BO_EL-HOTWTR                                                                                                      ,SE4_IDVU_TER_BO_EL-HOTWTR                                             
UK_IDVU_RES_BO_EL-HOTWTR                                                                                                       ,UK_IDVU_TER_BO_EL-HOTWTR                                              
                                                                                                                                                                                                      
NO1_IDVU_RES_BO_EL_HPA2A-HOTWTR                                                                                                ,NO1_IDVU_TER_BO_EL_HPA2A-HOTWTR                                       
NO2_IDVU_RES_BO_EL_HPA2A-HOTWTR                                                                                                ,NO2_IDVU_TER_BO_EL_HPA2A-HOTWTR                                       
NO3_IDVU_RES_BO_EL_HPA2A-HOTWTR                                                                                                ,NO3_IDVU_TER_BO_EL_HPA2A-HOTWTR                                       
NO4_IDVU_RES_BO_EL_HPA2A-HOTWTR                                                                                                ,NO4_IDVU_TER_BO_EL_HPA2A-HOTWTR                                       
NO5_IDVU_RES_BO_EL_HPA2A-HOTWTR                                                                                                ,NO5_IDVU_TER_BO_EL_HPA2A-HOTWTR                                       
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*Air-to-air heat pumps                                                                                                                                                                                
(                                                                                                                                                                                                     
GNR_HP_ELEC_AIR-AIR_COP-490_SS-3-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-340_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-350_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-360_SS-4-KW_Y-2050                                                                                                                                                            
).(                                                                                                                                                                                                   
NO1_IDVU_RES_BO_EL_HPA2A-SPACEHEAT                                                                                             ,NO1_IDVU_TER_BO_EL_HPA2A-SPACEHEAT                                    
NO2_IDVU_RES_BO_EL_HPA2A-SPACEHEAT                                                                                             ,NO2_IDVU_TER_BO_EL_HPA2A-SPACEHEAT                                    
NO3_IDVU_RES_BO_EL_HPA2A-SPACEHEAT                                                                                             ,NO3_IDVU_TER_BO_EL_HPA2A-SPACEHEAT                                    
NO4_IDVU_RES_BO_EL_HPA2A-SPACEHEAT                                                                                             ,NO4_IDVU_TER_BO_EL_HPA2A-SPACEHEAT                                    
NO5_IDVU_RES_BO_EL_HPA2A-SPACEHEAT                                                                                             ,NO5_IDVU_TER_BO_EL_HPA2A-SPACEHEAT                                    
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*Air-to-water heat pumps                                                                                                                                                                              
(                                                                                                                                                                                                     
GNR_HP_ELEC_AIR-WTR_COP-335_SS-4-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-365_SS-4-KW_Y-2050                                                                                                                                                            
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010).(                                                                                                                                                                
DE4-E_IDVU_RES_HP_A2W-HOTWTR                                                                                                   ,DE4-E_IDVU_TER_HP_A2W-HOTWTR                                          
DE4-N_IDVU_RES_HP_A2W-HOTWTR                                                                                                   ,DE4-N_IDVU_TER_HP_A2W-HOTWTR                                          
DE4-S_IDVU_RES_HP_A2W-HOTWTR                                                                                                   ,DE4-S_IDVU_TER_HP_A2W-HOTWTR                                          
DE4-W_IDVU_RES_HP_A2W-HOTWTR                                                                                                   ,DE4-W_IDVU_TER_HP_A2W-HOTWTR                                          
DK1_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,DK1_IDVU_TER_HP_A2W-HOTWTR                                            
DK2_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,DK2_IDVU_TER_HP_A2W-HOTWTR                                            
FIN_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,FIN_IDVU_TER_HP_A2W-HOTWTR                                            
FR_IDVU_RES_HP_A2W-HOTWTR                                                                                                      ,FR_IDVU_TER_HP_A2W-HOTWTR                                             
NO1_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,NO1_IDVU_TER_HP_A2W-HOTWTR                                            
NO2_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,NO2_IDVU_TER_HP_A2W-HOTWTR                                            
NO3_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,NO3_IDVU_TER_HP_A2W-HOTWTR                                            
NO4_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,NO4_IDVU_TER_HP_A2W-HOTWTR                                            
NO5_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,NO5_IDVU_TER_HP_A2W-HOTWTR                                            
PL_IDVU_RES_HP_A2W-HOTWTR                                                                                                      ,PL_IDVU_TER_HP_A2W-HOTWTR                                             
SE1_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,SE1_IDVU_TER_HP_A2W-HOTWTR                                            
SE2_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,SE2_IDVU_TER_HP_A2W-HOTWTR                                            
SE3_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,SE3_IDVU_TER_HP_A2W-HOTWTR                                            
SE4_IDVU_RES_HP_A2W-HOTWTR                                                                                                     ,SE4_IDVU_TER_HP_A2W-HOTWTR                                            
UK_IDVU_RES_HP_A2W-HOTWTR                                                                                                      ,UK_IDVU_TER_HP_A2W-HOTWTR                                             
)                                                                                                                                                                                                     
/;                                                                                                                                                                                                    
$label NO_INDIVUSERS_AGKN                                                                                                                                                                             
                                                                                                                                                                                                      
AGKN(AAA,G)=YES$(ALLOWEDINV_INDIVUSERS(AAA,G) OR AGKN(AAA,G)                                                                                                                                          
$ifi %GROUP_DEMAND_SHIFT%==yes OR INDIV_AGKN_GROUP(G,AAA)                                                                                                                                             
);                                                                                                                                                                                                    
