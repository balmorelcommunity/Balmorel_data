TABLE SUBTECHGROUPKPOT(CCCRRRAAA,TECH_GROUP,SUBTECH_GROUP)       'SubTechnology group capacity restriction by geography (MW)'
                      SOLARPV.RG1  WINDTURBINE_ONSHORE.RG1
                                                          
Albertslund_A           11.156829                 5.562372
Alleroed_A              35.934231                17.900156
Ballerup_A               8.224465                 4.100793
Bornholm_A             261.255654               127.445149
Broendby_A               2.717020                 1.351937
Christiansoe_A           0.518101                 0.248683
Dragoer_A                8.698787                 4.302675
Egedal_A                63.333585                31.542418
Fredensborg_A           70.417865                34.988861
Frederiksberg_A          5.970027                 2.975421
Frederikssund_A         91.996669                45.541330
Furesoe_A               42.450870                21.189646
Gentofte_A               1.633638                 0.817336
Gladsaxe_A               3.820397                 1.911408
Glostrup_A               2.701291                 1.351500
Gribskov_A             145.900369                72.315811
Halsnaes_A              64.240532                31.713055
Helsingoer_A            74.816580                37.184990
Herlev_A                 1.903767                 0.952486
Hilleroed_A            132.532642                65.722635
Hoeje-Taastrup_A        13.788340                 6.868441
Hoersholm_A             12.854481                 6.405623
Hvidovre_A               1.097637                 0.547168
Ishoej_A                 5.221293                 2.590129
Koebenhavn_A             5.970027                 2.975421
Lyngby-Taarbaek_A       18.098647                 9.055052
Roedovre_A               0.090043                 0.045050
Rudersdal_A             47.473148                23.751600
Taarnby_A               47.899838                23.834136
Vallensbaek_A            2.679069                 1.337125
Aarhus_A               110.008573                53.727114
Favrskov_A             201.906368                99.589120
Hedensted_A            164.773508                81.467370
Herning_A              599.778217               293.734181
Holstebro_A            361.861081               176.400704
Horsens_A              227.245866               112.288108
Ikast-Brande_A         384.977105               189.522633
Lemvig_A               205.709555               100.208124
Norddjurs_A            344.358266               166.567870
Odder_A                 56.021957                27.645959
Randers_A              191.588297                94.592064
Ringkoebing-Skjern_A   664.439616               323.367450
Samsoe_A                30.108779                14.487932
Silkeborg_A            553.075529               272.631104
Skanderborg_A          253.576687               125.305525
Skive_A                198.613405                97.273087
Struer_A                46.601171                22.747358
Syddjurs_A             395.876657               190.394132
Viborg_A               692.877629               340.793667
Aalborg_A              369.541077               180.437321
Broenderslev_A         195.740298                93.671321
Frederikshavn_A        446.147919               210.640574
Hjoerring_A            405.160407               190.589113
Jammerbugt_A           376.186511               184.232908
Laesoe_A               124.181136                60.380728
Mariagerfjord_A        311.362812               153.554325
Morsoe_A                73.784443                35.965146
Rebild_A               218.018715               107.325403
Thisted_A              672.195307               326.761147
Vesthimmerlands_A      162.923545                79.880657
Faxe_A                 147.402288                73.118846
Greve_A                  4.779004                 2.365613
Guldborgsund_A         259.373462               128.297970
Holbaek_A              171.763960                84.933346
Kalundborg_A           230.195017               112.729413
Koege_A                 98.641828                48.867088
Lejre_A                 93.070146                46.054090
Lolland_A              184.965938                91.221519
Naestved_A             223.754120               110.503052
Odsherred_A            101.457381                50.111316
Ringsted_A             105.196692                52.058311
Roskilde_A              49.320430                24.525922
Slagelse_A             172.191598                84.511752
Solroed_A                8.127386                 4.023619
Soroe_A                146.844595                72.010262
Stevns_A                48.627144                24.078515
Vordingborg_A          196.757418                96.803935
Aabenraa_A             277.816146               139.090802
Aeroe_A                 15.222141                 7.545233
Assens_A               150.582271                74.943417
Billund_A              267.165169               131.185226
Esbjerg_A              166.468854                81.723659
Faaborg-Midtfyn_A      216.011319               107.313249
Fanoe_A                 72.347236                35.421836
Fredericia_A            41.727672                20.728982
Haderslev_A            237.672637               118.101968
Kerteminde_A            51.994328                25.818879
Kolding_A              169.176633                83.954552
Langeland_A            110.952685                54.699660
Middelfart_A            85.064773                42.295123
Nordfyns_A              94.744204                47.185390
Nyborg_A                92.225189                45.933173
Odense_A                77.381418                38.562238
Soenderborg_A          110.296607                55.409552
Svendborg_A            161.630982                80.003035
Toender_A              276.137284               136.202902
Varde_A                596.325172               290.395064
Vejen_A                175.048704                86.458363
Vejle_A                492.294815               242.663618
;
SUBTECHGROUPKPOT(AAA,'SOLARPV',SUBTECH_GROUP)$(SUBTECHGROUPKPOT(AAA,'SOLARPV',SUBTECH_GROUP) = 0) = EPS;
SUBTECHGROUPKPOT(AAA,'WINDTURBINE_ONSHORE',SUBTECH_GROUP)$(SUBTECHGROUPKPOT(AAA,'WINDTURBINE_ONSHORE',SUBTECH_GROUP) = 0) = EPS;
SUBTECHGROUPKPOT(AAA,'WINDTURBINE_OFFSHORE',SUBTECH_GROUP)$(SUBTECHGROUPKPOT(AAA,'WINDTURBINE_OFFSHORE',SUBTECH_GROUP) = 0) = EPS;
$onmulti
$if     EXIST '../data/SUBTECHGROUPKPOT2.inc' $INCLUDE         '../data/SUBTECHGROUPKPOT2.inc';
$if not EXIST '../data/SUBTECHGROUPKPOT2.inc' $INCLUDE '../../base/data/SUBTECHGROUPKPOT2.inc';
$offmulti
$onmulti
$if     EXIST '../data/OFFSHORE_SUBTECHGROUPKPOT.inc' $INCLUDE '../data/OFFSHORE_SUBTECHGROUPKPOT.inc';
$if not EXIST '../data/OFFSHORE_SUBTECHGROUPKPOT.inc' $INCLUDE '../../base/data/OFFSHORE_SUBTECHGROUPKPOT.inc';
$offmulti