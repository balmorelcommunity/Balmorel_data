SET LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,CCCRRRAAA,FFF) 'Sets of which a combination of minima are set'
/
NUMCONMIN1                                                                                                           .    DK1_Large_PHH . BIOGAS_UP
NUMCONMIN1                                                                                                           .    DK1_Large_PHH . BIOGAS_H2
NUMCONMIN1                                                                                                           .    DK1_Large_PHH . THERMGAS_UP
NUMCONMIN1                                                                                                           .    DK1_Large_PHH . THERMGAS_H2
NUMCONMIN1                                                                                                           .    DK1_Large_PHH . NATGAS
/
;
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_NoDH_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK2_Large_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK2_NoDH_PHH',FFF)=LIMITSFORFUELS_VGFMINSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);
