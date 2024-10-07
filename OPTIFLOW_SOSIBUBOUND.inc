!! NOTE: OVERLOADED AS SOSIBU, SOSIBU_AST and SOSIBU_RST ?
* Rules probably should be:
*   for any index combination at most one element in has values.
*   If there is a SOSIBUFLOW_VAR_T/SOSIBUBOUND_VAR_T then SOSIBUBOUND
*   (and only that, not _AST or _RST) has value for the corresponding index combination.
*   Code in the .gms file will then combine all to aone or a few ...

!! TODO: RECONSIERE: MAYBE THIS IS ONLY FOR SOURCE (E.G. ANNUAL VALUES OF WASTE GENERATED)  - IN THIS CASE, CAHNGE NAME
*It would be conveniant to have this parameter as a function of the year
* Convention for entering data:
*   Enter at most one data item for each PROC,
*   If nothing or 0 is entered then the default values corresponding to the declaration of the variable (positive, negative or free) apply.
*   If EPS is entered then the corresponding value will be zero (CHECK IT).
* The unit for the data may differ between (PROC,FLOW).

*Unit: Flow Units/year (as defined the model 17th June 2015)

TABLE SOSIBUBOUND(YYY,AAA,PROC,FLOW,iLOUPFXSET) "Bounds on Source, Sink and Buffer Process Flows - for each year"
                                                                                                        ILOUPFX_FX      ILOUPFX_LO        ILOUPFX_UP
*38 mio ton
2050    .    Albertslund            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Alleroed               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Assens                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        606383
2050    .    Ballerup               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Billund                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Bornholm               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Broendby               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Broenderslev           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        875887
2050    .    Christiansoe           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Dragoer                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Egedal                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Esbjerg                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1145390
2050    .    Fanoe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Favrskov               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Faxe                   .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Fredensborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Fredericia             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Frederiksberg          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Frederikshavn          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Frederikssund          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Furesoe                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Faaborg-Midtfyn        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Gentofte               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Gladsaxe               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Glostrup               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Greve                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Gribskov               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Guldborgsund           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Haderslev              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1010638
2050    .    Halsnaes               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hedensted              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Helsingoer             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Herlev                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Herning                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1280142
2050    .    Hilleroed              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hjoerring              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1212766
2050    .    Holbaek                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Holstebro              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        875887
2050    .    Horsens                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Hvidovre               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hoeje_Taastrup         .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hoersholm              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Ikast-Brande           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        606383
2050    .    Ishoej                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Jammerbugt             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        673759
2050    .    Kalundborg             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Kerteminde             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Kolding                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Koebenhavn             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Koege                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Langeland              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        202128
2050    .    Lejre                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Lemvig                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        673759
2050    .    Lolland                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Lyngby-Taarbaek        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Laesoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Mariagerfjord          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        808511
2050    .    Middelfart             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Morsoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Norddjurs              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Nordfyns               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Nyborg                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Naestved               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Odder                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        202128
2050    .    Odense                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Odsherred              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Randers                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        471631
2050    .    Rebild                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        808511
2050    .    Ringkoebing-Skjern     .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1751773
2050    .    Ringsted               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Roskilde               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Rudersdal              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Roedovre               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Samsoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Silkeborg              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Skanderborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        336879
2050    .    Skive                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        875887
2050    .    Slagelse               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        202128
2050    .    Solroed                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Soroe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Stevns                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Struer                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        336879
2050    .    Svendborg              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        336879
2050    .    Syddjurs               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Soenderborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        673759
2050    .    Thisted                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1078014
2050    .    Toender                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1751773
2050    .    Taarnby                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Vallensbaek            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Varde                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1684397
2050    .    Vejen                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1145390
2050    .    Vejle                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        943262
2050    .    Vesthimmerlands        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1280142
2050    .    Viborg                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1549645
2050    .    Vordingborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Aeroe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        67376
2050    .    Aabenraa               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1212766
2050    .    Aalborg                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        943262
2050    .    Aarhus                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        202128



$ontext

*2/3 of 38 mio ton = 25333333
2050    .    Albertslund            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Alleroed               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Assens                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Ballerup               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Billund                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Bornholm               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Broendby               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Broenderslev           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        583924
2050    .    Christiansoe           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Dragoer                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Egedal                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Esbjerg                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        763593
2050    .    Fanoe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Favrskov               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Faxe                   .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Fredensborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Fredericia             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Frederiksberg          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Frederikshavn          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Frederikssund          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Furesoe                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Faaborg-Midtfyn        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Gentofte               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Gladsaxe               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Glostrup               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Greve                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Gribskov               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Guldborgsund           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Haderslev              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        673759
2050    .    Halsnaes               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hedensted              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Helsingoer             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Herlev                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Herning                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        853428
2050    .    Hilleroed              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hjoerring              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        808511
2050    .    Holbaek                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Holstebro              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        583924
2050    .    Horsens                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Hvidovre               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hoeje_Taastrup         .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Hoersholm              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Ikast-Brande           .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        404255
2050    .    Ishoej                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Jammerbugt             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        449173
2050    .    Kalundborg             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Kerteminde             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Kolding                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Koebenhavn             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Koege                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Langeland              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Lejre                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Lemvig                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        449173
2050    .    Lolland                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Lyngby-Taarbaek        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Laesoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Mariagerfjord          .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Middelfart             .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Morsoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Norddjurs              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Nordfyns               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Nyborg                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Naestved               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Odder                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Odense                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Odsherred              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Randers                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        314421
2050    .    Rebild                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        539007
2050    .    Ringkoebing-Skjern     .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1167849
2050    .    Ringsted               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Roskilde               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Rudersdal              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Roedovre               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Samsoe                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Silkeborg              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        359338
2050    .    Skanderborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        224586
2050    .    Skive                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        583924
2050    .    Slagelse               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752
2050    .    Solroed                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Soroe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Stevns                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        89835
2050    .    Struer                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        224586
2050    .    Svendborg              .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        224586
2050    .    Syddjurs               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        269504
2050    .    Soenderborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        449173
2050    .    Thisted                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        718676
2050    .    Toender                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1167849
2050    .    Taarnby                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Vallensbaek            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        EPS
2050    .    Varde                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1122931
2050    .    Vejen                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        763593
2050    .    Vejle                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        628842
2050    .    Vesthimmerlands        .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        853428
2050    .    Viborg                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        1033097
2050    .    Vordingborg            .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        179669
2050    .    Aeroe                  .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        44917
2050    .    Aabenraa               .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        808511
2050    .    Aalborg                .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        628842
2050    .    Aarhus                 .       MANURE_Gen      .       MANURE_Gen_FLOW                                                        134752

$offtext






2050    .    Albertslund            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Alleroed               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Assens                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Ballerup               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Billund                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Bornholm               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Broendby               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Broenderslev           .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Christiansoe           .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Dragoer                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Egedal                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Esbjerg                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Fanoe                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Favrskov               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Faxe                   .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Fredensborg            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Fredericia             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Frederiksberg          .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Frederikshavn          .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Frederikssund          .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Furesoe                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Faaborg-Midtfyn        .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Gentofte               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Gladsaxe               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Glostrup               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Greve                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Gribskov               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Guldborgsund           .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Haderslev              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Halsnaes               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hedensted              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Helsingoer             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Herlev                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Herning                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hilleroed              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hjoerring              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Holbaek                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Holstebro              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Horsens                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hvidovre               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hoeje_Taastrup         .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Hoersholm              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Ikast-Brande           .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Ishoej                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Jammerbugt             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Kalundborg             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Kerteminde             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Kolding                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Koebenhavn             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Koege                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Langeland              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Lejre                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Lemvig                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Lolland                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Lyngby-Taarbaek        .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Laesoe                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Mariagerfjord          .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Middelfart             .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Morsoe                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Norddjurs              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Nordfyns               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Nyborg                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Naestved               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Odder                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Odense                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Odsherred              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Randers                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Rebild                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Ringkoebing-Skjern     .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Ringsted               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Roskilde               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Rudersdal              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Roedovre               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Samsoe                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Silkeborg              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Skanderborg            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Skive                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Slagelse               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Solroed                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Soroe                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Stevns                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Struer                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Svendborg              .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Syddjurs               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Soenderborg            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Thisted                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Toender                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Taarnby                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Vallensbaek            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Varde                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Vejen                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Vejle                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Vesthimmerlands        .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Viborg                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Vordingborg            .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Aeroe                  .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Aabenraa               .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Aalborg                .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS
2050    .    Aarhus                 .       MUNI_WASTE_Gen  .       MUNI_WASTE_Gen_FLOW                                                    EPS






2050    .    Albertslund            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Alleroed               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Assens                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  48164
2050    .    Ballerup               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Billund                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  32110
2050    .    Bornholm               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Broendby               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Broenderslev           .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  69571
2050    .    Christiansoe           .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Dragoer                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Egedal                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Esbjerg                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  90977
2050    .    Fanoe                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Favrskov               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Faxe                   .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Fredensborg            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Fredericia             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Frederiksberg          .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Frederikshavn          .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Frederikssund          .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Furesoe                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Faaborg-Midtfyn        .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Gentofte               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Gladsaxe               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Glostrup               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Greve                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Gribskov               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Guldborgsund           .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  32110
2050    .    Haderslev              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  80274
2050    .    Halsnaes               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Hedensted              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Helsingoer             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Herlev                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Herning                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  101680
2050    .    Hilleroed              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Hjoerring              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  96329
2050    .    Holbaek                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Holstebro              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  69571
2050    .    Horsens                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Hvidovre               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Hoeje_Taastrup         .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Hoersholm              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Ikast-Brande           .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  48164
2050    .    Ishoej                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Jammerbugt             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  53516
2050    .    Kalundborg             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Kerteminde             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Kolding                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Koebenhavn             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Koege                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Langeland              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  16055
2050    .    Lejre                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Lemvig                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  53516
2050    .    Lolland                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Lyngby-Taarbaek        .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Laesoe                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Mariagerfjord          .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  64219
2050    .    Middelfart             .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Morsoe                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Norddjurs              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Nordfyns               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  32110
2050    .    Nyborg                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Naestved               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Odder                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  16055
2050    .    Odense                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Odsherred              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Randers                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  37461
2050    .    Rebild                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  64219
2050    .    Ringkoebing-Skjern     .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  139141
2050    .    Ringsted               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Roskilde               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Rudersdal              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Roedovre               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Samsoe                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Silkeborg              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  42813
2050    .    Skanderborg            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  26758
2050    .    Skive                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  69571
2050    .    Slagelse               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  16055
2050    .    Solroed                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Soroe                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Stevns                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  10703
2050    .    Struer                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  26758
2050    .    Svendborg              .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  26758
2050    .    Syddjurs               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  32110
2050    .    Soenderborg            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  53516
2050    .    Thisted                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  85625
2050    .    Toender                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  139141
2050    .    Taarnby                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Vallensbaek            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  EPS
2050    .    Varde                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  133790
2050    .    Vejen                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  90977
2050    .    Vejle                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  74922
2050    .    Vesthimmerlands        .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  101680
2050    .    Viborg                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  123087
2050    .    Vordingborg            .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  21406
2050    .    Aeroe                  .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  5352
2050    .    Aabenraa               .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  96329
2050    .    Aalborg                .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  74922
2050    .    Aarhus                 .       DEEP_LITTER_Gen  .       DEEP_LITTER_Gen_FLOW                                                  16055






2050    .    Albertslund           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4086
2050    .    Alleroed              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3870
2050    .    Assens                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5634
2050    .    Ballerup              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7101
2050    .    Billund               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3660
2050    .    Bornholm              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4718
2050    .    Broendby              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6072
2050    .    Broenderslev          .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5136
2050    .    Christiansoe          .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     EPS
2050    .    Dragoer               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     2210
2050    .    Egedal                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6411
2050    .    Esbjerg               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     16327
2050    .    Fanoe                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     458
2050    .    Favrskov              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7105
2050    .    Faxe                  .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5207
2050    .    Fredensborg           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6194
2050    .    Fredericia            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7287
2050    .    Frederiksberg         .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     16747
2050    .    Frederikshavn         .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7793
2050    .    Frederikssund         .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6561
2050    .    Furesoe               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6931
2050    .    Faaborg-Midtfyn       .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7139
2050    .    Gentofte              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     11768
2050    .    Gladsaxe              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     11468
2050    .    Glostrup              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3657
2050    .    Greve                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8165
2050    .    Gribskov              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5887
2050    .    Guldborgsund          .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8309
2050    .    Haderslev             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7637
2050    .    Halsnaes              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4582
2050    .    Hedensted             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6846
2050    .    Helsingoer            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     9180
2050    .    Herlev                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5096
2050    .    Herning               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     13119
2050    .    Hilleroed             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7962
2050    .    Hjoerring             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8476
2050    .    Holbaek               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     10475
2050    .    Holstebro             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8352
2050    .    Horsens               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     15154
2050    .    Hvidovre              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8729
2050    .    Hoeje_Taastrup        .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8201
2050    .    Hoersholm             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3647
2050    .    Ikast-Brande          .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5929
2050    .    Ishoej                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4189
2050    .    Jammerbugt            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5209
2050    .    Kalundborg            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6742
2050    .    Kerteminde            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3206
2050    .    Kolding               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     14128
2050    .    Koebenhavn            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     109612
2050    .    Koege                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     9667
2050    .    Langeland             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     1518
2050    .    Lejre                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3882
2050    .    Lemvig                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     2226
2050    .    Lolland               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4773
2050    .    Lyngby-Taarbaek       .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8597
2050    .    Laesoe                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     234
2050    .    Mariagerfjord         .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5784
2050    .    Middelfart            .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5514
2050    .    Morsoe                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     2398
2050    .    Norddjurs             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5408
2050    .    Nordfyns              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4086
2050    .    Nyborg                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4780
2050    .    Naestved              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     12009
2050    .    Odder                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3316
2050    .    Odense                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     31677
2050    .    Odsherred             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4607
2050    .    Randers               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     15218
2050    .    Rebild                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4409
2050    .    Ringkoebing-Skjern    .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7380
2050    .    Ringsted              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5318
2050    .    Roskilde              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     14047
2050    .    Rudersdal             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8400
2050    .    Roedovre              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6356
2050    .    Samsoe                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     505
2050    .    Silkeborg             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     14060
2050    .    Skanderborg           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     9671
2050    .    Skive                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5734
2050    .    Slagelse              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     11719
2050    .    Solroed               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3507
2050    .    Soroe                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4245
2050    .    Stevns                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     3356
2050    .    Struer                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     2493
2050    .    Svendborg             .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     8087
2050    .    Syddjurs              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5851
2050    .    Soenderborg           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     9302
2050    .    Thisted               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5580
2050    .    Toender               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4703
2050    .    Taarnby               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7025
2050    .    Vallensbaek           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     2607
2050    .    Varde                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7070
2050    .    Vejen                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     5875
2050    .    Vejle                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     18285
2050    .    Vesthimmerlands       .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     4923
2050    .    Viborg                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     14187
2050    .    Vordingborg           .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     6463
2050    .    Aeroe                 .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     707
2050    .    Aabenraa              .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     7774
2050    .    Aalborg               .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     33902
2050    .    Aarhus                .       FOOD_WASTE_Gen  .       FOOD_WASTE_Gen_FLOW                                                     57214





*2050    .  Koebenhavn               .      Other_Gas_Gen   .       OTHER_GAS_FLOW                                                          1500000

*$ontext

*Other gas - enegy units (GJ)
2050    .       DK_CA_Aab       .       Other_Gas_Gen   .       OTHER_GAS_FLOW
2050    .       DK_CA_Aal       .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Aarhus    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Esb       .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Hern      .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Kal       .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_KBH       .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              5000000
2050    .       DK_CA_Odense    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Randers   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_Roenne    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_CA_TVIS      .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_E_DTU        .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Grenaa    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Hil       .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Hjoerring .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Holst     .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Horsens   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_NrdOstSj  .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Silk      .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Sndborg   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MA_Viborg    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Aars     .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Frdhavn  .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Had      .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Hammel   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Hobro    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Naestved .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_NrAlslev .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Nyborg   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Nyk      .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Skagen   .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Slagelse .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Svend    .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS
2050    .       DK_MAM_Thisted  .       Other_Gas_Gen   .       OTHER_GAS_FLOW                                                              EPS


*$offtext



$ontext
*Demand - GJ

2050    .       DK_CA_Aab       .       GasDemand          .       GASFLOW                                               1322251
2050    .       DK_CA_Aal       .       GasDemand          .       GASFLOW                               952802
2050    .       DK_CA_Aarhus    .       GasDemand          .       GASFLOW                               950012
2050    .       DK_CA_Esb       .       GasDemand          .       GASFLOW                               16695
2050    .       DK_CA_Hern      .       GasDemand          .       GASFLOW                               50036
2050    .       DK_CA_Kal       .       GasDemand          .       GASFLOW                               686120
2050    .       DK_CA_KBH       .       GasDemand          .       GASFLOW                               170000000
2050    .       DK_CA_Odense    .       GasDemand          .       GASFLOW                               5000000
2050    .       DK_CA_Randers   .       GasDemand          .       GASFLOW                               369449
2050    .       DK_CA_Roenne    .       GasDemand          .       GASFLOW                               422228
2050    .       DK_CA_TVIS      .       GasDemand          .       GASFLOW                               2375030
2050    .       DK_E_DTU        .       GasDemand          .       GASFLOW                               EPS
2050    .       DK_MA_Grenaa    .       GasDemand          .       GASFLOW                               422228
2050    .       DK_MA_Hil       .       GasDemand          .       GASFLOW                               52778
2050    .       DK_MA_Hjoerring .       GasDemand          .       GASFLOW                               950012
2050    .       DK_MA_Holst     .       GasDemand          .       GASFLOW                               2163916
2050    .       DK_MA_Horsens   .       GasDemand          .       GASFLOW                               791677
2050    .       DK_MA_NrdOstSj  .       GasDemand          .       GASFLOW                               EPS
2050    .       DK_MA_Silk      .       GasDemand          .       GASFLOW                               422228
2050    .       DK_MA_Sndborg   .       GasDemand          .       GASFLOW                               527784
2050    .       DK_MA_Viborg    .       GasDemand          .       GASFLOW                               1213904
2050    .       DK_MAM_Aars     .       GasDemand          .       GASFLOW                               1002790
2050    .       DK_MAM_Frdhavn  .       GasDemand          .       GASFLOW                               369449
2050    .       DK_MAM_Had      .       GasDemand          .       GASFLOW                               791677
2050    .       DK_MAM_Hammel   .       GasDemand          .       GASFLOW                               369449
2050    .       DK_MAM_Hobro    .       GasDemand          .       GASFLOW                               266683
2050    .       DK_MAM_Naestved .       GasDemand          .       GASFLOW                               422228
2050    .       DK_MAM_NrAlslev .       GasDemand          .       GASFLOW                               EPS
2050    .       DK_MAM_Nyborg   .       GasDemand          .       GASFLOW                               263892
2050    .       DK_MAM_Nyk      .       GasDemand          .       GASFLOW                               527784
2050    .       DK_MAM_Skagen   .       GasDemand          .       GASFLOW                               EPS
2050    .       DK_MAM_Slagelse .       GasDemand          .       GASFLOW                               158335
2050    .       DK_MAM_Svend    .       GasDemand          .       GASFLOW                               422228
2050    .       DK_MAM_Thisted  .       GasDemand          .       GASFLOW                               266683

$offtext


$ontext



2050    .  Albertslund              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Alleroed                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Assens                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         64655
2050    .  Ballerup                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Billund                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         21552
2050    .  Bornholm                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         81897
2050    .  Broendby                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Broenderslev             .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         60345
2050    .  Christiansoe             .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Dragoer                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Egedal                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         8621
2050    .  Esbjerg                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         8621
2050    .  Fanoe                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Favrskov                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         73276
2050    .  Faxe                     .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         64655
2050    .  Fredensborg              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Fredericia               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         12931
2050    .  Frederiksberg            .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Frederikshavn            .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         47414
2050    .  Frederikssund            .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         25862
2050    .  Furesoe                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Faaborg-Midtfyn          .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         73276
2050    .  Gentofte                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Gladsaxe                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Glostrup                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Greve                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Gribskov                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         12931
2050    .  Guldborgsund             .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         137931
2050    .  Haderslev                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         86207
2050    .  Halsnaes                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Hedensted                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         86207
2050    .  Helsingoer               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Herlev                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Herning                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         60345
2050    .  Hilleroed                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         12931
2050    .  Hjoerring                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         64655
2050    .  Holbaek                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         81897
2050    .  Holstebro                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         43103
2050    .  Horsens                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         51724
2050    .  Hvidovre                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Hoeje_Taastrup           .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         8621
2050    .  Hoersholm                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Ikast-Brande             .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         25862
2050    .  Ishoej                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Jammerbugt               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         60345
2050    .  Kalundborg               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         90517
2050    .  Kerteminde               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Kolding                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         77586
2050    .  Koebenhavn               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Koege                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Langeland                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         47414
2050    .  Lejre                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Lemvig                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         38793
2050    .  Lolland                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         163793
2050    .  Lyngby-Taarbaek          .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Laesoe                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Mariagerfjord            .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         30172
2050    .  Middelfart               .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         25862
2050    .  Morsoe                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         56034
2050    .  Norddjurs                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         77586
2050    .  Nordfyns                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         68966
2050    .  Nyborg                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         38793
2050    .  Naestved                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         107759
2050    .  Odder                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         43103
2050    .  Odense                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         21552
2050    .  Odsherred                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Randers                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         99138
2050    .  Rebild                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         30172
2050    .  Ringkoebing-Skjern       .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         77586
2050    .  Ringsted                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         47414
2050    .  Roskilde                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         30172
2050    .  Rudersdal                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Roedovre                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Samsoe                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         12931
2050    .  Silkeborg                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         38793
2050    .  Skanderborg              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         38793
2050    .  Skive                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         64655
2050    .  Slagelse                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         99138
2050    .  Solroed                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         4310
2050    .  Soroe                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Stevns                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         47414
2050    .  Struer                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         30172
2050    .  Svendborg                .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         51724
2050    .  Syddjurs                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         64655
2050    .  Soenderborg              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         81897
2050    .  Thisted                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         56034
2050    .  Toender                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         25862
2050    .  Taarnby                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Vallensbaek              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Varde                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         EPS
2050    .  Vejen                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Vejle                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         90517
2050    .  Vesthimmerlands          .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         25862
2050    .  Viborg                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         34483
2050    .  Vordingborg              .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         90517
2050    .  Aeroe                    .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         8621
2050    .  Aabenraa                 .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         30172
2050    .  Aalborg                  .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         94828
2050    .  Aarhus                   .       STRAW_Gen       .       STRAW_Gen_FLOW                                                         51724







2050    .  Albertslund        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Alleroed           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Assens             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                42867
2050    .  Ballerup           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Billund            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                14289
2050    .  Bornholm           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                54298
2050    .  Broendby           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Broenderslev       .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                40009
2050    .  Christiansoe       .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Dragoer            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Egedal             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                5716
2050    .  Esbjerg            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                5716
2050    .  Fanoe              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Favrskov           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                48583
2050    .  Faxe               .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                42867
2050    .  Fredensborg        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Fredericia         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                8573
2050    .  Frederiksberg      .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Frederikshavn      .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                31436
2050    .  Frederikssund      .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                17147
2050    .  Furesoe            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Faaborg-Midtfyn    .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                48583
2050    .  Gentofte           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Gladsaxe           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Glostrup           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Greve              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Gribskov           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                8573
2050    .  Guldborgsund       .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                91449
2050    .  Haderslev          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                57156
2050    .  Halsnaes           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Hedensted          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                57156
2050    .  Helsingoer         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Herlev             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Herning            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                40009
2050    .  Hilleroed          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                8573
2050    .  Hjoerring          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                42867
2050    .  Holbaek            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                54298
2050    .  Holstebro          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                28578
2050    .  Horsens            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                34294
2050    .  Hvidovre           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Hoeje_Taastrup     .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                5716
2050    .  Hoersholm          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Ikast-Brande       .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                17147
2050    .  Ishoej             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Jammerbugt         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                40009
2050    .  Kalundborg         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                60014
2050    .  Kerteminde         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Kolding            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                51440
2050    .  Koebenhavn         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Koege              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Langeland          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                31436
2050    .  Lejre              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Lemvig             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                25720
2050    .  Lolland            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                108596
2050    .  Lyngby-Taarbaek    .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Laesoe             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Mariagerfjord      .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                20005
2050    .  Middelfart         .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                17147
2050    .  Morsoe             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                37151
2050    .  Norddjurs          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                51440
2050    .  Nordfyns           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                45725
2050    .  Nyborg             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                25720
2050    .  Naestved           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                71445
2050    .  Odder              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                28578
2050    .  Odense             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                14289
2050    .  Odsherred          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Randers            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                65729
2050    .  Rebild             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                20005
2050    .  Ringkoebing-Skjern .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                51440
2050    .  Ringsted           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                31436
2050    .  Roskilde           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                20005
2050    .  Rudersdal          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Roedovre           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Samsoe             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                8573
2050    .  Silkeborg          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                25720
2050    .  Skanderborg        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                25720
2050    .  Skive              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                42867
2050    .  Slagelse           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                65729
2050    .  Solroed            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                2858
2050    .  Soroe              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Stevns             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                31436
2050    .  Struer             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                20005
2050    .  Svendborg          .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                34294
2050    .  Syddjurs           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                42867
2050    .  Soenderborg        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                54298
2050    .  Thisted            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                37151
2050    .  Toender            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                17147
2050    .  Taarnby            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Vallensbaek        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Varde              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                EPS
2050    .  Vejen              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Vejle              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                60014
2050    .  Vesthimmerlands    .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                17147
2050    .  Viborg             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                22862
2050    .  Vordingborg        .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                60014
2050    .  Aeroe              .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                5716
2050    .  Aabenraa           .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                20005
2050    .  Aalborg            .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                62872
2050    .  Aarhus             .       WOOD_Gen        .       WOOD_Gen_FLOW                                                                34294







2050    .   Albertslund          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Alleroed             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Assens               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Ballerup             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Billund              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Bornholm             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Broendby             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Broenderslev         .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Christiansoe         .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Dragoer              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Egedal               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Esbjerg              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             405063
2050    .   Fanoe                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Favrskov             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Faxe                 .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Fredensborg          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Fredericia           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Frederiksberg        .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Frederikshavn        .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Frederikssund        .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Furesoe              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Faaborg-Midtfyn      .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Gentofte             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Gladsaxe             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Glostrup             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Greve                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Gribskov             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Guldborgsund         .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Haderslev            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Halsnaes             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hedensted            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Helsingoer           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Herlev               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Herning              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hilleroed            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hjoerring            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Holbaek              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Holstebro            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Horsens              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hvidovre             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hoeje_Taastrup       .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Hoersholm            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Ikast-Brande         .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Ishoej               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Jammerbugt           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Kalundborg           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Kerteminde           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Kolding              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Koebenhavn           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             405063
2050    .   Koege                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Langeland            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Lejre                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Lemvig               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Lolland              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Lyngby-Taarbaek      .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Laesoe               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Mariagerfjord        .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Middelfart           .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Morsoe               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Norddjurs            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Nordfyns             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Nyborg               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Naestved             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Odder                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Odense               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             405063
2050    .   Odsherred            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Randers              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Rebild               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Ringkoebing-Skjern   .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Ringsted             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Roskilde             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Rudersdal            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Roedovre             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Samsoe               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Silkeborg            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Skanderborg          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Skive                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Slagelse             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Solroed              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Soroe                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Stevns               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Struer               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Svendborg            .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Syddjurs             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Soenderborg          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Thisted              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Toender              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Taarnby              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Vallensbaek          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Varde                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Vejen                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Vejle                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Vesthimmerlands      .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Viborg               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Vordingborg          .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Aeroe                .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Aabenraa             .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             EPS
2050    .   Aalborg              .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             405063
2050    .   Aarhus               .       WOOD_PELLETS_Gen        .       WOOD_PELLETS_Gen_FLOW                                             405063











*--




2050    .   Albertslund           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Alleroed              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Assens                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Ballerup              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Billund               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Bornholm              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Broendby              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Broenderslev          .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Christiansoe          .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Dragoer               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Egedal                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Esbjerg               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Fanoe                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Favrskov              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Faxe                  .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Fredensborg           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Fredericia            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Frederiksberg         .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Frederikshavn         .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Frederikssund         .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Furesoe               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Faaborg-Midtfyn       .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Gentofte              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Gladsaxe              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Glostrup              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Greve                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Gribskov              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Guldborgsund          .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Haderslev             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Halsnaes              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Hedensted             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Helsingoer            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Herlev                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Herning               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Hilleroed             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Hjoerring             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Holbaek               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Holstebro             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Horsens               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Hvidovre              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Hoeje_Taastrup        .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Hoersholm             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Ikast-Brande          .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Ishoej                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Jammerbugt            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Kalundborg            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Kerteminde            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Kolding               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Koebenhavn            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Koege                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Langeland             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Lejre                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Lemvig                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Lolland               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Lyngby-Taarbaek       .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Laesoe                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Mariagerfjord         .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Middelfart            .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Morsoe                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Norddjurs             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Nordfyns              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Nyborg                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Naestved              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Odder                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Odense                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Odsherred             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Randers               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Rebild                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Ringkoebing-Skjern    .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Ringsted              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Roskilde              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Rudersdal             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Roedovre              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Samsoe                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Silkeborg             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Skanderborg           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Skive                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Slagelse              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Solroed               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Soroe                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Stevns                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Struer                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Svendborg             .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Syddjurs              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Soenderborg           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Thisted               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Toender               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Taarnby               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Vallensbaek           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Varde                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    52120
2050    .   Vejen                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Vejle                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Vesthimmerlands       .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Viborg                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    52120
2050    .   Vordingborg           .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Aeroe                 .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Aabenraa              .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS
2050    .   Aalborg               .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    26060
2050    .   Aarhus                .       NATURE_AREA_Gen  .       NATURE_AREA_Gen_FLOW                                                    EPS


$offtext
2020    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_20 .    CO2_STO_FLOW_ON                                                         10e6
2020    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_20 .    CO2_STO_FLOW_ON                                                         1e6
2020    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_20 .    CO2_STO_FLOW_ON                                                         7e6
2020    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_20 .    CO2_STO_FLOW_ON                                                         8e6
2020    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_20 .   CO2_STO_FLOW_OFF                                                        8e6
2020    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_20 .   CO2_STO_FLOW_OFF                                                        3e6

2025    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_25 .    CO2_STO_FLOW_ON                                                         10e6
2025    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_25 .    CO2_STO_FLOW_ON                                                         1e6
2025    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_25 .    CO2_STO_FLOW_ON                                                         7e6
2025    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_25 .    CO2_STO_FLOW_ON                                                         8e6
2025    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_25 .   CO2_STO_FLOW_OFF                                                        8e6
2025    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_25 .   CO2_STO_FLOW_OFF                                                        3e6

2030    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_30 .    CO2_STO_FLOW_ON                                                         10e6
2030    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_30 .    CO2_STO_FLOW_ON                                                         1e6
2030    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_30 .    CO2_STO_FLOW_ON                                                         7e6
2030    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_30 .    CO2_STO_FLOW_ON                                                         8e6
2030    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_30 .   CO2_STO_FLOW_OFF                                                        8e6
2030    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_30 .   CO2_STO_FLOW_OFF                                                        3e6

2035    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_35 .    CO2_STO_FLOW_ON                                                         10e6
2035    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_35 .    CO2_STO_FLOW_ON                                                         1e6
2035    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_35 .    CO2_STO_FLOW_ON                                                         7e6
2035    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_35 .    CO2_STO_FLOW_ON                                                         8e6
2035    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_35 .   CO2_STO_FLOW_OFF                                                        8e6
2035    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_35 .   CO2_STO_FLOW_OFF                                                        3e6

2040    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_40 .    CO2_STO_FLOW_ON                                                         10e6
2040    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_40 .    CO2_STO_FLOW_ON                                                         1e6
2040    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_40 .    CO2_STO_FLOW_ON                                                         7e6
2040    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_40 .    CO2_STO_FLOW_ON                                                         8e6
2040    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_40 .   CO2_STO_FLOW_OFF                                                        8e6
2040    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_40 .   CO2_STO_FLOW_OFF                                                        3e6

2045    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_45 .    CO2_STO_FLOW_ON                                                         10e6
2045    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_45 .    CO2_STO_FLOW_ON                                                         1e6
2045    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_45 .    CO2_STO_FLOW_ON                                                         7e6
2045    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_45 .    CO2_STO_FLOW_ON                                                         8e6
2045    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_45 .   CO2_STO_FLOW_OFF                                                        8e6
2045    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_45 .   CO2_STO_FLOW_OFF                                                        3e6

2050    .   DK_Havnsoe_CO2        .       CO2_Storage_Onshore_50 .    CO2_STO_FLOW_ON                                                         10e6
2050    .   DK_Stenlille_CO2      .       CO2_Storage_Onshore_50 .    CO2_STO_FLOW_ON                                                         1e6
2050    .   DK_Roedby_CO2         .       CO2_Storage_Onshore_50 .    CO2_STO_FLOW_ON                                                         7e6
2050    .   DK_Gassum_CO2         .       CO2_Storage_Onshore_50 .    CO2_STO_FLOW_ON                                                         8e6
2050    .   DK_Greensand_CO2      .       CO2_Storage_Offshore_50 .   CO2_STO_FLOW_OFF                                                        8e6
2050    .   DK_Bifrost_CO2        .       CO2_Storage_Offshore_50 .   CO2_STO_FLOW_OFF                                                        3e6


;


*Equation to ensure that in those areas where there is written no potential, there is no consumption of resource
SOSIBUBOUND(Y,AAA,PROC,FLOW,'ILOUPFX_UP')$(AAAOPTIFLOW(AAA) AND (NOT SOSIBUBOUND(Y,AAA,PROC,FLOW,'ILOUPFX_UP')) AND SUM(IAE,SOSIBUBOUND(Y,IAE,PROC,FLOW,'ILOUPFX_UP')))=EPS;
SOSIBUBOUND(Y,AAA,PROC,FLOW,'ILOUPFX_FX')$(AAAOPTIFLOW(AAA) AND (NOT SOSIBUBOUND(Y,AAA,PROC,FLOW,'ILOUPFX_FX')) AND SUM(IAE,SOSIBUBOUND(Y,IAE,PROC,FLOW,'ILOUPFX_FX')))=EPS;

