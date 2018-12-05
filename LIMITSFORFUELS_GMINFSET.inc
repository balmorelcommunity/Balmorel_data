SET LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,CCCRRRAAA,FFF)                                                                                                        
                                                                                                                                                                           
                                                                                                                                                                           
/                                                                                                                                                                          
NUMCONMIN1                                                                                                                                   .    DK1_Large     .    NATGAS
$ifi not %HEATTRANS%==yes $goto noheattrans                                                                                                                                
NUMCONMIN1                                                                                                                                   .    DK1_Large_PHH .    NATGAS
$label noheattrans                                                                                                                                                         
/                                                                                                                                                                          
;                                                                                                                                                                          
$ifi not %HEATTRANS%==yes $goto noheattrans2                                                                                                                               
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_NoDH_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                                
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK2_Large_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                               
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK2_NoDH_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                                
$label noheattrans2                                                                                                                                                        
