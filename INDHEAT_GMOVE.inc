SET INDHEAT_GMOVE(INDHEAT_GGG,INDHEAT_GROUPFROM,INDHEAT_GROUPTO) 'Technologies that can be moved from group GROUPFROM to GROUPTO'
/
IDVHG_GB_2010_OFH                                                                                                                 .    GR_GB_TANK     .    GR_GBSH_TANK
IDVHG_WP_2010_OFH                                                                                                                 .    GR_WP_TANK     .    GR_WPSH_TANK
IDVHG_EL_2010_OFH                                                                                                                 .    GR_EL_TANK     .    GR_ELHPA2A_TANK
IDVHG_GB_2020_OFH                                                                                                                 .    GR_GB_TANK     .    GR_GBSH_TANK
IDVHG_WP_2020_OFH                                                                                                                 .    GR_WP_TANK     .    GR_WPSH_TANK
IDVHG_EL_2020_OFH                                                                                                                 .    GR_EL_TANK     .    GR_ELHPA2A_TANK

IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_COAL_TANK   .    GR_WP_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_COAL_TANK   .    GR_WPSH_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_OIL_TANK    .    GR_WP_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_OIL_TANK    .    GR_WPSH_TANK                                                                                                                                                            GR_WPSH_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_GBSH_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_GBHPA2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_AbGHPA2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_AbGHPB2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_GEHPA2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_GEHPB2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_GB_TANK     .    GR_AdGHPB2W_TANK
IDVHG_WTRTANK_2015_OFH                                                                                                            .    GR_WP_TANK     .    GR_WPSH_TANK

IDVHG_WTRTANK_WTRONLY_2015_OFH                                                                                                    .    GR_OIL_TANK    .    GR_EL_TANK
IDVHG_WTRTANK_WTRONLY_2015_OFH                                                                                                    .    GR_OIL_TANK    .    GR_WPSTOV_TANK
IDVHG_WTRTANK_WTRONLY_2015_OFH                                                                                                    .    GR_OIL_TANK    .    GR_ELHPA2A_TANK
IDVHG_WTRTANK_WTRONLY_2015_OFH                                                                                                    .    GR_EL_TANK     .    GR_ELHPA2A_TANK                                                                                                                                                            GR_WPSH_TANK
IDVHG_WTRTANK_WTRONLY_2015_OFH                                                                                                    .    GR_WPSTOV_TANK .    GR_EL_TANK

$ifi not %indheat_geo%==indheat_dk $goto endindheat_dk
*IDVHG_GB_2010_APART                                                                                                               .    GR_GB     .    GR_GBHPA2W
IDVHG_GB_2010_APART                                                                                                               .    GR_GB     .    GR_GBSH
IDVHG_WP_2010_APART                                                                                                               .    GR_WP     .    GR_WPSH
*IDVHG_GB_2020_APART                                                                                                               .    GR_GB     .    GR_GBHPA2W
IDVHG_GB_2020_APART                                                                                                               .    GR_GB     .    GR_GBSH
IDVHG_WP_2020_APART                                                                                                               .    GR_WP     .    GR_WPSH
$label endindheat_dk
/;

$ONTEXT
*Storage tanks can move from one group to the other.
$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu
INDHEAT_GMOVE('IDVHG_WTRTANK_WTRONLY_2015_OFH',INDHEAT_GROUPFROM,INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPFROM) AND INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPTO))= YES;
INDHEAT_GMOVE('IDVHG_WTRTANK_WTRONLY_2015_OFH','GR_OIL_TANK',INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPTO))= YES;

INDHEAT_GMOVE('IDVHG_WTRTANK_2015_OFH',INDHEAT_GROUPFROM,INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('RADIATOR',INDHEAT_GROUPFROM) AND INDHEAT_RELGROUP('RADIATOR',INDHEAT_GROUPTO))= YES;
INDHEAT_GMOVE('IDVHG_WTRTANK_2015_OFH','GR_OIL_TANK',INDHEAT_GROUPTO)=NO;
INDHEAT_GMOVE('IDVHG_WTRTANK_2015_OFH',INDHEAT_GROUPFROM,'GR_OIL_TANK')= NO;
INDHEAT_GMOVE('IDVHG_WTRTANK_2015_OFH',INDHEAT_GROUPFROM,'GR_COAL_TANK')= NO;

LOOP(INDHEAT_GROUP,
        INDHEAT_GMOVE(INDHEAT_G,INDHEAT_GROUP,INDHEAT_GROUP)$(INDHEAT_G('IDVHG_WTRTANK_WTRONLY_2015_OFH') OR INDHEAT_G('IDVHG_WTRTANK_2015_OFH'))= NO;
);


INDHEAT_GMOVE('IDVHG_WTRTANK_WTRONLY_2020_OFH',INDHEAT_GROUPFROM,INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPFROM) AND INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPTO))= YES;
INDHEAT_GMOVE('IDVHG_WTRTANK_WTRONLY_2020_OFH','GR_OIL_TANK',INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('NO_RADIATOR',INDHEAT_GROUPTO))= YES;

INDHEAT_GMOVE('IDVHG_WTRTANK_2020_OFH',INDHEAT_GROUPFROM,INDHEAT_GROUPTO)$(INDHEAT_RELGROUP('RADIATOR',INDHEAT_GROUPFROM) AND INDHEAT_RELGROUP('RADIATOR',INDHEAT_GROUPTO))= YES;
INDHEAT_GMOVE('IDVHG_WTRTANK_2020_OFH','GR_OIL_TANK',INDHEAT_GROUPTO)=NO;
INDHEAT_GMOVE('IDVHG_WTRTANK_2020_OFH',INDHEAT_GROUPFROM,'GR_OIL_TANK')= NO;
INDHEAT_GMOVE('IDVHG_WTRTANK_2020_OFH',INDHEAT_GROUPFROM,'GR_COAL_TANK')= NO;

LOOP(INDHEAT_GROUP,
        INDHEAT_GMOVE(INDHEAT_G,INDHEAT_GROUP,INDHEAT_GROUP)$(INDHEAT_G('IDVHG_WTRTANK_WTRONLY_2020_OFH') OR INDHEAT_G('IDVHG_WTRTANK_2020_OFH'))= NO;
);
$label endindheat_eu
$OFFTEXT