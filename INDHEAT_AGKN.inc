$ifi not %indheat_geo%==indheat_eu                                    $goto endindheat_eu                                                                      
PARAMETER INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)         'Allowed investment in area and group' ;                                                 
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)              $    INDHEAT_GINGROUP(INDHEAT_GGG,INDHEAT_GROUP)                          =    1;             
*No new oil heating technology allowed in Denmark or Norway                                                                                                    
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_OIL')                   $    (ICA('DENMARK',INDHEAT_AAA) OR ICA('NORWAY',INDHEAT_AAA) )           =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_OIL_TANK')              $    (ICA('DENMARK',INDHEAT_AAA) OR ICA('NORWAY',INDHEAT_AAA) )           =    0;             
*No new gas heating technology allowed if no installment in 2016                                                                                               
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GB')                    $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBHPA2W')               $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBSH')                  $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GB_TANK')               $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBHPA2W_TANK')          $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,'GR_GBSH_TANK')             $    (INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA) EQ 0) =    0;             
$label endindheat_eu                                                                                                                                           
                                                                                                                                                               
$ifi not %indheat_geo%==indheat_dk                                    $goto endindheat_dk                                                                      
PARAMETER INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)         'Allowed investment in area and group'                                                   
/                                                                                                                                                              
DK1_NoDH_ind                                                     .    IDVHG_GB_2010_OFH                                                    .    GR_GB      1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2020_OFH                                                    .    GR_GB      1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2030_OFH                                                    .    GR_GB      1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2040_OFH                                                    .    GR_GB      1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2050_OFH                                                    .    GR_GB      1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2010_OFH                                                    .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2020_OFH                                                    .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2030_OFH                                                    .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2040_OFH                                                    .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2050_OFH                                                    .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2010_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2020_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2030_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2040_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_GB_2050_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2010_OFH                                                    .    GR_WP      1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2020_OFH                                                    .    GR_WP      1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2030_OFH                                                    .    GR_WP      1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2040_OFH                                                    .    GR_WP      1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2050_OFH                                                    .    GR_WP      1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2010_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2020_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2030_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2040_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_WP_2050_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2010_OFH                                                 .    GR_HPA2W   1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2020_OFH                                                 .    GR_HPA2W   1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2030_OFH                                                 .    GR_HPA2W   1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2040_OFH                                                 .    GR_HPA2W   1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2050_OFH                                                 .    GR_HPA2W   1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2010_OFH                                                 .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2020_OFH                                                 .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2030_OFH                                                 .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2040_OFH                                                 .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2W_2050_OFH                                                 .    GR_GBHPA2W 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2A_2010_OFH                                                 .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2A_2020_OFH                                                 .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2A_2030_OFH                                                 .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2A_2040_OFH                                                 .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_HPA2A_2050_OFH                                                 .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2010_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2020_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2030_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2040_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2050_OFH                                                    .    GR_GBSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2010_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2020_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2030_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2040_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_SH_2050_OFH                                                    .    GR_WPSH    1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2010_OFH                                                    .    GR_EL      1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2020_OFH                                                    .    GR_EL      1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2030_OFH                                                    .    GR_EL      1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2040_OFH                                                    .    GR_EL      1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2050_OFH                                                    .    GR_EL      1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2010_OFH                                                    .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2020_OFH                                                    .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2030_OFH                                                    .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2040_OFH                                                    .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_EL_2050_OFH                                                    .    GR_ELHPA2A 1   
DK1_NoDH_ind                                                     .    IDVHG_STOV_2010_OFH                                                  .    GR_STOV    1   
DK1_NoDH_ind                                                     .    IDVHG_STOV_2020_OFH                                                  .    GR_STOV    1   
DK1_NoDH_ind                                                     .    IDVHG_STOV_2030_OFH                                                  .    GR_STOV    1   
DK1_NoDH_ind                                                     .    IDVHG_STOV_2040_OFH                                                  .    GR_STOV    1   
DK1_NoDH_ind                                                     .    IDVHG_STOV_2050_OFH                                                  .    GR_STOV    1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2010_APART                                                  .    GR_GB      1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2020_APART                                                  .    GR_GB      1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2030_APART                                                  .    GR_GB      1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2040_APART                                                  .    GR_GB      1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2050_APART                                                  .    GR_GB      1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2010_APART                                                  .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2020_APART                                                  .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2030_APART                                                  .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2040_APART                                                  .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2050_APART                                                  .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2010_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2020_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2030_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2040_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_GB_2050_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2010_APART                                                  .    GR_WP      1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2020_APART                                                  .    GR_WP      1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2030_APART                                                  .    GR_WP      1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2040_APART                                                  .    GR_WP      1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2050_APART                                                  .    GR_WP      1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2010_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2020_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2030_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2040_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_WP_2050_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2010_APART                                               .    GR_HPA2W   1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2020_APART                                               .    GR_HPA2W   1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2030_APART                                               .    GR_HPA2W   1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2040_APART                                               .    GR_HPA2W   1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2050_APART                                               .    GR_HPA2W   1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2010_APART                                               .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2020_APART                                               .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2030_APART                                               .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2040_APART                                               .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_HPA2W_2050_APART                                               .    GR_GBHPA2W 1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2010_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2020_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2030_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2040_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2050_APART                                                  .    GR_GBSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2010_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2020_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2030_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2040_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_SH_2050_APART                                                  .    GR_WPSH    1   
DK1_NoDH_apart                                                   .    IDVHG_EL_2010_APART                                                  .    GR_EL      1   
DK1_NoDH_apart                                                   .    IDVHG_EL_2020_APART                                                  .    GR_EL      1   
DK1_NoDH_apart                                                   .    IDVHG_EL_2030_APART                                                  .    GR_EL      1   
DK1_NoDH_apart                                                   .    IDVHG_EL_2040_APART                                                  .    GR_EL      1   
DK1_NoDH_apart                                                   .    IDVHG_EL_2050_APART                                                  .    GR_EL      1   
/;                                                                                                                                                             
$label endindheat_dk                                                                                                                                           
