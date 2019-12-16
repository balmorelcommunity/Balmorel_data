TABLE SOSIBU2INDIC(YYY,PROC,FLOW,FLOWINDIC) "Coefficients for transformation of VSOURCE, VSINK and VBUFFER flows to FLOWINDIC values"


                                                                                                                                                                                              OPERATIONCOST GHGEMISSION_nonbio         GHGEMISSION_bio
*                                                                                                                                                                                             Cost (Money)  GHG emissions (ton CO2 eq)





2020                                                                                                                                  .    ResA                   .    ResProA                 90            0                          0
2020                                                                                                                                  .    ResB                   .    ResProB                 4            0                          0
2020                                                                                                                                  .    ResC                   .    ResSumC                 6            0                          0
2020                                                                                                                                  .    ResD                   .    ResProD                 90            0                          0


$ontext
*Mason - but I dont know why?

2020                                                                                                                                  .    AmmoniaBuffer_Exp      .    AMMONIA_FLOW_EXP       -10           0                          0
2020                                                                                                                                  .    HTLBuffer_Exp          .    HTLFLOW_EXP            -3            0                          0

2020                                                                                                                                  .    BioJetBuffer_Exp       .    BIOJETFLOW_EXP         -2.5          0                          0
2020                                                                                                                                  .    E_FT_JetBuffer_Exp     .    E_FT_JET_FLOW_EXP      -14.3         0                          0
2020                                                                                                                                  .    EME_JetBuffer_Exp      .    EME_JET_FLOW_EXP       -14.3         0                          0

2020                                                                                                                                  .    BioGasolineBuffer_Exp  .    BIOGASOLINEFLOW_EXP    -14.9         0                          0
2020                                                                                                                                  .    MethanolBuffer_Exp     .    METHANOLFLOW_EXP       -10           0                          0
2020                                                                                                                                  .    EthanolBuffer_Exp      .    ETHANOL_FLOW_EXP       -1.6          0                          0
2020                                                                                                                                  .    BiodieselBuffer_Exp    .    BIODIESELFLOW_EXP      -1.3          0                          0

2020                                                                                                                                  .    E_FT_DieselBuffer_Exp  .    E_FT_DIESEL_FLOW_EXP   -14.7         0                          0
2020                                                                                                                                  .    EME_GasolineBuffer_Exp .    EME_GASOLINE_FLOW_EXP  -14.9         0                          0
2020                                                                                                                                  .    EME_LPGBuffer_Exp      .    EME_LPG_FLOW_EXP       -16.1         0                          0
2020                                                                                                                                  .    EMethanolBuffer_Exp    .    EMETHANOLFLOW_EXP      -10           0                          0

$offtext



2020                                                                                                                                  .    NorthSeaGas            .    NATGAS_FLOW             15            0                          0




2020                                                                                                                                  .    CO2_Source_PH          .    CO2_SOURCE_FLOW_PH     EPS           0                          0
2020                                                                                                                                  .    CO2_Source_IND         .    CO2_SOURCE_FLOW_IND    EPS           0                          0
2020                                                                                                                                  .    CO2_Source_DAC         .    CO2_SOURCE_FLOW_DAC    EPS           0                          0


2020                                                                                                                                  .    BioLiquid_Import       .    BIOLIQUIDFLOW_IMPORT   55            0                          0



2020                                                                                                                                  .    DieselBuffer           .    DIESELFLOW             -16.9549      -0.074                     0
*2020.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -10.2291      -0.074                     0
*2025.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -13.6648      -0.074                     0
*2030.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -17.0988      -0.074                     0
*2035.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -16.9549      -0.074                     0
*2040.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -16.8093      -0.074                     0
*2045.                                                                                                                                .    DieselBuffer           .    DIESELFLOW             -16.6654      -0.074                     0
2050                                                                                                                                  .    DieselBuffer           .    DIESELFLOW             -16.5215      -0.074                     0



2020                                                                                                                                  .    Money_Buffer           .    OPERATIONCOST          1             0                          0
2020                                                                                                                                  .    Money_Buffer_T         .    OPERATIONCOST          1             0                          0
2020                                                                                                                                  .    GHG_Buffer             .    GHGEMISSION_nonbio     0             1                          0
2020                                                                                                                                  .    GHGbio_Buffer          .    GHGEMISSION_bio        0             0                          1


2020                                                                                                                                  .    Muni_Waste_Gen         .    MUNI_WASTE_GEN_FLOW    10.78         0                          0

*Source - Analyseforuds�tninger 2018
2020                                                                                                                                  .    Wood_Gen               .    WOOD_GEN_FLOW          128           0                          0
2020                                                                                                                                  .    Wood_Pellets_Gen       .    WOOD_PELLETS_GEN_FLOW  193.6         0                          0
2020                                                                                                                                  .    Straw_Gen              .    STRAW_GEN_FLOW         102           0                          0

*4km = 0.81, 7km = 1.33, 10km = 1.91, 14km = 2.49 (Ida PhD, p. 110/95), EA Anvendelse af biogas (p. 47 25 kr/ton = 3.33 Eur/ton)
*14 km

*2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        6.66           0                          0

2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        3.33          0                          0

*2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        2.49          0                          0
*2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        1.33          0                          0
*2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        0.81          0                          0
*2020                                                                                                                                  .    Manure_Gen             .    MANURE_GEN_FLOW        0.0001        0                          0

* 10km = 3.44, 20km = 5.39, 30km = 7.56, 40km = 9.76 (Ida PhD, p. 145/130), EA Anvendelse af biogas (p. 47 50 kr/ton = 6.66 Eur/ton)

2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   6.66          0                           0

*2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   9.76          0                          0
*2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   7.56          0                          0
*2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   5.39          0                          0
*2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   3.44          0                          0
*2020                                                                                                                                  .    Deep_Litter_Gen        .    DEEP_LITTER_GEN_FLOW   0.0001        0                          0


2020                                                                                                                                  .    Food_Waste_Gen         .    FOOD_WASTE_GEN_FLOW    32.7          0                          0
2020                                                                                                                                  .    Nature_Area_Gen        .    NATURE_AREA_GEN_FLOW   38.66         0                          0

*Conversion, Manure = 0.4636; Straw (Biogas) = 8.4398; Deep Litter = 2.1204; Food_Waste = 4.0964; Nature Area = 5.4530

;

SOSIBU2INDIC(Y,PROC,FLOW,FLOWINDIC)$(SOSIBU2INDIC(Y,PROC,FLOW,FLOWINDIC)EQ 0) = SOSIBU2INDIC('2020',PROC,FLOW,FLOWINDIC);