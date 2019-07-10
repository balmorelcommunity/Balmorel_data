TABLE LIMITSFORFUELS_GMINF(YYY,CCCRRRAAA,FFF) 'Minimum fuel use (GJ) per year for several fuels'

                                                                                                 NATGAS
$ifi not %INDUSTRY%==yes $goto noindustry
2016.DK1_Large_PHH                                                                               916943.7186
2016.DK2_Large_PHH                                                                               546296.95296
2016.DK1_NoDH_PHH                                                                                1998325.45404
2016.DK2_NoDH_PHH                                                                                579071.84796
$label noindustry
;
LIMITSFORFUELS_GMINF(YYY,CCCRRRAAA,FFF)=LIMITSFORFUELS_GMINF('2016',CCCRRRAAA,FFF);
