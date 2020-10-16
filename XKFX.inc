* PARAMETER XKFX contains the intital electrical transmission capacities
* between pairs of regions.
* Units: MW.

* The electrical transmission capacity is the capacity
* disregarding an eventual loss (see the table XLOSS).
* Thus, if there is a loss, a maximum of XCAPINIT MW may be sent into
* the transmisison line, but at most (XCAPINIT*XLOSS) MW may be extracted.

* Germany separated in four regions according to the major bottlenecks (Frauke 6.2.18)


TABLE XKFX(YYY,IRRRE,IRRRI)  'Initial transmission capacity between regions'
                HSTAN_R1        WINDIA_R1
2020.HSTAN_R1                   1500
2020.WINDIA_R1  1500


 ;
XKFX(YYY,IRRRE,IRRRI)$(YYY.VAL GT 2020) = XKFX('2020',IRRRE,IRRRI);
