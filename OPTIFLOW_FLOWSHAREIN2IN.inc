PARAMETER FLOWSHAREIN2IN(YYY,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET) "Relationship between two input flows (U1/U2) - units of flow 1 divided by units of flow 2"
/
2020                                                                                                                                                                            .    DK1_Large .    BiogasProd_mix .    MANURE_GEN_FLOW .    DEEP_LITTER_GEN_FLOW .    ILOUPFX_LO 0.8746
2020                                                                                                                                                                            .    DK1_Large .    BiogasProd_mix .    MANURE_GEN_FLOW .    STRAW_GJ_BIOGAS      .    ILOUPFX_LO 1.043674
2020                                                                                                                                                                            .    DK1_Large .    BiogasProd_mix .    MANURE_GEN_FLOW .    FOOD_WASTE_GEN_FLOW  .    ILOUPFX_LO 0.5335
2020                                                                                                                                                                            .    DK1_Large .    BiogasProd_mix .    MANURE_GEN_FLOW .    NATURE_AREA_GEN_FLOW .    ILOUPFX_LO 1.6153


/
;


FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)$( FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)EQ 0) =  FLOWSHAREIN2IN('2020','DK1_Large',PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET);

*FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)=FLOWSHAREIN2IN('2020',AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET);


$ontext
FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)$( FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)EQ 0) =  FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET);

FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)=FLOWSHAREIN2IN('2020',AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET);

$offtext

*The old equation:
*FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)$( FLOWSHAREIN2IN(Y,AAA,PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET)EQ 0) =  FLOWSHAREIN2IN('2014','DK_CA_KBH',PROC,IFLOWIN,IFLOWIN2,ILOUPFXSET);