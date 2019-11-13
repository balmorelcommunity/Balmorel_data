TABLE FUELPRICE1(YYY,RRR,FFF)  'Fuel prices of hydrogen fuels (Money/GJ)'
*Source: EA2017: EA Energianalyse 2017.Integration af termisk forgasning I det danske energisystem. Partnerskabet for termisk forgasning
*Note: for BIOGAS_UP and THERMGAS_UP values from EA2017 (page 60) are applied
*Note: costs for hydrogen are endogenously calculated and added, thus, prices for BIOGAS_H2 and THERMGAS_H2 prices for the raw biogas (EA2017 page 57) are applied
*Question: Should some cost for the facility of Methanisation (EA2017 page 61) be additionally applied to BIOGAS_H2 and THERMGAS_H2?
* Note: Other possible source to compare with: https://doi.org/10.1016/j.energy.2014.04.002
*Note: Division factor                                                                                                                                                   7.44

                                                                                                                                                                   BIONG
2015.DK1                                                                                                                                                           19.9
***REGION SPESIFIC PRICES:             (If entered value is zero, the price will equal DK1A)
2015.DK2                                                                                                                                                           0
2015.DE4-N                                                                                                                                                         0
2015.DE4-W                                                                                                                                                         0
2015.DE4-E                                                                                                                                                         0
2015.DE4-S                                                                                                                                                         0
2015.NL                                                                                                                                                            0
2015.FIN                                                                                                                                                           0
2015.UK                                                                                                                                                            0
2015.NO1                                                                                                                                                           0
2015.NO2                                                                                                                                                           0
2015.NO3                                                                                                                                                           0
2015.NO4                                                                                                                                                           0
2015.NO5                                                                                                                                                           0
2015.SE1                                                                                                                                                           0
2015.SE2                                                                                                                                                           0
2015.SE3                                                                                                                                                           0
2015.SE4                                                                                                                                                           0
2015.EE                                                                                                                                                            0
* FUTURE PRICE DEVELOPMENT - SAME PRICE FOR ALL AREAS
*                                                                                                                                                                  BIONG
2016.DK1
2017.DK1
2018.DK1
2019.DK1
2020.DK1                                                                                                                                                           18
2021.DK1
2022.DK1
2023.DK1
2024.DK1
2025.DK1                                                                                                                                                           16
2026.DK1                                                                                                                                                           12
2027.DK1
2028.DK1
2029.DK1
2030.DK1                                                                                                                                                           15
2035.DK1
2040.DK1                                                                                                                                                           13.5
2045.DK1                                                                                                                                                           
2050.DK1                                                                                                                                                           12
;
PARAMETER FUELPRICE(YYY,AAA,FFF);
FUELPRICE(YYY,AAA,FFF)$(FUELPRICE(YYY,AAA,FFF) EQ 0) = SUM(RRR, FUELPRICE1(YYY,RRR,FFF)*RRRAAA(RRR,AAA));

* Unless other values are assigned in the TABLE FUELPRICE above,
* the values for  'DK1_large'  are used for all A:
FUELPRICE('2015',AAA,FFF)$(FUELPRICE('2015',AAA,FFF) EQ 0)=FUELPRICE('2015','DK1_large',FFF);
FUELPRICE(YYY,AAA,FFF)$((YYY.val > 2014) and (FUELPRICE(YYY,AAA,FFF) EQ 0))=FUELPRICE(YYY,'DK1_large',FFF);
