TABLE LIMITSFORFUELS_GMINF(YYY,CCCRRRAAA,FFF) 'Minimum fuel use (GJ) per year for several fuels'
* Since applied with LIMITSFORFUELS, NATGAS can also be other Methane

                                                                                                 NATGAS    /*   Share: 0.1       A certain share of the natural gas cannot be repllaced, 10% for now, so 0.1 multiplication with the gas use today */
2016.DK1_Large_PHH                                                                               4092400.198 /*          409241.98 */
2016.DK2_Large_PHH                                                                               1303400.186 /*          130341.86 */
2016.DK1_NoDH_PHH                                                                                7384400.975 /*          738449.75 */
2016.DK2_NoDH_PHH                                                                                1606000.038 /*          160600.38 */
;
LIMITSFORFUELS_GMINF(YYY,CCCRRRAAA,FFF)=LIMITSFORFUELS_GMINF('2016',CCCRRRAAA,FFF);
