SET                                                                                                                                                 ACNETWORKS                           'Defines the three AC-Subnetworks in Scandinavia, central Europe and Baltics defined by the PyPSA clustering'
/
ACSCAND
ACEUR
ACBALT
/
;



*SET                                                                                                                                                 RRR                                  'All regions included in the AC-power flow calculation'
*/
*DK2
*FIN
*NO1
*NO2
*NO3
*NO4
*NO5
*SE1
*SE2
*SE3
*SE4
*DK1
*DE4-N
*DE4-E
*DE4-S
*DE4-W
*NL
*PL
*UK
*BE
*FR
*EE
*LV
*LT
*/
*;


ALIAS (RRR,IRRRALIAS);



SET LINES                                                                                                                                           All AC lines in the Balmorel system'
/
ACLine1                                                                                                                                             '*                                    AC_DK2_SE4                                                                                                   DK2                          SE4           '
ACLine2                                                                                                                                             '*                                    AC_FIN_NO4                                                                                                   FIN                          NO4           '
ACLine3                                                                                                                                             '*                                    AC_FIN_SE1                                                                                                   FIN                          SE1           '
ACLine4                                                                                                                                             '*                                    AC_FIN_SE3                                                                                                   FIN                          SE3           '
ACLine5                                                                                                                                             '*                                    AC_NO1_NO2                                                                                                   NO1                          NO2           '
ACLine6                                                                                                                                             '*                                    AC_NO1_NO5                                                                                                   NO1                          NO5           '
ACLine7                                                                                                                                             '*                                    AC_NO1_SE3                                                                                                   NO1                          SE3           '
ACLine8                                                                                                                                             '*                                    AC_NO2_NO5                                                                                                   NO2                          NO5           '
ACLine9                                                                                                                                             '*                                    AC_NO3_NO4                                                                                                   NO3                          NO4           '
ACLine10                                                                                                                                            '*                                    AC_NO3_NO5                                                                                                   NO3                          NO5           '
ACLine11                                                                                                                                            '*                                    AC_NO3_SE2                                                                                                   NO3                          SE2           '
ACLine12                                                                                                                                            '*                                    AC_NO4_SE1                                                                                                   NO4                          SE1           '
ACLine13                                                                                                                                            '*                                    AC_NO4_SE2                                                                                                   NO4                          SE2           '
ACLine14                                                                                                                                            '*                                    AC_SE1_SE2                                                                                                   SE1                          SE2           '
ACLine15                                                                                                                                            '*                                    AC_SE2_SE3                                                                                                   SE2                          SE3           '
ACLine16                                                                                                                                            '*                                    AC_SE3_SE4                                                                                                   SE3                          SE4           '
ACLine17                                                                                                                                            '*                                    AC_BE_FR                                                                                                     BE                           FR            '
ACLine18                                                                                                                                            '*                                    AC_BE_NL                                                                                                     BE                           NL            '
ACLine19                                                                                                                                            '*                                    AC_DES_DEW                                                                                                   DE4-S                        DE4-W         '
ACLine20                                                                                                                                            '*                                    AC_DES_DEE                                                                                                   DE4-S                        DE4-E         '
ACLine21                                                                                                                                            '*                                    AC_DES_FR                                                                                                    DE4-S                        FR            '
ACLine22                                                                                                                                            '*                                    AC_DEW_DEE                                                                                                   DE4-W                        DE4-E         '
ACLine23                                                                                                                                            '*                                    AC_DEW_DEN                                                                                                   DE4-W                        DE4-N         '
ACLine24                                                                                                                                            '*                                    AC_DEW_NL                                                                                                    DE4-W                        NL            '
ACLine25                                                                                                                                            '*                                    AC_DEE_DEN                                                                                                   DE4-E                        DE4-N         '
ACLine26                                                                                                                                            '*                                    AC_DEE_PL                                                                                                    DE4-E                        PL            '
ACLine27                                                                                                                                            '*                                    AC_DEN_DK1                                                                                                   DE4-N                        DK1           '
ACLine28                                                                                                                                            '*                                    AC_EE_LV                                                                                                     EE                           LV            '
ACLine29                                                                                                                                            '*                                    AC_LT_LV                                                                                                     LT                           LV            '
/
;



ALIAS(LINES,ILINES);

SET LINESRRR(LINES,IRRRE,IRRRI)                                                                                                                                                              'AC lines which are connecting regions'
/
ACLine1                                                                                                                                             .                                    DK2                                                                                                          .                            SE4
ACLine2                                                                                                                                             .                                    FIN                                                                                                          .                            NO4
ACLine3                                                                                                                                             .                                    FIN                                                                                                          .                            SE1
ACLine4                                                                                                                                             .                                    FIN                                                                                                          .                            SE3
ACLine5                                                                                                                                             .                                    NO1                                                                                                          .                            NO2
ACLine6                                                                                                                                             .                                    NO1                                                                                                          .                            NO5
ACLine7                                                                                                                                             .                                    NO1                                                                                                          .                            SE3
ACLine8                                                                                                                                             .                                    NO2                                                                                                          .                            NO5
ACLine9                                                                                                                                             .                                    NO3                                                                                                          .                            NO4
ACLine10                                                                                                                                            .                                    NO3                                                                                                          .                            NO5
ACLine11                                                                                                                                            .                                    NO3                                                                                                          .                            SE2
ACLine12                                                                                                                                            .                                    NO4                                                                                                          .                            SE1
ACLine13                                                                                                                                            .                                    NO4                                                                                                          .                            SE2
ACLine14                                                                                                                                            .                                    SE1                                                                                                          .                            SE2
ACLine15                                                                                                                                            .                                    SE2                                                                                                          .                            SE3
ACLine16                                                                                                                                            .                                    SE3                                                                                                          .                            SE4
ACLine17                                                                                                                                            .                                    BE                                                                                                           .                            FR
ACLine18                                                                                                                                            .                                    BE                                                                                                           .                            NL
ACLine19                                                                                                                                            .                                    DE4-S                                                                                                        .                            DE4-W
ACLine20                                                                                                                                            .                                    DE4-S                                                                                                        .                            DE4-E
ACLine21                                                                                                                                            .                                    DE4-S                                                                                                        .                            FR
ACLine22                                                                                                                                            .                                    DE4-W                                                                                                        .                            DE4-E
ACLine23                                                                                                                                            .                                    DE4-W                                                                                                        .                            DE4-N
ACLine24                                                                                                                                            .                                    DE4-W                                                                                                        .                            NL
ACLine25                                                                                                                                            .                                    DE4-E                                                                                                        .                            DE4-N
ACLine26                                                                                                                                            .                                    DE4-E                                                                                                        .                            PL
ACLine27                                                                                                                                            .                                    DE4-N                                                                                                        .                            DK1
ACLine28                                                                                                                                            .                                    EE                                                                                                           .                            LV
ACLine29                                                                                                                                            .                                    LT                                                                                                           .                            LV
/
;

SET AC2RRR(ACNETWORKS,RRR)                                                                                                                                                               'Coupling networks and regions'
/
ACSCAND                                                                                                                                             .                                 DK2
ACSCAND                                                                                                                                             .                                 FIN
ACSCAND                                                                                                                                             .                               NO1
ACSCAND                                                                                                                                             .                                  NO2
ACSCAND                                                                                                                                             .                                    (                                                                                                            NO3   )
ACSCAND                                                                                                                                             .                                    (                                                                                                            NO4   )
ACSCAND                                                                                                                                             .                                    (                                                                                                            NO5  )
ACSCAND                                                                                                                                             .                                    (                                                                                                            SE4   )
ACSCAND                                                                                                                                             .                                    (                                                                                                            SE1  )
ACSCAND                                                                                                                                             .                                    (                                                                                                            SE2   )
ACSCAND                                                                                                                                             .                                    (                                                                                                            SE3   )
ACEUR                                                                                                                                               .                                    (                                                                                                            FR    )
ACEUR                                                                                                                                               .                                    (                                                                                                            BE     )
ACEUR                                                                                                                                               .                                    (                                                                                                            DE4-S   )
ACEUR                                                                                                                                               .                                    (                                                                                                            DE4-W  )
ACEUR                                                                                                                                               .                                    (                                                                                                            DE4-N   )
ACEUR                                                                                                                                               .                                    (                                                                                                            DE4-E   )
ACEUR                                                                                                                                               .                                    (                                                                                                            PL   )
ACEUR                                                                                                                                               .                                    (                                                                                                            NL  )
ACEUR                                                                                                                                               .                                    (                                                                                                            DK1  )
ACBALT                                                                                                                                              .                                    (                                                                                                            LV  )
ACBALT                                                                                                                                              .                                    (                                                                                                            EE   )
ACBALT                                                                                                                                              .                                    (                                                                                                            LT    )
/
;

SET AC2LINES(LINES,ACNETWORKS)                                                                                                                                                           'AC lines connected to AC networks'
/
ACLine1                                                                                                                                             .                                    ACSCAND
ACLine2                                                                                                                                             .                                    ACSCAND
ACLine3                                                                                                                                             .                                    ACSCAND
ACLine4                                                                                                                                             .                                    ACSCAND
ACLine5                                                                                                                                             .                                    ACSCAND
ACLine6                                                                                                                                             .                                    ACSCAND
ACLine7                                                                                                                                             .                                    ACSCAND
ACLine8                                                                                                                                             .                                    ACSCAND
ACLine9                                                                                                                                             .                                    ACSCAND
ACLine10                                                                                                                                            .                                    ACSCAND
ACLine11                                                                                                                                            .                                    ACSCAND
ACLine12                                                                                                                                            .                                    ACSCAND
ACLine13                                                                                                                                            .                                    ACSCAND
ACLine14                                                                                                                                            .                                    ACSCAND
ACLine15                                                                                                                                            .                                    ACSCAND
ACLine16                                                                                                                                            .                                    ACSCAND
ACLine17                                                                                                                                            .                                    ACEUR
ACLine18                                                                                                                                            .                                    ACEUR
ACLine19                                                                                                                                            .                                    ACEUR
ACLine20                                                                                                                                            .                                    ACEUR
ACLine21                                                                                                                                            .                                    ACEUR
ACLine22                                                                                                                                            .                                    ACEUR
ACLine23                                                                                                                                            .                                    ACEUR
ACLine24                                                                                                                                            .                                    ACEUR
ACLine25                                                                                                                                            .                                    ACEUR
ACLine26                                                                                                                                            .                                    ACEUR
ACLine27                                                                                                                                            .                                    ACEUR
ACLine28                                                                                                                                            .                                    ACBALT
ACLine29                                                                                                                                            .                                    ACBALT
/
;

Parameter
FB_ACPTDF(ACNETWORKS,LINES,RRR)                                                                                                                                                                                                                                                                       ;
TABLE                                                                                                                                               FB_ACPTDF_ACSCAND(LINES,RRR)                                                                                                                                                                          PTDF of the Scandinavian network'
                                                                                                                                                    DK2                                  FIN                                                                                                          NO1                          NO2         NO3        NO4                               NO5         SE1        SE2         SE3          SE4
ACLine1                                                                                                                                             0                                    -1                                                                                                           -1                           -1          -1         -1                                -1          -1         -1          -1           -1
ACLine2                                                                                                                                             0                                    0.0728452                                                                                                    -0.00793453                  -0.0088968  -0.0218413 -0.0632012                        -0.0112184  0.00326254 -0.00301149 1.38778E-017 2.08167E-017
ACLine3                                                                                                                                             0                                    0.617812                                                                                                     -0.0121094                   -0.013578   -0.0333335 -0.047485                         -0.0171211  -0.13639   -0.0432267  0            5.55112E-017
ACLine4                                                                                                                                             0                                    0.309343                                                                                                     0.020044                     0.0224748   0.0551747  0.110686                          0.0283395   0.133127   0.0462382   -1.1102E-016 -5.5511E-017
ACLine5                                                                                                                                             0                                    -0.0706265                                                                                                   0.198921                     -0.729579   -0.290757  -0.146871                         -0.557076   -0.0827966 -0.0583658  8.88178E-016 0
ACLine6                                                                                                                                             0                                    -0.0136207                                                                                                   0.0383631                    -0.00436042 -0.0560742 -0.0283249                        -0.107435   -0.0159678 -0.0112562  1.11022E-016 5.55112E-017
ACLine7                                                                                                                                             0                                    0.0842472                                                                                                    0.762716                     0.733939    0.346831   0.175196                          0.664512    0.0987644  0.069622    -9.992E-016  -6.1062E-016
ACLine8                                                                                                                                             0                                    -0.0706265                                                                                                   0.198921                     0.270421    -0.290757  -0.146871                         -0.557076   -0.0827966 -0.0583658  4.44089E-016 2.22045E-016
ACLine9                                                                                                                                             0                                    -0.105848                                                                                                    0.0778642                    0.0873073   0.214336   -0.32092                          0.11009     -0.113545  -0.0168834  -2.2204E-016 -8.3267E-017
ACLine10                                                                                                                                            0                                    0.0842472                                                                                                    -0.237284                    -0.266061   0.346831   0.175196                          -0.335488   0.0987644  0.069622    1.11022E-016 0
ACLine11                                                                                                                                            0                                    0.0216011                                                                                                    0.15942                      0.178754    0.438833   0.145725                          0.225399    0.0147804  -0.0527386  -3.3307E-016 -2.2204E-016
ACLine12                                                                                                                                            0                                    -0.0689906                                                                                                   0.055904                     0.0626838   0.153886   0.488234                          0.0790408   -0.146948  -0.0126559  -1.1102E-016 -1.1102E-016
ACLine13                                                                                                                                            0                                    0.0359874                                                                                                    0.0140257                    0.0157267   0.0386084  0.127644                          0.0198305   0.0366656  -0.00723902 -1.3878E-017 -4.1633E-017
ACLine14                                                                                                                                            0                                    0.548822                                                                                                     0.0437945                    0.0491058   0.120553   0.440749                          0.0619197   0.716662   -0.0558826  0            -1.1102E-016
ACLine15                                                                                                                                            0                                    0.60641                                                                                                      0.21724                      0.243586    0.597994   0.714118                          0.307149    0.768108   0.88414     -1.3323E-015 -8.8818E-016
ACLine16                                                                                                                                            0                                    1                                                                                                            1                            1           1          1                                 1           1          1           1            -1.1102E-015
;




TABLE                                                                                                                                               FB_ACPTDF_ACEUR(LINES,RRR)                                                                                                                                                                            PTDF of the European network'
                                                                                                                                                    BE                                   DE4-S                                                                                                        DE4-W                        DE4-E       DE4-N      DK1                               FR          NL         PL
ACLine17                                                                                                                                            0                                    -0.0171705                                                                                                   -0.0115988                   -0.00825387 -0.0108202 -0.0108202                        -0.18389    -0.0068756 -0.00327068
ACLine18                                                                                                                                            0                                    -0.0796181                                                                                                   -0.276127                    -0.152372   -0.247322  -0.247322                         -0.0171775  -0.570899  -0.0603789
ACLine19                                                                                                                                            0                                    0.109519                                                                                                     -0.562711                    -0.274083   -0.49553   -0.49553                          0.0236285   -0.333567  -0.108608
ACLine20                                                                                                                                            0                                    0.0208217                                                                                                    -0.0247499                   -0.143962   -0.0524979 -0.0524979                        0.00449225  -0.0146714 -0.0570464
ACLine21                                                                                                                                            0                                    0.0747341                                                                                                    0.0504834                    0.0359247   0.0470947  0.0470947                         -0.199624   0.0299258  0.0142355
ACLine22                                                                                                                                            0                                    0.0198513                                                                                                    0.106995                     -0.283123   0.0161907  0.0161907                         0.00428288  0.0634251  -0.11219
ACLine23                                                                                                                                            0                                    0.0100498                                                                                                    0.0541666                    -0.143332   -0.759042  -0.759042                         0.00216822  0.0321091  -0.0567966
ACLine24                                                                                                                                            0                                    0.0796181                                                                                                    0.276127                     0.152372    0.247322   0.247322                          0.0171775   -0.429101  0.0603789
ACLine25                                                                                                                                            0                                    -0.0100498                                                                                                   -0.0541666                   0.143332    -0.240958  -0.240958                         -0.00216822 -0.0321091 0.0567966
ACLine26                                                                                                                                            0                                    0.024593                                                                                                     0.0661394                    0.208284    0.0992251  0.0992251                         0.00530589  0.0392064  -0.313725
ACLine27                                                                                                                                            0                                    0                                                                                                            0                            0           0          -1                                0           0          0
;


TABLE                                                                                                                                               FB_ACPTDF_ACBALT(LINES,RRR)                                                                                                                                                                           PTDF of the Baltic network'
                                                                                                                                                    EE                                   LT                                                                                                           LV
ACLine28                                                                                                                                            0                                    -1                                                                                                           -1
ACLine29                                                                                                                                            0                                    1                                                                                                            0
;



FB_ACPTDF('ACSCAND',LINES,RRR)                                                                                                                                                           =                                                                                                            FB_ACPTDF_ACSCAND(LINES,RRR)                                                          ;
FB_ACPTDF('ACEUR',LINES,RRR)                                                                                                                                                             =                                                                                                            FB_ACPTDF_ACEUR(LINES,RRR)                                                            ;
FB_ACPTDF('ACBALT',LINES,RRR)                                                                                                                                                            =                                                                                                            FB_ACPTDF_ACBALT(LINES,RRR)                                                           ;




















