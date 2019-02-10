TABLE TECHGROUPKPOT_STEP(CCCRRRAAA,TECH_GROUP,KPOTSTEP) 'share of TECHGROUPKPOT belonging to each step (fraction)'

** NOTE! for each country and techgroup the steps should sum up to 1


                                                 STEP1   STEP2   STEP3
*NO1.WINDTURBINE_ONSHORE                          0.02    0.06    0.02             !! 20% top, bottom
NO1.WINDTURBINE_ONSHORE                          0.3333  0.3334  0.3333           !! 33%

;


TECHGROUPKPOT_STEP(IR,TECH_GROUP,KPOTSTEP)$(NOT  TECHGROUPKPOT_STEP(IR,TECH_GROUP,KPOTSTEP)) =   TECHGROUPKPOT_STEP('NO1',TECH_GROUP,KPOTSTEP)  ;

