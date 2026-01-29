SET  PROCKAPDATA(YYY,PROC,FLOW,IFLOWINOUT)    "Process data: capacity relative to FLOW and in/out direction ()"                                                                                   
/                                                                                                                                                                                                 
                                                                                                                                                                                                  
                                                                                                                                                                                                  
                                                                                                                                                                                                  
***CO2                                                                                                                                                                                            
2020                                                                                                            .    CO2_DAC_20               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_25               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_30               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_35               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_40               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_45               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_DAC_50               .    CO2_FLOW_DAC            .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Accumulator          .    CO2_FLOW_STO            .    IFLOWINOUT_IN     
***OBS FF                                                                                                                                                                                         
2020                                                                                                            .    CO2_Pipeline             .    CO2_FLOW_DAC            .    IFLOWINOUT_SYM_INV
2020                                                                                                            .    CO2_Pipeline             .    CO2_FLOW_BIOGEN         .    IFLOWINOUT_SYM_INV
2020                                                                                                            .    CO2_Pipeline             .    CO2_FLOW_FOSSIL         .    IFLOWINOUT_SYM_INV
2020                                                                                                            .    CO2_Pipeline             .    CO2_FLOW_BIOGAS         .    IFLOWINOUT_SYM_INV
                                                                                                                                                                                                  
$ifi not %optiOCC%==yes $goto NO_OCC_MDO                                                                                                                                                          
2020                                                                                                            .    OCC_30                   .    OCC_FLOW                .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_35                   .    OCC_FLOW                .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_40                   .    OCC_FLOW                .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_45                   .    OCC_FLOW                .    IFLOWINOUT_IN     
2020                                                                                                            .    OCC_50                   .    OCC_FLOW                .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    CO2_Pipeline             .    CO2_FLOW_OCC            .    IFLOWINOUT_SYM_INV
                                                                                                                                                                                                  
$label NO_OCC_MDO                                                                                                                                                                                 
                                                                                                                                                                                                  
                                                                                                                                                                                                  
*------------------Sequestration------------------(OBS)                                                                                                                                           
2020                                                                                                            .    CO2_Seq_On_20            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_25            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_30            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_35            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_40            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_45            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_On_50            .    CO2_FLOW_SEQ_ON_SUM     .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    CO2_Seq_Off_20           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_25           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_30           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_35           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_40           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_45           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
2020                                                                                                            .    CO2_Seq_Off_50           .    CO2_FLOW_SEQ_OFF_SUM    .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Biogas supply                                                                                                                                                                                  
2020                                                                                                            .    Manure_Tank_20           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_25           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_30           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_35           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_40           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_45           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
2020                                                                                                            .    Manure_Tank_50           .    BIOMASS_FLOW_WET        .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    Straw_Tank_20            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_25            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_30            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_35            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_40            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_45            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
2020                                                                                                            .    Straw_Tank_50            .    BIOMASS_FLOW_DRY_BIOGAS .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Biogas storage                                                                                                                                                                                 
2020                                                                                                            .    Biogas_Grid_Sto          .    BIOGAS_FLOW_STO         .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Biogas technologies                                                                                                                                                                            
2020                                                                                                            .    Methanation_20           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_25           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_30           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_35           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_40           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_45           .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Methanation_50           .    SNG_FLOW                .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    Biogas_Upgrading_20      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_25      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_30      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_35      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_40      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_45      .    SNG_FLOW                .    IFLOWINOUT_OUT    
2020                                                                                                            .    Biogas_Upgrading_50      .    SNG_FLOW                .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Pyrolysis Straw                                                                                                                                                                                
2020                                                                                                            .    Pyrolysis_Straw_25       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_30       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_35       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_40       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_45       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
2020                                                                                                            .    Pyrolysis_Straw_50       .    BIOMASS_FLOW_DRY_PY     .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Hydrogen                                                                                                                                                                                       
2020                                                                                                            .    Hydrogen_STO_Large_20    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_25    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_30    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_35    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_40    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_45    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Large_50    .    HYDROGEN_FLOW_ST_Large  .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    Hydrogen_STO_Small_20    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_25    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_30    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_35    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_40    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_45    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
2020                                                                                                            .    Hydrogen_STO_Small_50    .    HYDROGEN_FLOW_ST_Small  .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***TG                                                                                                                                                                                             
2020                                                                                                            .    TG_20                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_25                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_30                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_35                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_40                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_45                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
2020                                                                                                            .    TG_50                    .    BIOMASS_TG              .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
***Methanol                                                                                                                                                                                       
2020                                                                                                            .    Methanol_synthesis_TG_20 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_25 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_30 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_35 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_40 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_45 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
2020                                                                                                            .    Methanol_synthesis_TG_50 .    BIO_ME_FLOW             .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    EMethanol_synthesis_20   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_25   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_30   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_35   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_40   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_45   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_synthesis_50   .    EMETHANOLFLOW           .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
2020                                                                                                            .    EMethanol_Upgrade_20     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_25     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_30     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_35     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_40     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_45     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
2020                                                                                                            .    EMethanol_Upgrade_50     .    EME_DROPIN_FLOW         .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Ammonia                                                                                                                                                                                        
2020                                                                                                            .    Ammonia_Synthesis_20     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_25     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_30     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_35     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_40     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_45     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
2020                                                                                                            .    Ammonia_Synthesis_50     .    AMMONIA_FLOW            .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
***Jet and oil products                                                                                                                                                                           
2020                                                                                                            .    BioJet_20                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_25                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_30                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_35                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_40                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_45                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_50                .    BIOMASS_BJ              .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    BioJet_H2_20             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_25             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_30             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_35             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_40             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_45             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
2020                                                                                                            .    BioJet_H2_50             .    BIOMASS_BJ_H2           .    IFLOWINOUT_IN     
                                                                                                                                                                                                  
2020                                                                                                            .    E_FT_20                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_25                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_30                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_35                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_40                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_45                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
2020                                                                                                            .    E_FT_50                  .    E_FT_SUM_FLOW           .    IFLOWINOUT_OUT    
                                                                                                                                                                                                  
/;                                                                                                                                                                                                
                                                                                                                                                                                                  
PROCKAPDATA(Y,PROC,FLOW,IFLOWINOUT)=PROCKAPDATA('2020',PROC,FLOW,IFLOWINOUT);                                                                                                                     
