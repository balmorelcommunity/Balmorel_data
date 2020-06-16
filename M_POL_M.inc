* File Mpol.inc
*
*
*
*------------------------------------------------------------------------------
* EMISSION POLICY -------------------------------------------------------------

* Emission policy data for BB4

TABLE M_POLNA(YYY,MPOLSET)  "Emission policy data; default for the 'LIM_' entries: 0 implies irrelevant, EPS implies no emission permitted (aggerated countries)"

*                                                                                                                                                                  LIM_CO2           LIM_SO2          LIM_NOX
* Units:                                                                                                                                                           t CO2/year        t SO2/year       t NOx/year
*2012
;

* PARAMETER MPOL_Y contains emissions policy data.


* Units: (See table)
TABLE M_POL(YYY,MPOLSET,CCC)  'Emission policy data'

                                                                                                                                                                   TAX_CO2.DENMARK   TAX_SO2.DENMARK  TAX_NOX.DENMARK
* Units:                                                                                                                                                           EUR12/t CO2       EUR90/t SO2      EUR90/t Nox
2012                                                                                                                                                               0                 0                0
2013                                                                                                                                                               0                 0                0
2014                                                                                                                                                               0                 0                0
2015                                                                                                                                                               0                 0                0
2016                                                                                                                                                               0                 0                0
2017                                                                                                                                                               0                 0                0
2018                                                                                                                                                               0                 0                0
2019                                                                                                                                                               0                 0                0
2020                                                                                                                                                               0                 0                0
2021                                                                                                                                                               0                 0                0
2022                                                                                                                                                               0                 0                0
2023                                                                                                                                                               0                 0                0
2024                                                                                                                                                               0                 0                0
2025                                                                                                                                                               0                 0                0
2026                                                                                                                                                               0                 0                0
2027                                                                                                                                                               0                 0                0
2028                                                                                                                                                               0                 0                0
2029                                                                                                                                                               0                 0                0
2030                                                                                                                                                               0                 0                0
2031                                                                                                                                                               0                 0                0
2032                                                                                                                                                               0                 0                0
2033                                                                                                                                                               0                 0                0
2034                                                                                                                                                               0                 0                0
2035                                                                                                                                                               0                 0                0
2036                                                                                                                                                               0                 0                0
2037                                                                                                                                                               0                 0                0
2038                                                                                                                                                               0                 0                0
2039                                                                                                                                                               0                 0                0
2040                                                                                                                                                               0                 0                0
2041                                                                                                                                                               0                 0                0
2042                                                                                                                                                               0                 0                0
2043                                                                                                                                                               0                 0                0
2044                                                                                                                                                               0                 0                0
2045                                                                                                                                                               0                 0                0
2046                                                                                                                                                               0                 0                0
2047                                                                                                                                                               0                 0                0
2048                                                                                                                                                               0                 0                0
2049                                                                                                                                                               0                 0                0
2050                                                                                                                                                               0                 0                0


*Marathon
* Sources: Emission calculated by Balmorel for 2020 as a start, Numbers from TIMES-DK for the electricity and heat sector, industry, transport in the Marathon Run
* Linear reduction to zero in 2050 for all emissions, so earlier at zero for sectors covered in Balmorel
+                                                                                                                                                                  LIM_CO2.DENMARK   LIM_CO2.SWEDEN   LIM_CO2.NORWAY   LIM_CO2.GERMANY  LIM_CO2.UNITED_KINGDOM LIM_CO2.NETHERLANDS
* Units:                                                                                                                                                           t CO2/year        t CO2/year       t CO2/year       t CO2/year       t CO2/year             t CO2/year
2012
2013
2014
2015
2016
2017
2018
2019
2020                                                                                                                                                               13839504.5547136  13680633.9863712 1982174.99509989 336447473.790494 117240                 84159
2021
2022
2023
2024
2025                                                                                                                                                               13669668.6547294  11416666.6666666 1650000          280000000        97700                  70132.5
2026
2027
2028
2029
2030                                                                                                                                                               8233716.09616809  9133333.33333333 1320000          224000000        78160                  56106
2031
2032
2033
2034
2035                                                                                                                                                                                                                                    58620                  42079.5
2036
2037
2038
2039
2040                                                                                                                                                               6542786.42369826  4566666.66666666 660000           112000000        39080                  28053
2041
2042
2043
2044
2045                                                                                                                                                                                                                                    19540                  14026.5
2046
2047
2048
2049
2050                                                                                                                                                               -3248276.71244277 EPS              EPS              EPS              EPS                    EPS



;


$ifi not %CarbonPrice%==yes  $goto label_CarbonPrice_END

M_POL('2020','TAX_CO2','DENMARK')= 25.15      ;
M_POL('2025','TAX_CO2','DENMARK')= 113.16      ;
M_POL('2030','TAX_CO2','DENMARK')= 134.05      ;
M_POL('2040','TAX_CO2','DENMARK')= 134.05      ;
M_POL('2050','TAX_CO2','DENMARK')= 134.05      ;

$LABEL label_CarbonPrice_END
