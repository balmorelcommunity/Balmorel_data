PARAMETER INDHEAT_DH(YYY,INDHEAT_AAA)  'Annual brutto individual heat consumption';

*Split between individual and apartments are 73% vs 27%
*DH accounts for 58% of the total heat demand in DK1_IND, therefore indheat must be 73% of this demand (42/58)
INDHEAT_DH(Y,'DK1_NoDH_ind')  =                                                                               0.73255473689711   *0.73*SUM((RRR,AAA)$(RRRAAA(RRR,'DK1_NoDH_ind') AND RRRAAA(RRR,AAA)),DH(Y,AAA,'RESH'));
*DH accounts for 94% of the total heat demand in DK1_apart, therefore indheat must be 6% of this demand (6/94)
INDHEAT_DH(Y,'DK1_NoDH_apart')  =                                                                               0.0626504471964634 *0.27*SUM((RRR,AAA)$(RRRAAA(RRR,'DK1_NoDH_ind') AND RRRAAA(RRR,AAA)),DH(Y,AAA,'RESH'));

*Split between individual and apartments are 45% vs 55%
*DH accounts for 32% of the total heat demand in DK2_ind, therefore indheat must be 212% of this demand (68/32)
INDHEAT_DH(Y,'DK2_NoDH_ind')  =                                                                               2.12352780658189   *0.45*SUM((RRR,AAA)$(RRRAAA(RRR,'DK2_NoDH_ind') AND RRRAAA(RRR,AAA)),DH(Y,AAA,'RESH'));
*DH accounts for 87% of the total heat demand in DK2, therefore indheat must be 14% of this demand (13/87)
INDHEAT_DH(Y,'DK2_NoDH_apart')  =                                                                               0.143694914523156  *0.55*SUM((RRR,AAA)$(RRRAAA(RRR,'DK2_NoDH_ind') AND RRRAAA(RRR,AAA)),DH(Y,AAA,'RESH'));
