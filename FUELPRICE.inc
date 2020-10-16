
* Units: EUR2012/GJ

TABLE FUELPRICE(YYY,AAA,FFF)
                                NUCLEAR  NATGAS  COAL    LIGNITE FUELOIL LIGHTOIL       MUNIWASTE       WOODWASTE       WOODCHIPS       WOODPELLETS     BIOOIL   BIOGAS
2020    .       HSTAN_A1        0.76     4.00    2.10    1.20    12.00   16.00          0.10            3.00            6.00            9.00            17.00    12.00
2030    .       HSTAN_A1        0.76     4.20    2.21    1.20    12.60   16.80          0.10            3.00            6.30            9.45            17.85    12.60
2040    .       HSTAN_A1        0.76     4.41    2.32    1.20    13.23   17.64          0.10            3.00            6.62            9.92            18.74    13.23
2050    .       HSTAN_A1        0.76     4.63    2.43    1.20    13.89   18.52          0.10            3.00            6.95            10.42           19.68    13.89
;
FUELPRICE(YYY,AAA,FFF)$(NOT FUELPRICE(YYY,AAA,FFF) AND FUELPRICE(YYY,'HSTAN_A1',FFF)) = (FUELPRICE(YYY,'HSTAN_A1',FFF));
