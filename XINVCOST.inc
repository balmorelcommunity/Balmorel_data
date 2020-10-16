* PARAMETER XINVCOST contains information about the investment cost
* in new electrical transmission capacity between pairs of regions.
* Units: EUR2012/MW.
* Temporarily no new transmission investments are allowed
* Observe: if INF is entered in the table, this means that no tranmission
* capacity can be established between the two associated regions.
* The matrix should only have values in the lower half, as only those
* values are used in the model.

TABLE XINVCOST(YYY,IRRRE,IRRRI)  'Investment cost in new transmission capacity (Money/MW)'
                HSTAN_R1        WINDIA_R1
2020.HSTAN_R1                   900000
2020.WINDIA_R1  900000
;
XINVCOST(YYY,IRRRE,IRRRI)=XINVCOST('2020',IRRRE,IRRRI);
