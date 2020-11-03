SET INVDATASET_INDIVUSERS                                                                                                                                                                                             
/                                                                                                                                                                                                                     
                                                                                                                                                                                                                      
IDVU-HOTWTR                                                                                                                                    'individual users, area with hot water demand'                         
IDVU-SPACEHEAT                                                                                                                                 'individual users, area with space heating demand'                     
                                                                                                                                                                                                                      
/;                                                                                                                                                                                                                    
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
*** TABLE to connect areas to regions, countries and other subsets                                                                                                                                                    
TABLE INVDATA_INDIVUSERS(AAA,INVDATASET_INDIVUSERS)                                                                                                                                                                   
                                                                                                                                               IDVU-HOTWTR                                        IDVU-SPACEHEAT      
BE_IDVU-HOTWTR                                                                                                                                 1                                                                      
DE4-E_IDVU-HOTWTR                                                                                                                              1                                                                      
DE4-N_IDVU-HOTWTR                                                                                                                              1                                                                      
DE4-S_IDVU-HOTWTR                                                                                                                              1                                                                      
DE4-W_IDVU-HOTWTR                                                                                                                              1                                                                      
DK1_IDVU-HOTWTR                                                                                                                                1                                                                      
DK2_IDVU-HOTWTR                                                                                                                                1                                                                      
EE_IDVU-HOTWTR                                                                                                                                 1                                                                      
FIN_IDVU-HOTWTR                                                                                                                                1                                                                      
FR_IDVU-HOTWTR                                                                                                                                 1                                                                      
LT_IDVU-HOTWTR                                                                                                                                 1                                                                      
LV_IDVU-HOTWTR                                                                                                                                 1                                                                      
NL_IDVU-HOTWTR                                                                                                                                 1                                                                      
NO1_IDVU-HOTWTR                                                                                                                                1                                                                      
NO2_IDVU-HOTWTR                                                                                                                                1                                                                      
NO3_IDVU-HOTWTR                                                                                                                                1                                                                      
NO4_IDVU-HOTWTR                                                                                                                                1                                                                      
NO5_IDVU-HOTWTR                                                                                                                                1                                                                      
PL_IDVU-HOTWTR                                                                                                                                 1                                                                      
SE1_IDVU-HOTWTR                                                                                                                                1                                                                      
SE2_IDVU-HOTWTR                                                                                                                                1                                                                      
SE3_IDVU-HOTWTR                                                                                                                                1                                                                      
SE4_IDVU-HOTWTR                                                                                                                                1                                                                      
UK_IDVU-HOTWTR                                                                                                                                 1                                                                      
                                                                                                                                                                                                                      
BE_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
DE4-E_IDVU-SPACEHEAT                                                                                                                                                                              1                   
DE4-N_IDVU-SPACEHEAT                                                                                                                                                                              1                   
DE4-S_IDVU-SPACEHEAT                                                                                                                                                                              1                   
DE4-W_IDVU-SPACEHEAT                                                                                                                                                                              1                   
DK1_IDVU-SPACEHEAT                                                                                                                                                                                1                   
DK2_IDVU-SPACEHEAT                                                                                                                                                                                1                   
EE_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
FIN_IDVU-SPACEHEAT                                                                                                                                                                                1                   
FR_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
LT_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
LV_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
NL_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
NO1_IDVU-SPACEHEAT                                                                                                                                                                                1                   
NO2_IDVU-SPACEHEAT                                                                                                                                                                                1                   
NO3_IDVU-SPACEHEAT                                                                                                                                                                                1                   
NO4_IDVU-SPACEHEAT                                                                                                                                                                                1                   
NO5_IDVU-SPACEHEAT                                                                                                                                                                                1                   
PL_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
SE1_IDVU-SPACEHEAT                                                                                                                                                                                1                   
SE2_IDVU-SPACEHEAT                                                                                                                                                                                1                   
SE3_IDVU-SPACEHEAT                                                                                                                                                                                1                   
SE4_IDVU-SPACEHEAT                                                                                                                                                                                1                   
UK_IDVU-SPACEHEAT                                                                                                                                                                                 1                   
                                                                                                                                                                                                                      
;                                                                                                                                                                                                                     
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
$ontext                                                                                                                                                                                                               
To avoid manual entry in each area the following catagories of areas are defined.                                                                                                                                     
Note that each area can belong to one group only                                                                                                                                                                      
1 - Areas with space heating                                                                                                                                                                                          
2 - Areas with water heating                                                                                                                                                                                          
                                                                                                                                                                                                                      
$offtext                                                                                                                                                                                                              
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
SET ALLOWEDINV_INDIVUSERS(AAA,GGG) "Area, technology where technolgy may be invested based on AGKN and implicit constraints "/                                                                                        
                                                                                                                                                                                                                      
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
                                                                                                                                                                                                                      
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-HOTWTR')=1)  and ALLOWEDINV_INDIVUSERS('DK1_IDVU-HOTWTR',G))         = yes ;                                                                              
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-SPACEHEAT')=1)  and ALLOWEDINV_INDIVUSERS('DK1_IDVU-SPACEHEAT',G))         = yes ;                                                                        
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
AGKN(AAA,G)=YES$(ALLOWEDINV_INDIVUSERS(AAA,G) OR AGKN(AAA,G));                                                                                                                                                        
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      