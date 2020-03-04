PARAMETER XHKFX_DH(YYY,IAAAI,IAAAE) "Exogenous heat transmission capacity for individual users connected to district heating (MW) (parameter calculated for output processing only, NOT USED IN OPTIMIZATIONS)"
*Estimated based on the peak demand of heat linked to the area and a security factor of 25%
/
2016     .       DK2_Large       .       DK2_Large       3260.169702
2016     .       DK2_Medium      .       DK2_Medium      527.7630106
2016     .       DK2_MedSmall    .       DK2_MedSmall    209.617825
2016     .       DK2_Rural       .       DK2_Rural       613.2156012
2016     .       DK2_Small       .       DK2_Small       49.24800779
2016     .       DK1_Large       .       DK1_Large       3442.20086
2016     .       DK1_Medium      .       DK1_Medium      1253.896977
2016     .       DK1_MedSmall    .       DK1_MedSmall    594.639765
2016     .       DK1_Rural       .       DK1_Rural       1691.223475
2016     .       DK1_Small       .       DK1_Small       146.2191317
2016     .       FI_large        .       FI_large        2997.786183
2016     .       FI_large_gas    .       FI_large_gas    9437.963847
2016     .       FI_medium       .       FI_medium       4262.542657
2016     .       FI_medium_gas   .       FI_medium_gas   2513.090857
2016     .       FI_small        .       FI_small        1917.963889
2016     .       FI_small_gas    .       FI_small_gas    390.9926265
2016     .       NO1_A2          .       NO1_A2          742.3064693
2016     .       NO1_A3          .       NO1_A3          929.1098425
2016     .       NO2_A2          .       NO2_A2          243.2422315
2016     .       NO3_A2          .       NO3_A2          119.9586684
2016     .       NO3_A3          .       NO3_A3          346.089442
2016     .       NO4_A2          .       NO4_A2          124.9954175
2016     .       NO5_A2          .       NO5_A2          170.6078003
2016     .       SE1_medium      .       SE1_medium      1322.786027
2016     .       SE1_small       .       SE1_small       276.7984494
2016     .       SE2_medium      .       SE2_medium      1992.049844
2016     .       SE2_small       .       SE2_small       379.6782659
2016     .       SE3_large       .       SE3_large       9684.228285
2016     .       SE3_medium      .       SE3_medium      9532.783072
2016     .       SE3_small       .       SE3_small       2436.971453
2016     .       SE4_large       .       SE4_large       1142.716616
2016     .       SE4_medium      .       SE4_medium      3341.515749
2016     .       SE4_small       .       SE4_small       676.8930148
2016     .       DE4-N_A         .       DE4-N_A         4140.925242
2016     .       DE4-W_A         .       DE4-W_A         11887.83908
2016     .       DE4-E_A         .       DE4-E_A         12844.92453
2016     .       DE4-S_A         .       DE4-S_A         8378.525782
2016     .       PL_A            .       PL_A            31520.34283
2016     .       UK_A            .       UK_A            1138.835004
2016     .       EE_Kohtla_Jarve .       EE_Kohtla_Jarve 172.2263587
2016     .       EE_Narva        .       EE_Narva        255.1870434
2016     .       EE_Parnu        .       EE_Parnu        101.7237564
2016     .       EE_Rural        .       EE_Rural        226.1341466
2016     .       EE_Sillamae     .       EE_Sillamae     106.6426264
2016     .       EE_Tallinn      .       EE_Tallinn      1044.627323
2016     .       EE_Tartu        .       EE_Tartu        266.7275683
2016     .       EE_Urban        .       EE_Urban        196.9556135
2016     .       LV_RigaR        .       LV_RigaR        3180.258504
2016     .       LV_Other_DH     .       LV_Other_DH     3070.654524
2016     .       LT_KauU         .       LT_KauU         872.0346297
2016     .       LT_KlaU         .       LT_KlaU         592.1582747
2016     .       LT_Panevezys    .       LT_Panevezys    261.1633221
2016     .       LT_VilU         .       LT_VilU         1704.344741
2016     .       LT_SiaU         .       LT_SiaU         279.0506701
2016     .       LT_Other_DH     .       LT_Other_DH     3445.852787
/;

XHKFX_DH(Y,IAI,IAE)$XHKFX_DH('2016',IAI,IAE)=XHKFX_DH('2016',IAI,IAE);