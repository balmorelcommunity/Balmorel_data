SET LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,CCCRRRAAA,FFF)                                                                                                        
                                                                                                                                                                           
                                                                                                                                                                           
/                                                                                                                                                                          
$ifi not %INDUSTRY%==yes $goto noindustry                                                                                                                                  
NUMCONMIN1                                                                                                                                   .    DK1_Large_PHH .    NATGAS
$label noindustry                                                                                                                                                          
/                                                                                                                                                                          
;                                                                                                                                                                          
$ifi not %INDUSTRY%==yes $goto noindustry2                                                                                                                                 
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_NoDH_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                                
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK2_Large_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                               
LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK2_NoDH_PHH',FFF)=LIMITSFORFUELS_GMINFSET(LIMITSFORFUELS_NUMCONMIN,'DK1_Large_PHH',FFF);                                
$label noindustry2                                                                                                                                                         