PARAMETER CCS_TRANSPORTCOST(RRR)  'CO2 transport and storage cost by capture region (money/tCO2)';
*Source: Technology catalogue Danish Energy Agency. Flat default = 19.6 for ALL regions,
*which exactly reproduces the prior scalar behaviour. Region-specific (location-differentiated)
*values are supplied as a scenario-local override of this file; capture remains investable
*everywhere (no AGKN gate) - only the per-tonne transport+storage cost varies by capture region.
CCS_TRANSPORTCOST(RRR) = 19.6;
