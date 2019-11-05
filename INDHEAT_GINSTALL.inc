*Data for tertiary sector missing.
PARAMETER INDHEAT_GINSTALL(YYY,INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)                                                                        'Capacity of technologies that must be installed [% of total demand]';

$ifi not %indheat_geo%==indheat_eu $goto endindheat_eu
TABLE INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)
                                                                                                                                                                                                                    NO1_IDVH_RES     UK_IDVH_RES      UK_IDVH_TER      SE1_IDVH_RES     SE1_IDVH_TER     FI_IDVH_RES      PL_IDVH_RES       NL_IDVH_RES       LT_IDVH_RES      LV_IDVH_RES      EE_IDVH_RES      FR_IDVH_RES      DE4-N_IDVH_RES   DE4-N_IDVH_TER   DK1_IDVH_RES     BE_IDVH_RES
IDVHG_EL_2010_OFH                                                                                                                   .    GR_EL                                                                      583.044903339041 61.0549784549917 85.3182365380743 193.177049686163 225.343339391823 137.732623600916 23.3881198894917  22.6791248882616  37.0133192019319 63.7910052857187 257.575757575758 188.809577402059 39.5476811203958 53.2382492204158 52.6813581142622 69.8114498924644
IDVHG_HPA2W_2010_OFH                                                                                                                .    GR_HPA2W                                                                   11.4936425799573 2.87441176894219 4.01670346000071 404.105656037873 471.394081991825 288.121867004848 0.236243635247391 0                 0                0                0                4.24725039729086 8.00780904925623 10.7799426362305 8.56359343885652 0
IDVHG_GB_2010_OFH                                                                                                                   .    GR_GB                                                                      1.65522104377894 776.701550934999 648.697771901131 15.4412961521149 69.1823899371069 10.0400326641548 223.375178539565  910.814115878792  161.540115075733 130.39664270623  90.9090909090909 386.97405827465  502.14936867287  539.04731758988  282.650312128084 490.950364136847
IDVHG_COAL_2010_OFH                                                                                                                 .    GR_COAL                                                                    0                17.2390999200366 0                0                0                1.71879758685001 528.134618871695  0.125024972813021 80.1453057558465 20.534434169277  15.1515151515152 1.36917125851697 12.0458626465717 1.61166388641701 0                10.8455691022775
IDVHG_OIL_2010_OFH                                                                                                                  .    GR_OIL                                                                     47.0784702035896 76.0816572683765 177.16099893519  20.6920277295679 83.9229559748428 126.645806649391 10.0473963309838  4.85694513884566  24.59311394931   48.7511097814561 15.1515151515152 179.343026913283 262.529012746744 263.964398699781 105.342055108068 336.369631537704
IDVHG_WP_2010_OFH                                                                                                                   .    GR_WP                                                                      247.538158324039 66.048301652654  84.8062891656047 81.6522366152141 33.4457447254953 435.74087249384  214.818442733017  61.5247891212875  696.708146017179 736.526808057318 621.212121212121 239.2569157542   175.720265764163 131.358427967275 550.76268121073  92.0229853307062
IDVHG_STOV_2010_OFH                                                                                                                 .    GR_WPSTOV                                                                                                                     284.931733779067 116.711487978907
IDVHG_HPA2A_2010_OFH                                                                                                                .    GR_ELHPA2A                                                                 109.189604509594
;
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('NORWAY',INDHEAT_AAA))                                             =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'NO1_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('SWEDEN',INDHEAT_AAA) AND INDHEAT_AAAINSECTOR(INDHEAT_AAA,'RES'))  =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'SE1_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('SWEDEN',INDHEAT_AAA) AND INDHEAT_AAAINSECTOR(INDHEAT_AAA,'TER'))  =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'SE1_IDVH_TER');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('DENMARK',INDHEAT_AAA))                                            =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'DK1_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('FINLAND',INDHEAT_AAA))                                            =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'FI_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('ESTONIA',INDHEAT_AAA))                                            =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'EE_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('LATVIA',INDHEAT_AAA))                                             =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'LV_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('LITHUANIA',INDHEAT_AAA))                                          =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'LT_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('NETHERLANDS',INDHEAT_AAA))                                        =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'NL_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('BELGIUM',INDHEAT_AAA))                                            =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'BE_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('FRANCE',INDHEAT_AAA))                                             =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'FR_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('GERMANY',INDHEAT_AAA) AND INDHEAT_AAAINSECTOR(INDHEAT_AAA,'RES')) =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'DE4-N_IDVH_RES');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('GERMANY',INDHEAT_AAA) AND INDHEAT_AAAINSECTOR(INDHEAT_AAA,'TER')) =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'DE4-N_IDVH_TER');
INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,INDHEAT_AAA)$(ICA('POLAND',INDHEAT_AAA))                                             =    INDHEAT_GINSTALL2016(INDHEAT_GGG,INDHEAT_GROUP,'PL_IDVH_RES');
*Limit the gas installation in only NO2 in Norway and SE4 in Sweden due to gas grids
INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA)$(ICA('NORWAY',INDHEAT_AAA) AND NOT RRRAAA('NO2',INDHEAT_AAA))         =    0;
INDHEAT_GINSTALL2016('IDVHG_GB_2010_OFH','GR_GB',INDHEAT_AAA)$(ICA('SWEDEN',INDHEAT_AAA) AND NOT RRRAAA('SE4',INDHEAT_AAA))         =    0;

INDHEAT_GINSTALL('2016', INDHEAT_AAA, INDHEAT_G, INDHEAT_GROUP)                                                                     =     INDHEAT_GINSTALL2016(INDHEAT_G,INDHEAT_GROUP,INDHEAT_AAA)/1000;
$label endindheat_eu


$ifi not %indheat_geo%==indheat_dk $goto endindheat_dk
*Percentage of installations
*DK1
INDHEAT_GINSTALL('2016','DK1_NoDH_ind',INDHEAT_G,INDHEAT_GROUP)=                                                                    0    ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','IDVHG_OIL_2010_OFH','GR_OIL')=                                                              0.3  ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','IDVHG_GB_2010_OFH','GR_GB')=                                                                0.35 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','IDVHG_WP_2010_OFH','GR_WP')=                                                                0.15 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','IDVHG_HPA2W_2010_OFH','GR_HPA2W')=                                                          0.11 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_ind','IDVHG_EL_2010_OFH','GR_EL')=                                                                0.11 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart',INDHEAT_G,INDHEAT_GROUP)=                                                                  0    ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','IDVHG_OIL_2010_APART','GR_OIL')=                                                          0.33 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','IDVHG_GB_2010_APART','GR_GB')=                                                            0.48 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','IDVHG_WP_2010_APART','GR_WP')=                                                            0.05 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','IDVHG_HPA2W_2010_APART','GR_HPA2W')=                                                      0.05 ;
INDHEAT_GINSTALL('2016','DK1_NoDH_apart','IDVHG_EL_2010_APART','GR_EL')=                                                            0.11 ;
*DK2
INDHEAT_GINSTALL('2016','DK2_NoDH_ind',INDHEAT_G,INDHEAT_GROUP)=                                                                    0    ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','IDVHG_OIL_2010_OFH','GR_OIL')=                                                              0.21 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','IDVHG_GB_2010_OFH','GR_GB')=                                                                0.53 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','IDVHG_WP_2010_OFH','GR_WP')=                                                                0.05 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','IDVHG_HPA2W_2010_OFH','GR_HPA2W')=                                                          0.07 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_ind','IDVHG_EL_2010_OFH','GR_EL')=                                                                0.14 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart',INDHEAT_G,INDHEAT_GROUP)=                                                                  0    ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','IDVHG_OIL_2010_APART','GR_OIL')=                                                          0.24 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','IDVHG_GB_2010_APART','GR_GB')=                                                            0.66 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','IDVHG_WP_2010_APART','GR_WP')=                                                            0.02 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','IDVHG_HPA2W_2010_APART','GR_HPA2W')=                                                      0.02 ;
INDHEAT_GINSTALL('2016','DK2_NoDH_apart','IDVHG_EL_2010_APART','GR_EL')=                                                            0.06 ;
$label endindheat_dk

INDHEAT_GINSTALL('2020',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)                                                                      =    0.9*INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP);
*INDHEAT_GINSTALL('2030',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)                                                                     =    0.2*INDHEAT_GINSTALL('2016',INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP);
