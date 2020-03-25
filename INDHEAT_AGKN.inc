$ifi not %indheat_geo%==indheat_eu                                    $goto endindheat_eu
PARAMETER INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)         'Allowed investment in area and group' ;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)              $    INDHEAT_GINGROUP(INDHEAT_GGG,INDHEAT_GROUP)                          =    1;
*No new oil heating technology allowed in Denmark or Norway
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_OIL')              $    (ICA('DENMARK',INDHEAT_AAA) OR ICA('NORWAY',INDHEAT_AAA) )           =    0;

*No new gas heating technology allowed if no installment in 2016

INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GB')               $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBHPA2W_TANK')     $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBSH_TANK')        $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_AbGHPA2W ')        $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_AbGHPB2W')         $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GEHPA2W')          $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GEHPB2W')          $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_AdGHPB2W')         $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;

*No new wood stoves allowed if no installment in 2016
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_WPSTOV')           $    (INDHEAT_GINSTALL2016('IDVHG_STOV_2010_OFH','GR_WPSTOV',INDHEAT_AAA) EQ 0) =    0;
$label endindheat_eu

$ifi not %indheat_geo%==indheat_dk                                    $goto endindheat_dk
PARAMETER INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)         'Allowed investment in area and group'
/
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2010_IND         .    GR_GB       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2020_IND         .    GR_GB       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2030_IND         .    GR_GB       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2040_IND         .    GR_GB       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2050_IND         .    GR_GB       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2010_IND         .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2020_IND         .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2030_IND         .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2040_IND         .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2050_IND         .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2010_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2020_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2030_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2040_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_GB_2050_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2010_IND         .    GR_WP       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2020_IND         .    GR_WP       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2030_IND         .    GR_WP       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2040_IND         .    GR_WP       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2050_IND         .    GR_WP       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2010_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2020_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2030_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2040_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_WP_2050_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2010_IND      .    GR_HPA2W    1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2020_IND      .    GR_HPA2W    1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2030_IND      .    GR_HPA2W    1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2040_IND      .    GR_HPA2W    1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2050_IND      .    GR_HPA2W    1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2010_IND      .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2020_IND      .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2030_IND      .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2040_IND      .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2W_2050_IND      .    GR_GBHPA2W  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2A_2010_IND      .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2A_2020_IND      .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2A_2030_IND      .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2A_2040_IND      .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_HPA2A_2050_IND      .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2010_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2020_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2030_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2040_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2050_IND         .    GR_GBSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2010_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2020_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2030_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2040_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_SH_2050_IND         .    GR_WPSH     1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2010_IND         .    GR_EL       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2020_IND         .    GR_EL       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2030_IND         .    GR_EL       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2040_IND         .    GR_EL       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2050_IND         .    GR_EL       1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2010_IND         .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2020_IND         .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2030_IND         .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2040_IND         .    GR_ELHPA2A  1
DK1_NoDH_ind                                                                                                   .    INDHEAT_EL_2050_IND         .    GR_ELHPA2A  1
*
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPA2W_2010_IND   .    GR_AbGHPA2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPA2W_2020_IND   .    GR_AbGHPA2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPA2W_2030_IND   .    GR_AbGHPA2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPA2W_2040_IND   .    GR_AbGHPA2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPA2W_2050_IND   .    GR_AbGHPA2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPB2W_2010_IND   .    GR_AbGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPB2W_2020_IND   .    GR_AbGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPB2W_2030_IND   .    GR_AbGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPB2W_2040_IND   .    GR_AbGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AbGHPB2W_2050_IND   .    GR_AbGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AdGHPB2W_2010_IND   .    GR_AdGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AdGHPB2W_2020_IND   .    GR_AdGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AdGHPB2W_2030_IND   .    GR_AdGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AdGHPB2W_2040_IND   .    GR_AdGHPB2W 1
DK1_NoDH_ind                                                                                                   .    INDHEAT_AdGHPB2W_2050_IND   .    GR_AdGHPB2W 1
*
*
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2010_APART       .    GR_GB       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2020_APART       .    GR_GB       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2030_APART       .    GR_GB       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2040_APART       .    GR_GB       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2050_APART       .    GR_GB       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2010_APART       .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2020_APART       .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2030_APART       .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2040_APART       .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2050_APART       .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2010_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2020_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2030_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2040_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GB_2050_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2010_APART       .    GR_WP       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2020_APART       .    GR_WP       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2030_APART       .    GR_WP       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2040_APART       .    GR_WP       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2050_APART       .    GR_WP       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2010_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2020_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2030_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2040_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_WP_2050_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2010_APART    .    GR_HPA2W    1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2020_APART    .    GR_HPA2W    1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2030_APART    .    GR_HPA2W    1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2040_APART    .    GR_HPA2W    1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2050_APART    .    GR_HPA2W    1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2010_APART    .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2020_APART    .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2030_APART    .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2040_APART    .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_HPA2W_2050_APART    .    GR_GBHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2010_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2020_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2030_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2040_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2050_APART       .    GR_GBSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2010_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2020_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2030_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2040_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_SH_2050_APART       .    GR_WPSH     1
DK1_NoDH_apart                                                                                                 .    INDHEAT_EL_2010_APART       .    GR_EL       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_EL_2020_APART       .    GR_EL       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_EL_2030_APART       .    GR_EL       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_EL_2040_APART       .    GR_EL       1
DK1_NoDH_apart                                                                                                 .    INDHEAT_EL_2050_APART       .    GR_EL       1
*
*
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPA2W_2010_APART .    GR_AbGHPA2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPA2W_2020_APART .    GR_AbGHPA2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPA2W_2030_APART .    GR_AbGHPA2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPA2W_2040_APART .    GR_AbGHPA2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPA2W_2050_APART .    GR_AbGHPA2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPB2W_2010_APART .    GR_AbGHPB2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPB2W_2020_APART .    GR_AbGHPB2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPB2W_2030_APART .    GR_AbGHPB2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPB2W_2040_APART .    GR_AbGHPB2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_AbGHPB2W_2050_APART .    GR_AbGHPB2W 1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPA2W_2010_APART  .    GR_GEHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPA2W_2020_APART  .    GR_GEHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPA2W_2030_APART  .    GR_GEHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPA2W_2040_APART  .    GR_GEHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPA2W_2050_APART  .    GR_GEHPA2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPB2W_2010_APART  .    GR_GEHPB2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPB2W_2020_APART  .    GR_GEHPB2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPB2W_2030_APART  .    GR_GEHPB2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPB2W_2040_APART  .    GR_GEHPB2W  1
DK1_NoDH_apart                                                                                                 .    INDHEAT_GEHPB2W_2050_APART  .    GR_GEHPB2W  1

/;

INDHEAT_AGKN('DK2_NoDH_ind',INDHEAT_G,INDHEAT_GROUP)=INDHEAT_AGKN('DK1_NoDH_ind',INDHEAT_G,INDHEAT_GROUP);
INDHEAT_AGKN('DK2_NoDH_apart',INDHEAT_G,INDHEAT_GROUP)=INDHEAT_AGKN('DK1_NoDH_apart',INDHEAT_G,INDHEAT_GROUP);

$label endindheat_dk
