SET INDHEAT_GMOVE(INDHEAT_GGG,INDHEAT_GROUPFROM,INDHEAT_GROUPTO) 'Technologies that can be moved from group GROUPFROM to GROUPTO'
/
IDVHG_GB_2010_OFH                                                                                                                 .    GR_GB_TANK     .    GR_GBSH_TANK
IDVHG_WP_2010_OFH                                                                                                                 .    GR_WP_TANK     .    GR_WPSH_TANK
IDVHG_EL_2010_OFH                                                                                                                 .    GR_EL_TANK     .    GR_ELHPA2A_TANK
IDVHG_GB_2020_OFH                                                                                                                 .    GR_GB_TANK     .    GR_GBSH_TANK
IDVHG_WP_2020_OFH                                                                                                                 .    GR_WP_TANK     .    GR_WPSH_TANK
IDVHG_EL_2020_OFH                                                                                                                 .    GR_EL_TANK     .    GR_ELHPA2A_TANK
$ifi not %indheat_geo%==indheat_dk $goto endindheat_dk
*IDVHG_GB_2010_APART                                                                                                               .    GR_GB     .    GR_GBHPA2W
IDVHG_GB_2010_APART                                                                                                               .    GR_GB     .    GR_GBSH
IDVHG_WP_2010_APART                                                                                                               .    GR_WP     .    GR_WPSH
*IDVHG_GB_2020_APART                                                                                                               .    GR_GB     .    GR_GBHPA2W
IDVHG_GB_2020_APART                                                                                                               .    GR_GB     .    GR_GBSH
IDVHG_WP_2020_APART                                                                                                               .    GR_WP     .    GR_WPSH
$label endindheat_dk
/;
