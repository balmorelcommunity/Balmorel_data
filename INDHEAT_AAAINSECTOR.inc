
SET INDHEAT_AAAINSECTOR(INDHEAT_AAA,SECTOR)      'Technologies belonging to each group'
/
$ifi not %indheat_geo%==indheat_eu               $goto endindheat_eu
BE_IDVH_RES                                 .    RES
DE4-E_IDVH_RES                              .    RES
DE4-N_IDVH_RES                              .    RES
DE4-S_IDVH_RES                              .    RES
DE4-W_IDVH_RES                              .    RES
DK1_IDVH_RES                                .    RES
DK2_IDVH_RES                                .    RES
EE_IDVH_RES                                 .    RES
FI_IDVH_RES                                 .    RES
FR_IDVH_RES                                 .    RES
LT_IDVH_RES                                 .    RES
LV_IDVH_RES                                 .    RES
NL_IDVH_RES                                 .    RES
NO1_IDVH_RES                                .    RES
NO2_IDVH_RES                                .    RES
NO3_IDVH_RES                                .    RES
NO4_IDVH_RES                                .    RES
NO5_IDVH_RES                                .    RES
PL_IDVH_RES                                 .    RES
SE1_IDVH_RES                                .    RES
SE2_IDVH_RES                                .    RES
SE3_IDVH_RES                                .    RES
SE4_IDVH_RES                                .    RES
UK_IDVH_RES                                 .    RES

BE_IDVH_TER                                 .    TER
DE4-E_IDVH_TER                              .    TER
DE4-N_IDVH_TER                              .    TER
DE4-S_IDVH_TER                              .    TER
DE4-W_IDVH_TER                              .    TER
DK1_IDVH_TER                                .    TER
DK2_IDVH_TER                                .    TER
EE_IDVH_TER                                 .    TER
FI_IDVH_TER                                 .    TER
FR_IDVH_TER                                 .    TER
LT_IDVH_TER                                 .    TER
LV_IDVH_TER                                 .    TER
NL_IDVH_TER                                 .    TER
NO1_IDVH_TER                                .    TER
NO2_IDVH_TER                                .    TER
NO3_IDVH_TER                                .    TER
NO4_IDVH_TER                                .    TER
NO5_IDVH_TER                                .    TER
PL_IDVH_TER                                 .    TER
SE1_IDVH_TER                                .    TER
SE2_IDVH_TER                                .    TER
SE3_IDVH_TER                                .    TER
SE4_IDVH_TER                                .    TER
UK_IDVH_TER                                 .    TER
$label endindheat_eu

$ifi not %indheat_geo%==indheat_dk               $goto endindheat_dk
DK2_NoDH_ind                                .    RES
DK1_NoDH_ind                                .    RES
DK2_NoDH_apart                              .    RES
DK1_NoDH_apart                              .    RES
$label endindheat_dk
/;

$ifi not %taxes%==yes                            $goto endtaxes
SET DEUSERINSECTOR(DEUSER,SECTOR)
/
RESE                                        .    RES
OTHER                                       .    TER
PII                                         .    INDUS
/;
$label endtaxes