TABLE KPOTSTEP_FLH(CCCRRRAAA,TECH_GROUP,KPOTSTEP) 'multiplier to FLH (1 equals no change)'

                                                 STEP1            STEP2           STEP3
*NO1.WINDTURBINE_ONSHORE                          0.749273854      1               1.250726146           !! 20% top, bottom
NO1.WINDTURBINE_ONSHORE                          0.804392534      1               1.195607466           !! 33% top, bottom

;



KPOTSTEP_FLH(IR,TECH_GROUP,KPOTSTEP)$(NOT  KPOTSTEP_FLH(IR,TECH_GROUP,KPOTSTEP)) =   KPOTSTEP_FLH('NO1',TECH_GROUP,KPOTSTEP)  ;
