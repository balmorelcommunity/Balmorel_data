* PARAMETER XLOSS contains the loss in transmission is expressed as a fraction
* of the power entering the transmission line.
* Units: (none)
* The input data are checked for reasonable values. See the file CHECK0.INC.


* Observe: Unreasonable results may be found if there are neither
* cost nor loss associated with electrical transmission.
* Therefore for all (non-diagonal) entries there should be a positive number
* in either TABLE XCOST or in TABLE XLOSS.

* Data source:

* The data entered assumes for simplicity that all transmission losses
* between regions RE and RI are the same in both directions.
* Therefore the loss data is given only once.
* It is therefore by convention assumed that loss data between regions RE and RI
* is given only for ORD(RE) LT ORD(RI), i.e. data is entered
* only in the upper right half of the table; the remaining data
* is filled in by the LOOP statement immediately after the table.

* (If this assumption is not found reasonable upon revision of the data,
* then fill in the whole table,
* and delete the fill-in LOOP statement immediately after the table.)

TABLE XLOSS(IRRRE,IRRRI)  'Transmission loss between regions (fraction)'
                        HSTAN_R1       WINDIA_R1
HSTAN_R1                               0.04
WINDIA_R1               0.04

;


* Then fill in the values not entered in the table assuming symmetry:
LOOP( (IRRRE,IRRRI)$(ORD(IRRRE) GT ORD(IRRRI)),  XLOSS(IRRRE,IRRRI)=XLOSS(IRRRI,IRRRE););
