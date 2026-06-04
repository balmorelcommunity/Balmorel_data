*-------------------------------------------------------------------------------
* PB_THRESHOLDS_SET.inc  --  SOS threshold label list for the PB add-on
*-------------------------------------------------------------------------------
* Part of the Balmorel Planetary Boundaries (PB) add-on.
*
* Populates the PB_THRESHOLDS_SET set (declared empty in PB_setdefine.inc).
* Each element is the key for one sector-level Safe Operating Space (SOS)
* threshold in the PB_THRESHOLDS_DATA(YYY, PB_THRESHOLDS_SET) parameter,
* one per impact category. The threshold defines the planetary boundary
* allocated to the energy sector for the category; the corresponding
* QPBLIM_<CAT>_TL equation in PB_eqndecdef.inc enforces it (with a TL_*
* slack variable when %TL_<CAT>_ALLOWED%==yes for that category).
*
* Order matches the category order used throughout the PB add-on:
* CO2, OZONE, LU, WU, EUTROPH, ECOTOX, PM, RADIATION, ACID, RESOURCE.
*
* Authors: Theo Balanza & Dhruv Sharma
*-------------------------------------------------------------------------------

SET PB_THRESHOLDS_SET 'Sector-level Safe Operating Space (SOS) thresholds, one per impact category'
/
SOS_CO2_sector                        'SOS: climate change (energy sector share)'
SOS_Ozone_depletion_sector            'SOS: stratospheric ozone depletion (energy sector share)'
SOS_LU_sector                         'SOS: land use (energy sector share)'
SOS_WU_sector                         'SOS: water use (energy sector share)'
SOS_EUTROPHICATION_FRESHWATER_sector  'SOS: freshwater eutrophication (energy sector share)'
SOS_ECOTOXICITY_FRESHWATER_sector     'SOS: freshwater ecotoxicity (energy sector share)'
SOS_PM_sector                         'SOS: particulate matter formation (energy sector share)'
SOS_RADIATION_sector                  'SOS: ionising radiation (energy sector share)'
SOS_ACIDIFICATION_sector              'SOS: terrestrial acidification (energy sector share)'
SOS_RESOURCE_sector                   'SOS: resource use, minerals and metals (energy sector share)'
/;
