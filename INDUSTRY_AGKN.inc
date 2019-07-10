SET AGKN(AAA,GGG)   "Areas for possible location of new technologies";          
SET ALLOWEDINV1(AAA,G)                                                          
/                                                                               
*Group 9 - Industry Process Heat Low District Heating                           
(DK1_Large_PHL, DK2_Large_PHL).(                                                
GNR_BO_NGAS_E-82_PHL_Y-2020                                                     
GNR_BO_NGAS_E-82_PHL_Y-2030                                                     
GNR_BO_NGAS_E-82_PHL_Y-2040                                                     
GNR_BO_NGAS_E-82_PHL_Y-2050                                                     
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2020                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2030                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2040                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2050                                       
GNR_HP_ELEC_COP-160_PHL_Y-2020                                                  
GNR_HP_ELEC_COP-160_PHL_Y-2030                                                  
GNR_HP_ELEC_COP-160_PHL_Y-2040                                                  
GNR_HP_ELEC_COP-160_PHL_Y-2050                                                  
)                                                                               
                                                                                
*Group 10 - Industry Process Heat High District Heating                         
(DK1_Large_PHH, DK2_Large_PHH).(                                                
GNR_BO_NGAS_E-70_PHH_Y-2020                                                     
GNR_BO_NGAS_E-70_PHH_Y-2030                                                     
GNR_BO_NGAS_E-70_PHH_Y-2040                                                     
GNR_BO_NGAS_E-70_PHH_Y-2050                                                     
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2020                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2030                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2040                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2050                                       
GNR_HP_ELEC_COP-100_PHH_Y-2020                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2030                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2040                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2050                                                  
)                                                                               
                                                                                
*Group 11 - Industry Process Heat Low No District Heating                       
(DK1_NoDH_PHL, DK2_NoDH_PHL).(                                                  
GNR_BO_NGAS_E-82_PHL_Y-2020                                                     
GNR_BO_NGAS_E-82_PHL_Y-2030                                                     
GNR_BO_NGAS_E-82_PHL_Y-2040                                                     
GNR_BO_NGAS_E-82_PHL_Y-2050                                                     
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2020                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2030                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2040                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHL_Y-2050                                       
*GNR_HP_ELEC_COP-160_PHL_Y-2020                                                 
*GNR_HP_ELEC_COP-160_PHL_Y-2030                                                 
*GNR_HP_ELEC_COP-160_PHL_Y-2040                                                 
*GNR_HP_ELEC_COP-160_PHL_Y-2050                                                 
)                                                                               
                                                                                
*Group 12 - Industry Process Heat High No District Heating                      
(DK1_NoDH_PHH, DK2_NoDH_PHH).(                                                  
GNR_BO_NGAS_E-70_PHH_Y-2020                                                     
GNR_BO_NGAS_E-70_PHH_Y-2030                                                     
GNR_BO_NGAS_E-70_PHH_Y-2040                                                     
GNR_BO_NGAS_E-70_PHH_Y-2050                                                     
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2020                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2030                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2040                                       
GNR_BO_ELEC_E-99_LS-10-MW-FEED_PHH_Y-2050                                       
GNR_HP_ELEC_COP-100_PHH_Y-2020                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2030                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2040                                                  
GNR_HP_ELEC_COP-100_PHH_Y-2050                                                  
)                                                                               
/;                                                                              
                                                                                
AGKN(AAA,G)$ALLOWEDINV1(AAA,G)=YES;                                             
                                                                                
                                                                                
                                                                                
