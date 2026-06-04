*-------------------------------------------------------------------------------
* PB_THRESHOLDS_DATA.inc  --  Realistic PB thresholds
*-------------------------------------------------------------------------------
* Part of the Balmorel Planetary Boundaries (PB) add-on.
*
* Populates PB_THRESHOLDS_DATA(YYY, PB_THRESHOLDS_SET) with downscaled
* planetary-boundary thresholds for the energy sector. The values are sourced
* from the Mescal-Balmorel mapping spreadsheet:
*
*   /work3/dhrsh/Activity_Browser/MESCAL/Dhruv/ESM Data/Balmorel/EU/Mapping/
*   Mescal_Balmorel_Mapping.xlsx  ->  sheet 'PB_SOS_Mapping'
*
* Two allocation scenarios are encoded (both use 'min_cc', the minimum
* carrying capacity):
*   min_asocc  smallest share of carrying capacity allocated to energy (STRICT)
*   max_asocc  largest  share of carrying capacity allocated to energy (LENIENT)
*
* ACTIVE   : max_asocc  (uncommented below)
* ARCHIVED : min_asocc  ($ontext-wrapped at end of file, ready to swap)
*
* Year coverage:
*   Per-year explicit values for 2025, 2030, 2035, 2040, 2045, 2050.
*   No default-broadcast row is set -- any Y outside this list will fall back
*   to the GAMS default (0). Add years here before extending the horizon.
*
* Units (informational; the values are absolute, in the natural unit of each
* impact category. See PB_LCA_DATASET.inc for full unit descriptions.):
*   SOS_CO2_sector                            kg CO2-eq
*   SOS_Ozone_depletion_sector                kg CFC-11-eq
*   SOS_LU_sector                             Pt
*   SOS_WU_sector                             m3 water-eq
*   SOS_EUTROPHICATION_FRESHWATER_sector      kg P-eq
*   SOS_ECOTOXICITY_FRESHWATER_sector         CTUe
*   SOS_PM_sector                             disease incidence
*   SOS_RADIATION_sector                      kBq U-235-eq
*   SOS_ACIDIFICATION_sector                  mol H+-eq
*   SOS_RESOURCE_sector                       kg Sb-eq
*
* Authors: Theo Balanza & Dhruv Sharma
*-------------------------------------------------------------------------------

PARAMETER PB_THRESHOLDS_DATA(YYY, PB_THRESHOLDS_SET) "Value of SOS (Mescal realistic thresholds, EU)";

* --- Equity-corridor selector (PB_EQUITY_CORRIDOR_THRESHOLD, 2026-05-29) --------
* Picks which end of the downscaled equity corridor loads into PB_THRESHOLDS_DATA:
*   max -> max_asocc (lenient: largest share of carrying capacity to energy)  [DEFAULT]
*   min -> min_asocc (strict : smallest share)
* Default 'max' reproduces the prior hardcoded active block exactly (lossless).
$if not set PB_EQUITY_CORRIDOR_THRESHOLD $setglobal PB_EQUITY_CORRIDOR_THRESHOLD max

* =============================================================================
* CORRIDOR END: max_asocc (lenient)      [loads when PB_EQUITY_CORRIDOR_THRESHOLD=max]
* =============================================================================
$ifThenI.eqcmax %PB_EQUITY_CORRIDOR_THRESHOLD%==max

* --- Per-year explicit values: max_asocc ------------------------------------

* --- 2025 ---
PB_THRESHOLDS_DATA('2025', 'SOS_CO2_sector'                      ) = 2.5866284444E+11;
PB_THRESHOLDS_DATA('2025', 'SOS_Ozone_depletion_sector'          ) = 2.0472727335E+07;
PB_THRESHOLDS_DATA('2025', 'SOS_LU_sector'                       ) = 1.5117153023E+14;
PB_THRESHOLDS_DATA('2025', 'SOS_WU_sector'                       ) = 6.9128689704E+12;
PB_THRESHOLDS_DATA('2025', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.2068004790E+08;
PB_THRESHOLDS_DATA('2025', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 4.9757463468E+12;
PB_THRESHOLDS_DATA('2025', 'SOS_PM_sector'                       ) = 1.9599123015E+04;
PB_THRESHOLDS_DATA('2025', 'SOS_RADIATION_sector'                ) = 2.0016933777E+13;
PB_THRESHOLDS_DATA('2025', 'SOS_ACIDIFICATION_sector'            ) = 3.7982796540E+10;
PB_THRESHOLDS_DATA('2025', 'SOS_RESOURCE_sector'                 ) = 8.3182324423E+06;

* --- 2030 ---
PB_THRESHOLDS_DATA('2030', 'SOS_CO2_sector'                      ) = 2.5704423034E+11;
PB_THRESHOLDS_DATA('2030', 'SOS_Ozone_depletion_sector'          ) = 2.0344616762E+07;
PB_THRESHOLDS_DATA('2030', 'SOS_LU_sector'                       ) = 1.5022555606E+14;
PB_THRESHOLDS_DATA('2030', 'SOS_WU_sector'                       ) = 6.8696108548E+12;
PB_THRESHOLDS_DATA('2030', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.1929911575E+08;
PB_THRESHOLDS_DATA('2030', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 4.9446100109E+12;
PB_THRESHOLDS_DATA('2030', 'SOS_PM_sector'                       ) = 1.9476479127E+04;
PB_THRESHOLDS_DATA('2030', 'SOS_RADIATION_sector'                ) = 1.9891675387E+13;
PB_THRESHOLDS_DATA('2030', 'SOS_ACIDIFICATION_sector'            ) = 3.7745114587E+10;
PB_THRESHOLDS_DATA('2030', 'SOS_RESOURCE_sector'                 ) = 8.2661800946E+06;

* --- 2035 ---
PB_THRESHOLDS_DATA('2035', 'SOS_CO2_sector'                      ) = 2.5969785523E+11;
PB_THRESHOLDS_DATA('2035', 'SOS_Ozone_depletion_sector'          ) = 2.0554646692E+07;
PB_THRESHOLDS_DATA('2035', 'SOS_LU_sector'                       ) = 1.5177642641E+14;
PB_THRESHOLDS_DATA('2035', 'SOS_WU_sector'                       ) = 6.9405300517E+12;
PB_THRESHOLDS_DATA('2035', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.2156307473E+08;
PB_THRESHOLDS_DATA('2035', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 4.9956562460E+12;
PB_THRESHOLDS_DATA('2035', 'SOS_PM_sector'                       ) = 1.9677546740E+04;
PB_THRESHOLDS_DATA('2035', 'SOS_RADIATION_sector'                ) = 2.0097029326E+13;
PB_THRESHOLDS_DATA('2035', 'SOS_ACIDIFICATION_sector'            ) = 3.8134780504E+10;
PB_THRESHOLDS_DATA('2035', 'SOS_RESOURCE_sector'                 ) = 8.3515169304E+06;

* --- 2040 ---
PB_THRESHOLDS_DATA('2040', 'SOS_CO2_sector'                      ) = 2.6431506008E+11;
PB_THRESHOLDS_DATA('2040', 'SOS_Ozone_depletion_sector'          ) = 2.0920090658E+07;
PB_THRESHOLDS_DATA('2040', 'SOS_LU_sector'                       ) = 1.5447488093E+14;
PB_THRESHOLDS_DATA('2040', 'SOS_WU_sector'                       ) = 7.0639267157E+12;
PB_THRESHOLDS_DATA('2040', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.2550227592E+08;
PB_THRESHOLDS_DATA('2040', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 5.0844747240E+12;
PB_THRESHOLDS_DATA('2040', 'SOS_PM_sector'                       ) = 2.0027396623E+04;
PB_THRESHOLDS_DATA('2040', 'SOS_RADIATION_sector'                ) = 2.0454337248E+13;
PB_THRESHOLDS_DATA('2040', 'SOS_ACIDIFICATION_sector'            ) = 3.8812784152E+10;
PB_THRESHOLDS_DATA('2040', 'SOS_RESOURCE_sector'                 ) = 8.4999997294E+06;

* --- 2045 ---
PB_THRESHOLDS_DATA('2045', 'SOS_CO2_sector'                      ) = 2.7013595520E+11;
PB_THRESHOLDS_DATA('2045', 'SOS_Ozone_depletion_sector'          ) = 2.1380804677E+07;
PB_THRESHOLDS_DATA('2045', 'SOS_LU_sector'                       ) = 1.5787681376E+14;
PB_THRESHOLDS_DATA('2045', 'SOS_WU_sector'                       ) = 7.2194924885E+12;
PB_THRESHOLDS_DATA('2045', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.3046841406E+08;
PB_THRESHOLDS_DATA('2045', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 5.1964478901E+12;
PB_THRESHOLDS_DATA('2045', 'SOS_PM_sector'                       ) = 2.0468451231E+04;
PB_THRESHOLDS_DATA('2045', 'SOS_RADIATION_sector'                ) = 2.0904794184E+13;
PB_THRESHOLDS_DATA('2045', 'SOS_ACIDIFICATION_sector'            ) = 3.9667541146E+10;
PB_THRESHOLDS_DATA('2045', 'SOS_RESOURCE_sector'                 ) = 8.6871915109E+06;

* --- 2050 ---
PB_THRESHOLDS_DATA('2050', 'SOS_CO2_sector'                      ) = 2.7559381060E+11;
PB_THRESHOLDS_DATA('2050', 'SOS_Ozone_depletion_sector'          ) = 2.1812784716E+07;
PB_THRESHOLDS_DATA('2050', 'SOS_LU_sector'                       ) = 1.6106657360E+14;
PB_THRESHOLDS_DATA('2050', 'SOS_WU_sector'                       ) = 7.3653558780E+12;
PB_THRESHOLDS_DATA('2050', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.3512482226E+08;
PB_THRESHOLDS_DATA('2050', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 5.3014374726E+12;
PB_THRESHOLDS_DATA('2050', 'SOS_PM_sector'                       ) = 2.0881997984E+04;
PB_THRESHOLDS_DATA('2050', 'SOS_RADIATION_sector'                ) = 2.1327156856E+13;
PB_THRESHOLDS_DATA('2050', 'SOS_ACIDIFICATION_sector'            ) = 4.0468988341E+10;
PB_THRESHOLDS_DATA('2050', 'SOS_RESOURCE_sector'                 ) = 8.8627084466E+06;
$endif.eqcmax

* =============================================================================
* CORRIDOR END: min_asocc (strict)       [loads when PB_EQUITY_CORRIDOR_THRESHOLD=min]
* =============================================================================
$ifThenI.eqcmin %PB_EQUITY_CORRIDOR_THRESHOLD%==min
* --- Per-year explicit values: min_asocc ------------------------------------

* --- 2025 ---
PB_THRESHOLDS_DATA('2025', 'SOS_CO2_sector'                      ) = 3.4333723029E+10;
PB_THRESHOLDS_DATA('2025', 'SOS_Ozone_depletion_sector'          ) = 2.7174561987E+06;
PB_THRESHOLDS_DATA('2025', 'SOS_LU_sector'                       ) = 2.0065817571E+13;
PB_THRESHOLDS_DATA('2025', 'SOS_WU_sector'                       ) = 9.1758261253E+11;
PB_THRESHOLDS_DATA('2025', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9292060323E+07;
PB_THRESHOLDS_DATA('2025', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6045781452E+11;
PB_THRESHOLDS_DATA('2025', 'SOS_PM_sector'                       ) = 2.6014979564E+03;
PB_THRESHOLDS_DATA('2025', 'SOS_RADIATION_sector'                ) = 2.6569562462E+12;
PB_THRESHOLDS_DATA('2025', 'SOS_ACIDIFICATION_sector'            ) = 5.0416627062E+09;
PB_THRESHOLDS_DATA('2025', 'SOS_RESOURCE_sector'                 ) = 1.1041241327E+06;

* --- 2030 ---
PB_THRESHOLDS_DATA('2030', 'SOS_CO2_sector'                      ) = 3.4393364865E+10;
PB_THRESHOLDS_DATA('2030', 'SOS_Ozone_depletion_sector'          ) = 2.7221767492E+06;
PB_THRESHOLDS_DATA('2030', 'SOS_LU_sector'                       ) = 2.0100674327E+13;
PB_THRESHOLDS_DATA('2030', 'SOS_WU_sector'                       ) = 9.1917656468E+11;
PB_THRESHOLDS_DATA('2030', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9342944180E+07;
PB_THRESHOLDS_DATA('2030', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6160510974E+11;
PB_THRESHOLDS_DATA('2030', 'SOS_PM_sector'                       ) = 2.6060170735E+03;
PB_THRESHOLDS_DATA('2030', 'SOS_RADIATION_sector'                ) = 2.6615717010E+12;
PB_THRESHOLDS_DATA('2030', 'SOS_ACIDIFICATION_sector'            ) = 5.0504206851E+09;
PB_THRESHOLDS_DATA('2030', 'SOS_RESOURCE_sector'                 ) = 1.1060421300E+06;

* --- 2035 ---
PB_THRESHOLDS_DATA('2035', 'SOS_CO2_sector'                      ) = 3.4343998863E+10;
PB_THRESHOLDS_DATA('2035', 'SOS_Ozone_depletion_sector'          ) = 2.7182695136E+06;
PB_THRESHOLDS_DATA('2035', 'SOS_LU_sector'                       ) = 2.0071823124E+13;
PB_THRESHOLDS_DATA('2035', 'SOS_WU_sector'                       ) = 9.1785723834E+11;
PB_THRESHOLDS_DATA('2035', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9300827224E+07;
PB_THRESHOLDS_DATA('2035', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6065548474E+11;
PB_THRESHOLDS_DATA('2035', 'SOS_PM_sector'                       ) = 2.6022765659E+03;
PB_THRESHOLDS_DATA('2035', 'SOS_RADIATION_sector'                ) = 2.6577514539E+12;
PB_THRESHOLDS_DATA('2035', 'SOS_ACIDIFICATION_sector'            ) = 5.0431716392E+09;
PB_THRESHOLDS_DATA('2035', 'SOS_RESOURCE_sector'                 ) = 1.1044545890E+06;

* --- 2040 ---
PB_THRESHOLDS_DATA('2040', 'SOS_CO2_sector'                      ) = 3.4385604944E+10;
PB_THRESHOLDS_DATA('2040', 'SOS_Ozone_depletion_sector'          ) = 2.7215625646E+06;
PB_THRESHOLDS_DATA('2040', 'SOS_LU_sector'                       ) = 2.0096139160E+13;
PB_THRESHOLDS_DATA('2040', 'SOS_WU_sector'                       ) = 9.1896917765E+11;
PB_THRESHOLDS_DATA('2040', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9336323748E+07;
PB_THRESHOLDS_DATA('2040', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6145583666E+11;
PB_THRESHOLDS_DATA('2040', 'SOS_PM_sector'                       ) = 2.6054290971E+03;
PB_THRESHOLDS_DATA('2040', 'SOS_RADIATION_sector'                ) = 2.6609711902E+12;
PB_THRESHOLDS_DATA('2040', 'SOS_ACIDIFICATION_sector'            ) = 5.0492811959E+09;
PB_THRESHOLDS_DATA('2040', 'SOS_RESOURCE_sector'                 ) = 1.1057925819E+06;

* --- 2045 ---
PB_THRESHOLDS_DATA('2045', 'SOS_CO2_sector'                      ) = 3.4507898709E+10;
PB_THRESHOLDS_DATA('2045', 'SOS_Ozone_depletion_sector'          ) = 2.7312419096E+06;
PB_THRESHOLDS_DATA('2045', 'SOS_LU_sector'                       ) = 2.0167611874E+13;
PB_THRESHOLDS_DATA('2045', 'SOS_WU_sector'                       ) = 9.2223752790E+11;
PB_THRESHOLDS_DATA('2045', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9440659545E+07;
PB_THRESHOLDS_DATA('2045', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6380833052E+11;
PB_THRESHOLDS_DATA('2045', 'SOS_PM_sector'                       ) = 2.6146954088E+03;
PB_THRESHOLDS_DATA('2045', 'SOS_RADIATION_sector'                ) = 2.6704350396E+12;
PB_THRESHOLDS_DATA('2045', 'SOS_ACIDIFICATION_sector'            ) = 5.0672391643E+09;
PB_THRESHOLDS_DATA('2045', 'SOS_RESOURCE_sector'                 ) = 1.1097253770E+06;

* --- 2050 ---
PB_THRESHOLDS_DATA('2050', 'SOS_CO2_sector'                      ) = 3.4699242527E+10;
PB_THRESHOLDS_DATA('2050', 'SOS_Ozone_depletion_sector'          ) = 2.7463864497E+06;
PB_THRESHOLDS_DATA('2050', 'SOS_LU_sector'                       ) = 2.0279439832E+13;
PB_THRESHOLDS_DATA('2050', 'SOS_WU_sector'                       ) = 9.2735126872E+11;
PB_THRESHOLDS_DATA('2050', 'SOS_EUTROPHICATION_FRESHWATER_sector') = 2.9603905886E+07;
PB_THRESHOLDS_DATA('2050', 'SOS_ECOTOXICITY_FRESHWATER_sector'   ) = 6.6748910001E+11;
PB_THRESHOLDS_DATA('2050', 'SOS_PM_sector'                       ) = 2.6291937069E+03;
PB_THRESHOLDS_DATA('2050', 'SOS_RADIATION_sector'                ) = 2.6852424100E+12;
PB_THRESHOLDS_DATA('2050', 'SOS_ACIDIFICATION_sector'            ) = 5.0953366413E+09;
PB_THRESHOLDS_DATA('2050', 'SOS_RESOURCE_sector'                 ) = 1.1158787245E+06;
$endif.eqcmin
