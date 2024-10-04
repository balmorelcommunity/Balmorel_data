TABLE  TRANSDEMAND_Y1(RRR,YYY)   'Annual transport demand (MWh)'
* Simple assumptions on fixed conversion efficiencies to jet and shipping fuel, and that fuel is produced near ports
               2050
Esbjerg         0.4
Frederikshavn   0.3
Fredericia      0.3
;
TRANSDEMAND_Y(YYY,RRR)  = TRANSDEMAND_Y1(RRR,YYY)*17146848.9131; 
TRANSDEMAND_Y1(RRR,YYY)=0;