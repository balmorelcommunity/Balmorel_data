SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                             
*This is stablished according to economy of scale, where large plants can only be located when heat demand is high                                             
                                                                                                                                                               
/                                                                                                                                                              
***CO2                                                                                                                                                         
2020                                                                                                               .    DK1_A .    CO2_DAC_20                  
2025                                                                                                               .    DK1_A .    CO2_DAC_25                  
2030                                                                                                               .    DK1_A .    CO2_DAC_30                  
2035                                                                                                               .    DK1_A .    CO2_DAC_35                  
2040                                                                                                               .    DK1_A .    CO2_DAC_40                  
2045                                                                                                               .    DK1_A .    CO2_DAC_45                  
2050                                                                                                               .    DK1_A .    CO2_DAC_50                  
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    CO2_Accumulator             
2025                                                                                                               .    DK1_A .    CO2_Accumulator             
2030                                                                                                               .    DK1_A .    CO2_Accumulator             
2035                                                                                                               .    DK1_A .    CO2_Accumulator             
2040                                                                                                               .    DK1_A .    CO2_Accumulator             
2045                                                                                                               .    DK1_A .    CO2_Accumulator             
2050                                                                                                               .    DK1_A .    CO2_Accumulator             
* OBS FF                                                                                                                                                       
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                         
2020                                                                                                               .    DK1_A .    CO2_Seq_On_20               
2025                                                                                                               .    DK1_A .    CO2_Seq_On_25               
2030                                                                                                               .    DK1_A .    CO2_Seq_On_30               
2035                                                                                                               .    DK1_A .    CO2_Seq_On_35               
2040                                                                                                               .    DK1_A .    CO2_Seq_On_40               
2045                                                                                                               .    DK1_A .    CO2_Seq_On_45               
2050                                                                                                               .    DK1_A .    CO2_Seq_On_50               
                                                                                                                                                               
2020                                                                                                               .    DK1_A .    CO2_Seq_Off_20              
2025                                                                                                               .    DK1_A .    CO2_Seq_Off_25              
2030                                                                                                               .    DK1_A .    CO2_Seq_Off_30              
2035                                                                                                               .    DK1_A .    CO2_Seq_Off_35              
2040                                                                                                               .    DK1_A .    CO2_Seq_Off_40              
2045                                                                                                               .    DK1_A .    CO2_Seq_Off_45              
2050                                                                                                               .    DK1_A .    CO2_Seq_Off_50              
$label NO_CCS                                                                                                                                                  
                                                                                                                                                               
* OBS FF                                                                                                                                                       
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                                       
2030                                                                                                               .    DK1_A .    OCC_30                      
2035                                                                                                               .    DK1_A .    OCC_35                      
2040                                                                                                               .    DK1_A .    OCC_40                      
2045                                                                                                               .    DK1_A .    OCC_45                      
2050                                                                                                               .    DK1_A .    OCC_50                      
$label NO_OCC_MDO                                                                                                                                              
                                                                                                                                                               
                                                                                                                                                               
                                                                                                                                                               
*OBS FF                                                                                                                                                        
$ifi not %baloptgasbridge%==yes $goto NO_BIOGAS                                                                                                                
2020                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2025                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2030                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2035                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2040                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2045                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
2050                                                                                                               .    DK1_A .    Biogas_Grid_Sto             
                                                                                                                                                               
2020                                                                                                               .    DK1_A .    Manure_Tank_20              
2025                                                                                                               .    DK1_A .    Manure_Tank_25              
2030                                                                                                               .    DK1_A .    Manure_Tank_30              
2035                                                                                                               .    DK1_A .    Manure_Tank_35              
2040                                                                                                               .    DK1_A .    Manure_Tank_40              
2045                                                                                                               .    DK1_A .    Manure_Tank_45              
2050                                                                                                               .    DK1_A .    Manure_Tank_50              
                                                                                                                                                               
2020                                                                                                               .    DK1_A .    Straw_Tank_20               
2025                                                                                                               .    DK1_A .    Straw_Tank_25               
2030                                                                                                               .    DK1_A .    Straw_Tank_30               
2035                                                                                                               .    DK1_A .    Straw_Tank_35               
2040                                                                                                               .    DK1_A .    Straw_Tank_40               
2045                                                                                                               .    DK1_A .    Straw_Tank_45               
2050                                                                                                               .    DK1_A .    Straw_Tank_50               
                                                                                                                                                               
2020                                                                                                               .    DK1_A .    Methanation_20              
2025                                                                                                               .    DK1_A .    Methanation_25              
2030                                                                                                               .    DK1_A .    Methanation_30              
2035                                                                                                               .    DK1_A .    Methanation_35              
2040                                                                                                               .    DK1_A .    Methanation_40              
2045                                                                                                               .    DK1_A .    Methanation_45              
2050                                                                                                               .    DK1_A .    Methanation_50              
                                                                                                                                                               
2020                                                                                                               .    DK1_A .    Biogas_Upgrading_20         
2025                                                                                                               .    DK1_A .    Biogas_Upgrading_25         
2030                                                                                                               .    DK1_A .    Biogas_Upgrading_30         
2035                                                                                                               .    DK1_A .    Biogas_Upgrading_35         
2040                                                                                                               .    DK1_A .    Biogas_Upgrading_40         
2045                                                                                                               .    DK1_A .    Biogas_Upgrading_45         
2050                                                                                                               .    DK1_A .    Biogas_Upgrading_50         
                                                                                                                                                               
2025                                                                                                               .    DK1_A .    Pyrolysis_Straw_25          
2030                                                                                                               .    DK1_A .    Pyrolysis_Straw_30          
2035                                                                                                               .    DK1_A .    Pyrolysis_Straw_35          
2040                                                                                                               .    DK1_A .    Pyrolysis_Straw_40          
2045                                                                                                               .    DK1_A .    Pyrolysis_Straw_45          
2050                                                                                                               .    DK1_A .    Pyrolysis_Straw_50          
$label NO_BIOGAS                                                                                                                                               
                                                                                                                                                               
***TG                                                                                                                                                          
2020                                                                                                               .    DK1_A .    TG_20                       
2025                                                                                                               .    DK1_A .    TG_25                       
2030                                                                                                               .    DK1_A .    TG_30                       
2035                                                                                                               .    DK1_A .    TG_35                       
2040                                                                                                               .    DK1_A .    TG_40                       
2045                                                                                                               .    DK1_A .    TG_45                       
2050                                                                                                               .    DK1_A .    TG_50                       
***Methanol                                                                                                                                                    
2020                                                                                                               .    DK1_A .    Methanol_synthesis_TG_20    
2025                                                                                                               .    DK1_A .    Methanol_synthesis_TG_25    
2030                                                                                                               .    DK1_A .    Methanol_synthesis_TG_30    
2035                                                                                                               .    DK1_A .    Methanol_synthesis_TG_35    
2040                                                                                                               .    DK1_A .    Methanol_synthesis_TG_40    
2045                                                                                                               .    DK1_A .    Methanol_synthesis_TG_45    
2050                                                                                                               .    DK1_A .    Methanol_synthesis_TG_50    
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_20
2025                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_25
2030                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_30
2035                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_35
2040                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_40
2045                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_45
2050                                                                                                               .    DK1_A .    Methanol_synthesis_biogas_50
                                                                                                                                                               
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    EMethanol_synthesis_20      
2025                                                                                                               .    DK1_A .    EMethanol_synthesis_25      
2030                                                                                                               .    DK1_A .    EMethanol_synthesis_30      
2035                                                                                                               .    DK1_A .    EMethanol_synthesis_35      
2040                                                                                                               .    DK1_A .    EMethanol_synthesis_40      
2045                                                                                                               .    DK1_A .    EMethanol_synthesis_45      
2050                                                                                                               .    DK1_A .    EMethanol_synthesis_50      
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    EMethanol_Upgrade_20        
2025                                                                                                               .    DK1_A .    EMethanol_Upgrade_25        
2030                                                                                                               .    DK1_A .    EMethanol_Upgrade_30        
2035                                                                                                               .    DK1_A .    EMethanol_Upgrade_35        
2040                                                                                                               .    DK1_A .    EMethanol_Upgrade_40        
2045                                                                                                               .    DK1_A .    EMethanol_Upgrade_45        
2050                                                                                                               .    DK1_A .    EMethanol_Upgrade_50        
***Ammonia                                                                                                                                                     
2020                                                                                                               .    DK1_A .    Ammonia_Synthesis_20        
2025                                                                                                               .    DK1_A .    Ammonia_Synthesis_25        
2030                                                                                                               .    DK1_A .    Ammonia_Synthesis_30        
2035                                                                                                               .    DK1_A .    Ammonia_Synthesis_35        
2040                                                                                                               .    DK1_A .    Ammonia_Synthesis_40        
2045                                                                                                               .    DK1_A .    Ammonia_Synthesis_45        
2050                                                                                                               .    DK1_A .    Ammonia_Synthesis_50        
***Jet and oil products                                                                                                                                        
2020                                                                                                               .    DK1_A .    BioJet_20                   
2025                                                                                                               .    DK1_A .    BioJet_25                   
2030                                                                                                               .    DK1_A .    BioJet_30                   
2035                                                                                                               .    DK1_A .    BioJet_35                   
2040                                                                                                               .    DK1_A .    BioJet_40                   
2045                                                                                                               .    DK1_A .    BioJet_45                   
2050                                                                                                               .    DK1_A .    BioJet_50                   
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    BioJet_H2_20                
2025                                                                                                               .    DK1_A .    BioJet_H2_25                
2030                                                                                                               .    DK1_A .    BioJet_H2_30                
2035                                                                                                               .    DK1_A .    BioJet_H2_35                
2040                                                                                                               .    DK1_A .    BioJet_H2_40                
2045                                                                                                               .    DK1_A .    BioJet_H2_45                
2050                                                                                                               .    DK1_A .    BioJet_H2_50                
*                                                                                                                                                              
2020                                                                                                               .    DK1_A .    E_FT_20                     
2025                                                                                                               .    DK1_A .    E_FT_25                     
2030                                                                                                               .    DK1_A .    E_FT_30                     
2035                                                                                                               .    DK1_A .    E_FT_35                     
2040                                                                                                               .    DK1_A .    E_FT_40                     
2045                                                                                                               .    DK1_A .    E_FT_45                     
2050                                                                                                               .    DK1_A .    E_FT_50                     
                                                                                                                                                               
/                                                                                                                                                              
;                                                                                                                                                              
                                                                                                                                                               
APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'DK1_A',PROC);                                                                                          
