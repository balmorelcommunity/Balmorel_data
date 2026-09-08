* -----------------------------------------------------
* XLS2GMS Version 1.5,  August 2002
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     16.0
* Workbook:    \\nmbu.no\my\home\Documents\Prosjekter\Flex4RES\Demand response\Demand_response_inputdata22.xlsx
* Sheet:       DR_SETS
* Range:       $A$1:$A$58
* -----------------------------------------------------
SET DR_TECHNOLOGIES          'Demand response technology'
/    
DR_SHIFT_HH_WET
DR_SHIFT_HH_COOL
DR_SHIFT_HH_WATER
DR_SHIFT_HH_HEAT
DR_SHED_IND_FERRO
DR_SHED_IND_ALUMINIUM
DR_SHED_IND_SILICON
DR_SHED_IND_OTHER
DR_SHED_IND_MECHPULP
DR_SHIFT_IND_MECHPULP
DR_SHIFT_TERI_VENT
DR_SHIFT_TERI_COOL
DR_SHIFT_TERI_WATER
DR_SHIFT_TERI_HEAT
/ ;  
     
SET DR_TECH(DR_TECHNOLOGIES)               'Demand response technology in the simulation'
/    
DR_SHIFT_HH_WET
DR_SHIFT_HH_COOL
DR_SHIFT_HH_WATER
DR_SHIFT_HH_HEAT
DR_SHED_IND_FERRO
DR_SHED_IND_ALUMINIUM
DR_SHED_IND_SILICON
DR_SHED_IND_OTHER
DR_SHED_IND_MECHPULP
DR_SHIFT_IND_MECHPULP
DR_SHIFT_TERI_VENT
DR_SHIFT_TERI_COOL
DR_SHIFT_TERI_WATER
DR_SHIFT_TERI_HEAT
/ ;  
     
     
SET DR_DATASET
/    
DRTYPE
DRFE 
DRUSER
DRINVCOST
DROMVCOST
DROMFCOST
DRLIFETIME
DRINTERESTRATE
DRTOI
DRSHIFTNEXT
DRSHIFTPREV
DRWEEKLYCYCL
DRSTORMAX
DRSTORMIN
DRLOSS
DRUTLOSS
DRMINLOAD
DRREGLIM
/;   
* -----------------------------------------------------
