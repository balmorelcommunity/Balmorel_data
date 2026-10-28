* Unit: t CO2/year (no money)
* Maximum CO2 stored geologically per year, for all modelled countries together.
* Balmorel has no CO2 utilisation, so all CO2 captured by CCS_G (incl. BECCS) counts as stored.
* Enforced by QCCS_STORAGE in investment and fullyear runs, not in rolling runs.
*
* Sum of the sourced targets. CH and the Western Balkans have none and add nothing.
* 2030:  85.00 Mt = EU 50 + UK 30 + NO 5
*   EU: NZIA, Regulation (EU) 2024/1735, Art. 20(1): "an annual injection capacity of at least
*       50 million tonnes of CO2 shall be achieved by 2030" (a floor, read here as a cap).
*   UK: DESNZ, "Carbon Capture, Usage and Storage: a vision to establish a competitive market"
*       (Dec 2023): 20-30 Mt CO2/yr by 2030, top of the range.
*   NO: Northern Lights phase 2, FID 27.3.2025, "a minimum of 5 million tonnes of CO2 per year"
*       from 2028 (norlights.com press release).
* 2040: 300.68 Mt = EEA 250 + UK 50.68
*   EEA (incl. NO): Industrial Carbon Management Strategy, COM(2024) 62, p. 12: "at least
*       250 million tonnes of CO2 per year in 2040 in the European Economic Area".
*   UK: CCC Seventh Carbon Budget (Feb 2025), Balanced Pathway, dataset sheet "Economy-wide data",
*       variable "Emissions: CCS" (CCS, BECCS, DACCS; no DAC-to-fuels).
* 2050: 320.31 Mt = EU 247 + UK 73.31
*   EU: 2040 target impact assessment SWD(2024) 63, Part 1, Table 6 (p. 38), S3 2050 underground
*       storage (452 Mt captured in total, the rest used for e-fuels and materials).
*   UK: CCC Seventh Carbon Budget, Balanced Pathway, as for 2040.
* Years in between are linear; years after 2050 keep the 2050 value. No cap before 2030.

PARAMETER CCS_STORAGE_MAX(YYY) "Maximum CO2 stored per year, all countries (t CO2)";
CCS_STORAGE_MAX('2030') =  85000000;
CCS_STORAGE_MAX('2040') = 300680000;
CCS_STORAGE_MAX('2050') = 320310000;
CCS_STORAGE_MAX(YYY)$(YYY.VAL > 2030 AND YYY.VAL < 2040) = CCS_STORAGE_MAX('2030') + (YYY.VAL - 2030)/10*(CCS_STORAGE_MAX('2040') - CCS_STORAGE_MAX('2030'));
CCS_STORAGE_MAX(YYY)$(YYY.VAL > 2040 AND YYY.VAL < 2050) = CCS_STORAGE_MAX('2040') + (YYY.VAL - 2040)/10*(CCS_STORAGE_MAX('2050') - CCS_STORAGE_MAX('2040'));
CCS_STORAGE_MAX(YYY)$(YYY.VAL > 2050) = CCS_STORAGE_MAX('2050');
