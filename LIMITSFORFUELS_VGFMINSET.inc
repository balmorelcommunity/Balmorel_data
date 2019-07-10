SET LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,CCCRRRAAA,FFF) 'Sets of which a combination of minima are set'

/
$ifi not %INDUSTRY%==yes $goto noindustry
NUMCONMIN1                                                                                                                                     .    DK1_Large_PHH .    NATGAS
$ifi not %COMBTECH%==yes $goto endcombtech
NUMCONMIN1                                                                                                                                     .    DK1_Large_PHH .    BIONG
$label endcombtech
$label noindustry
/
;
$ifi not %INDUSTRY%==yes $goto noindustry2
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_NoDH_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK2_Large_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK2_NoDH_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
$label noindustry2
;
