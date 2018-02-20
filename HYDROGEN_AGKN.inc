SET AGKN(AAA,GGG) "Areas for possible location of new hydrogen technologies";

Table AGKN1(GGG,AAA) "Areas for possible location of new technologies"

                                                                                                                                                                            DK2_Large      DK2_Medium   DK2_MedSmall   DK2_Rural DK2_Small NO1_A1 NO1_A2
GNR_ELYS_ELEC_AEC_Y-15                                                                                                                                                      YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_AEC_Y-20                                                                                                                                                      YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_AEC_Y-30                                                                                                                                                      YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_SOEC_Y-20                                                                                                                                                     YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_PEMEC_Y-15                                                                                                                                                    YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_PEMEC_Y-20                                                                                                                                                    YES            YES          YES            YES       YES       YES    YES
GNR_ELYS_ELEC_PEMEC_Y-30                                                                                                                                                    YES            YES          YES            YES       YES       YES    YES
GNR_H2S_H2-UND_Y-15                                                                                                                                                         YES            YES                                             YES    YES
GNR_H2S_H2-TNKC_Y-15                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_H2S_H2-TNKD_Y-15                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_H2S_H2-UND_Y-30                                                                                                                                                         YES            YES                                             YES    YES
GNR_H2S_H2-TNKC_Y-30                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_H2S_H2-TNKD_Y-30                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_FC_H2_SOFCC_Y-15                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_FC_H2_SOFCC_Y-20                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_FC_H2_SOFCC_Y-30                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES
GNR_FC_H2_SOFCC_Y-50                                                                                                                                                        YES            YES          YES            YES       YES       YES    YES

;

* For the rest of the regions, the areas above are used as proxy. NB! This must be looked more into. For Norway and Germany, investments in pumped hydro should be allowed.

AGKN1(GGG,                                                                                                                                                                  'DK1_Large'    )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'DK1_Medium'   )=AGKN1(GGG, 'DK2_Medium'   );
AGKN1(GGG,                                                                                                                                                                  'DK1_MedSmall' )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'DK1_Rural'    )=AGKN1(GGG, 'DK2_Rural'    );
AGKN1(GGG,                                                                                                                                                                  'DK1_Small'    )=AGKN1(GGG, 'DK2_Small'    );
*AGKN1(GGG,                                                                                                                                                                  'DK1_Offshore' )=AGKN1(GGG, 'DK2_Offshore' );
*AGKN1(GGG,                                                                                                                                                                  'DK1_NoDH'     )=AGKN1(GGG, 'DK2_NoDH'     );
AGKN1(GGG,                                                                                                                                                                  'FinA'         )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'NeA'          )=AGKN1(GGG, 'DK2_Large'    );
*AGKN1(GGG,                                                                                                                                                                  'NE_OFFSHORE'  )=AGKN1(GGG, 'DK2_Offshore' );
AGKN1(GGG,                                                                                                                                                                  'SE1A'         )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'SE2A'         )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'SE3A'         )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'SE4A'         )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'UKA'          )=AGKN1(GGG, 'DK2_Large'    );
*AGKN1(GGG,                                                                                                                                                                  'UK_OFFSHORE'  )=AGKN1(GGG, 'DK2_Offshore' );
AGKN1(GGG,                                                                                                                                                                  'FIN_ESPOO'    )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_HELS'     )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_TAMP'     )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_EL'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_HP'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_OTHER'    )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'FIN_GAS'      )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'NO1_A1'       )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'NO1_A2'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'NO2_A1'       )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'NO3_A1'       )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'NO3_A2'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'NO4_A1'       )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'NO5_A1'       )=AGKN1(GGG, 'DK2_Large'    );
AGKN1(GGG,                                                                                                                                                                  'SE1_EL'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE1_OTHER'    )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE2_EL'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE2_OTHER'    )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE3_STO'      )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE3_GOT'      )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE3_EL'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE3_HP'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE3_OTHER'    )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE4_MAL'      )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE4_EL'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE4_HP'       )=AGKN1(GGG, 'DK2_MedSmall' );
AGKN1(GGG,                                                                                                                                                                  'SE4_OTHER'    )=AGKN1(GGG, 'DK2_MedSmall' );
*AGKN1(GGG,                                                                                                                                                                  'DE4-N_A'      )=AGKN1(GGG, 'DK2_Large'    );
*AGKN1(GGG,                                                                                                                                                                  'DE4-W_A'      )=AGKN1(GGG, 'DK2_Large'    );
*AGKN1(GGG,                                                                                                                                                                  'DE4-E_A'      )=AGKN1(GGG, 'DK2_Large'    );
*AGKN1(GGG,                                                                                                                                                                  'DE4-S_A'      )=AGKN1(GGG, 'DK2_Large'    );


$ontext
AGKN1(GGG,A_ONSHORE)=AGKN1(GGG,'DK1_Onshore20');
AGKN1(GGG,A_OFFSHORE)=AGKN1(GGG,'DK1_Offshore20');

$offtext
;
AGKN(AAA,GGG) = AGKN1(GGG,AAA);
