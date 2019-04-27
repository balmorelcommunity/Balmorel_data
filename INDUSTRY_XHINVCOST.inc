PARAMETER XHINVCOST(YYY,IAAAE,IAAAI)  "Investment cost in new heat transmission capacity (Money/MW)"                                                     
/                                                                                                                                                        
2020                                                                                                 .    BE_A              .    BE_IND-LT-NODH    220000
2020                                                                                                 .    BE_IND-LT-NODH    .    BE_A              220000
2020                                                                                                 .    DE4-E_A           .    DE4-E_IND-LT-NODH 220000
2020                                                                                                 .    DE4-E_IND-LT-NODH .    DE4-E_A           220000
2020                                                                                                 .    DE4-N_A           .    DE4-N_IND-LT-NODH 220000
2020                                                                                                 .    DE4-N_IND-LT-NODH .    DE4-N_A           220000
2020                                                                                                 .    DE4-S_A           .    DE4-S_IND-LT-NODH 220000
2020                                                                                                 .    DE4-S_IND-LT-NODH .    DE4-S_A           220000
2020                                                                                                 .    DE4-W_A           .    DE4-W_IND-LT-NODH 220000
2020                                                                                                 .    DE4-W_IND-LT-NODH .    DE4-W_A           220000
2020                                                                                                 .    DK1_Large         .    DK1_IND-LT-NODH   220000
2020                                                                                                 .    DK1_IND-LT-NODH   .    DK1_Large         220000
2020                                                                                                 .    DK2_Large         .    DK2_IND-LT-NODH   220000
2020                                                                                                 .    DK2_IND-LT-NODH   .    DK2_Large         220000
2020                                                                                                 .    EE_Tallinn        .    EE_IND-LT-NODH    220000
2020                                                                                                 .    EE_IND-LT-NODH    .    EE_Tallinn        220000
2020                                                                                                 .    FI_large          .    FIN_IND-LT-NODH   220000
2020                                                                                                 .    FIN_IND-LT-NODH   .    FI_large          220000
2020                                                                                                 .    FR_A              .    FR_IND-LT-NODH    220000
2020                                                                                                 .    FR_IND-LT-NODH    .    FR_A              220000
2020                                                                                                 .    LT_Other_DH       .    LT_IND-LT-NODH    220000
2020                                                                                                 .    LT_IND-LT-NODH    .    LT_Other_DH       220000
2020                                                                                                 .    LV_RigaR          .    LV_IND-LT-NODH    220000
2020                                                                                                 .    LV_IND-LT-NODH    .    LV_RigaR          220000
2020                                                                                                 .    NL_A              .    NL_IND-LT-NODH    220000
2020                                                                                                 .    NL_IND-LT-NODH    .    NL_A              220000
2020                                                                                                 .    NO1_A2            .    NO1_IND-LT-NODH   220000
2020                                                                                                 .    NO1_IND-LT-NODH   .    NO1_A2            220000
2020                                                                                                 .    NO2_A2            .    NO2_IND-LT-NODH   220000
2020                                                                                                 .    NO2_IND-LT-NODH   .    NO2_A2            220000
2020                                                                                                 .    NO3_A2            .    NO3_IND-LT-NODH   220000
2020                                                                                                 .    NO3_IND-LT-NODH   .    NO3_A2            220000
2020                                                                                                 .    NO4_A2            .    NO4_IND-LT-NODH   220000
2020                                                                                                 .    NO4_IND-LT-NODH   .    NO4_A2            220000
2020                                                                                                 .    NO5_A2            .    NO5_IND-LT-NODH   220000
2020                                                                                                 .    NO5_IND-LT-NODH   .    NO5_A2            220000
2020                                                                                                 .    PL_A              .    PL_IND-LT-NODH    220000
2020                                                                                                 .    PL_IND-LT-NODH    .    PL_A              220000
2020                                                                                                 .    SE1_medium        .    SE1_IND-LT-NODH   220000
2020                                                                                                 .    SE1_IND-LT-NODH   .    SE1_medium        220000
2020                                                                                                 .    SE2_medium        .    SE2_IND-LT-NODH   220000
2020                                                                                                 .    SE2_IND-LT-NODH   .    SE2_medium        220000
2020                                                                                                 .    SE3_large         .    SE3_IND-LT-NODH   220000
2020                                                                                                 .    SE3_IND-LT-NODH   .    SE3_large         220000
2020                                                                                                 .    SE4_large         .    SE4_IND-LT-NODH   220000
2020                                                                                                 .    SE4_IND-LT-NODH   .    SE4_large         220000
2020                                                                                                 .    UK_A              .    UK_IND-LT-NODH    220000
2020                                                                                                 .    UK_IND-LT-NODH    .    UK_A              220000
                                                                                                                                                         
/;                                                                                                                                                       
XHKFX(YYY,IAAAE,IAAAI)$(YVALUE(YYY) ge 2016) = XHKFX('2016',IAAAE,IAAAI);                                                                                
