PARAMETER INDHEAT_DHCOST(YYY,AAA,INDHEAT_AAA,INDHEAT_DHEXPAREA)         'Potential of DH expansion (MWh)';
$ontext
Discountrate
0.04                                                                                                       DH areas                                                                                                                                           Supplying one household MDKK/GWh         Annualised
Lifetime                                                                                                   DK1                                                                    DK2                                                                  Egedal 29500                   1.89102564102564 1775.61093054051
40                                                                                                         SF                                  MF                                 SF                                MF                                 Stefan 23470.973673144         1.50454959443231 1412.7226238801
                                                                                                           Pot (GWh)          Cost (MDKK/GWh)  Pot (GWh)        Cost (MDKK/GWh)   Pot (GWh)        Cost (MDKK/GWh)  Pot (GWh)        Cost (MDKK/GWh)
Large                                                                                                      24.06154914        1.50454959443231 19.48618026      0.771365490796296 157.104562729999 1.49753434853662 379.581710289999 0.372339741796363
Medium                                                                                                     148.93981799       1.45333589715098 55.1194852399999 1.0354474783553   123.95239764     1.46686520359269 94.0684903799998 0.835117877226001
MedSmall                                                                                                   41.20847773        1.46702456218103 22.48966714      0.673802769319245 70.6044447699998 1.53442331219964 41.0485440899999 1.1039443908326
Small                                                                                                      107.13794813       1.49253569618461 20.55759145      1.56076717829705  14.63715566      1.51601687619137 5.96148607       2.04691780819678
Rural                                                                                                      349.616497929999   1.50319855073094 73.3387110499999 1.3846119129469   181.87678614     1.53715707723579 71.9755756599999 1.08357730083906
Annuity                                                                                                    0.0505234893244222
                                                                                                           Next-to-DH areas
Lifetime                                                                                                   DK1                                                                    DK2
40                                                                                                         SF                                  MF                                 SF                                MF
                                                                                                           Pot (GWh)          Cost (MDKK/GWh)  Pot (GWh)        Cost (MDKK/GWh)   Pot (GWh)        Cost (MDKK/GWh)  Pot (GWh)        Cost (MDKK/GWh)
Large                                                                                                      88.3704060300003   3.69750837156254 5.55229111000001 3.69750837156254  78.72920529      3.74682145088914 55.7421587599999 5.86488138793261
Medium                                                                                                     154.31386379       11.2718424951485 17.845137        8.11585059010479  253.622357799999 3.27488472742895 57.4397245199998 3.88830215309261
MedSmall                                                                                                   97.2856845999999   10.3175491940635 30.24929225      4.63237490612624  194.40611329     4.4737122213424  76.56456236      2.89801074688674
Small                                                                                                      92.0475341999996   17.5763571533326 6.93514098999999 13.7171194905881  248.919319509999 2.57781922399761 32.94509706      2.68491057146071
Rural                                                                                                      686.600657729998   7.44077923301874 61.4298584499998 6.19741588998958  1454.28608559    2.58884176275523 449.192755019999 2.16773747521624
Annuity                                                                                                    0.0505234893244222
$offtext
INDHEAT_DHCOST(YYY,'DK1_Large','DK1_NoDH_ind','INSIDEDH')   =                                              10.1828660914085   ;
INDHEAT_DHCOST(YYY,'DK1_Medium','DK1_NoDH_ind','INSIDEDH')  =                                              9.83624925445508   ;
INDHEAT_DHCOST(YYY,'DK1_MedSmall','DK1_NoDH_ind','INSIDEDH')=                                              9.92889481661333   ;
INDHEAT_DHCOST(YYY,'DK1_Small','DK1_NoDH_ind','INSIDEDH')   =                                              10.1015554336908   ;
INDHEAT_DHCOST(YYY,'DK1_Rural','DK1_NoDH_ind','INSIDEDH')   =                                              10.1737221607959   ;
INDHEAT_DHCOST(YYY,'DK1_Large','DK1_NoDH_apart','INSIDEDH')   =                                            5.22063980435022   ;
INDHEAT_DHCOST(YYY,'DK1_Medium','DK1_NoDH_apart','INSIDEDH')  =                                            7.0079597613776    ;
INDHEAT_DHCOST(YYY,'DK1_MedSmall','DK1_NoDH_apart','INSIDEDH')=                                            4.56033047856222   ;
INDHEAT_DHCOST(YYY,'DK1_Small','DK1_NoDH_apart','INSIDEDH')   =                                            10.5633494803214   ;
INDHEAT_DHCOST(YYY,'DK1_Rural','DK1_NoDH_apart','INSIDEDH')   =                                            9.37112192930212   ;
INDHEAT_DHCOST(YYY,'DK2_Large','DK2_NoDH_ind','INSIDEDH')   =                                              10.1353865601133   ;
INDHEAT_DHCOST(YYY,'DK2_Medium','DK2_NoDH_ind','INSIDEDH')  =                                              9.92781626980331   ;
INDHEAT_DHCOST(YYY,'DK2_MedSmall','DK2_NoDH_ind','INSIDEDH')=                                              10.3850528912342   ;
INDHEAT_DHCOST(YYY,'DK2_Small','DK2_NoDH_ind','INSIDEDH')   =                                              10.2604772216877   ;
INDHEAT_DHCOST(YYY,'DK2_Rural','DK2_NoDH_ind','INSIDEDH')   =                                              10.4035551482495   ;
INDHEAT_DHCOST(YYY,'DK2_Large','DK2_NoDH_apart','INSIDEDH')   =                                            2.52001379366465   ;
INDHEAT_DHCOST(YYY,'DK2_Medium','DK2_NoDH_apart','INSIDEDH')  =                                            5.65211910980067   ;
INDHEAT_DHCOST(YYY,'DK2_MedSmall','DK2_NoDH_apart','INSIDEDH')=                                            7.4715502538495    ;
INDHEAT_DHCOST(YYY,'DK2_Small','DK2_NoDH_apart','INSIDEDH')   =                                            13.853640995365    ;
INDHEAT_DHCOST(YYY,'DK2_Rural','DK2_NoDH_apart','INSIDEDH')   =                                            7.33370478112904   ;

INDHEAT_DHCOST(YYY,'DK1_Large','DK1_NoDH_ind','NEARDH')   =                                                25.0249195897658   ;
INDHEAT_DHCOST(YYY,'DK1_Medium','DK1_NoDH_ind','NEARDH')  =                                                76.288387671829    ;
INDHEAT_DHCOST(YYY,'DK1_MedSmall','DK1_NoDH_ind','NEARDH')=                                                69.8296833972493   ;
INDHEAT_DHCOST(YYY,'DK1_Small','DK1_NoDH_ind','NEARDH')   =                                                118.957654788832   ;
INDHEAT_DHCOST(YYY,'DK1_Rural','DK1_NoDH_ind','NEARDH')   =                                                50.3595619751915   ;
INDHEAT_DHCOST(YYY,'DK1_Large','DK1_NoDH_apart','NEARDH')   =                                              25.0249195897658   ;
INDHEAT_DHCOST(YYY,'DK1_Medium','DK1_NoDH_apart','NEARDH')  =                                              54.9284783185218   ;
INDHEAT_DHCOST(YYY,'DK1_MedSmall','DK1_NoDH_apart','NEARDH')=                                              31.3521425474066   ;
INDHEAT_DHCOST(YYY,'DK1_Small','DK1_NoDH_apart','NEARDH')   =                                              92.8381433549302   ;
INDHEAT_DHCOST(YYY,'DK1_Rural','DK1_NoDH_apart','NEARDH')   =                                              41.9444173552436   ;
INDHEAT_DHCOST(YYY,'DK2_Large','DK2_NoDH_ind','NEARDH')   =                                                25.3586729503702   ;
INDHEAT_DHCOST(YYY,'DK2_Medium','DK2_NoDH_ind','NEARDH')  =                                                22.1645818573302   ;
INDHEAT_DHCOST(YYY,'DK2_MedSmall','DK2_NoDH_ind','NEARDH')=                                                30.2783056470904   ;
INDHEAT_DHCOST(YYY,'DK2_Small','DK2_NoDH_ind','NEARDH')   =                                                17.4468080433936   ;
INDHEAT_DHCOST(YYY,'DK2_Rural','DK2_NoDH_ind','NEARDH')   =                                                17.5214091310358   ;
INDHEAT_DHCOST(YYY,'DK2_Large','DK2_NoDH_apart','NEARDH')   =                                              39.693807393465    ;
INDHEAT_DHCOST(YYY,'DK2_Medium','DK2_NoDH_apart','NEARDH')  =                                              26.3162213425187   ;
INDHEAT_DHCOST(YYY,'DK2_MedSmall','DK2_NoDH_apart','NEARDH')=                                              19.6138801115061   ;
INDHEAT_DHCOST(YYY,'DK2_Small','DK2_NoDH_apart','NEARDH')   =                                              18.1716075812757   ;
INDHEAT_DHCOST(YYY,'DK2_Rural','DK2_NoDH_apart','NEARDH')   =                                              14.6713544792013   ;

$ifi not %TECHALT%=="_lowCostExpansion" $goto lowCostExpansion
INDHEAT_DHCOST(YYY,AAA,INDHEAT_AAA,INDHEAT_DHEXPAREA) = INDHEAT_DHCOST(YYY,AAA,INDHEAT_AAA,INDHEAT_DHEXPAREA)*0.5;
$label lowCostExpansion