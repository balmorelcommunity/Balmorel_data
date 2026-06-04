*-------------------------------------------------------------------------------
* PB_LCA_DATASET.inc  --  LCA dataset label list for the PB add-on
*-------------------------------------------------------------------------------
* Part of the Balmorel Planetary Boundaries (PB) add-on.
*
* Populates the PB_LCA_DATASET set (declared empty in PB_setdefine.inc).
* Each element labels one column of the PB_LCA_DATA family of TABLEs.
* There are two kinds of labels:
*
*   (a) Metadata labels  (GROUP_TECH, FUEL, Generation_type)
*       Used as TABLE columns that carry text classifications (not numbers).
*       Read by the preprocess_ipardecdef.py preprocessor (see
*       PB_ipardecdef.inc header) to map each TECH_GROUP / FFF / GDTYPE
*       triple to the right generator type.
*
*   (b) LCA impact labels (LCA_<Category>_<suffix>) for the 10 impact
*       categories, each in three suffix variants:
*         _constr      coefficient per kW of generator capacity (construction)
*         _prod_elec   coefficient per kWh of electricity produced
*         _prod_heat   coefficient per kWh of heat produced
*       The 10 categories are CO2, Ozone_depletion, LU, WU,
*       Eutrophication_freshwater, Ecotoxicity_freshwater, PM, Radiation,
*       Acidification, Resource.
*
* The "(per kW)" / "(per kWh)" annotations in the element
* descriptions below indicate ONLY the denominator unit (per kW of capacity, per
* kWh of electricity or heat output); the numerator unit is the
* category-natural unit shown earlier in each description (e.g. kg CO2-eq,
* kg CFC-11-eq, Pt, m3 deprivation, kg P-eq, CTUe, disease incidence,
* mol H+-eq, kg Sb-eq, kBq U-235-eq).
*
* Authors: Theo Balanza & Dhruv Sharma
*-------------------------------------------------------------------------------

SET PB_LCA_DATASET 'LCA values for different impact categories'
/

* --- Metadata labels ----------------------------------------------------------
GROUP_TECH
FUEL
Generation_type

* --- Climate Change (CO2) -----------------------------------------------------
LCA_CO2_constr     'Emissions of CO2-equivalent for construction of the generator (per kW)'
LCA_CO2_prod_elec  'Emissions of CO2-equivalent for production of 1 kWh by the generator (per kWh)'
LCA_CO2_prod_heat  'Emissions of CO2-equivalent for production of 1 kWh by the generator (per kWh)'

* --- Stratospheric Ozone Depletion --------------------------------------------
LCA_Ozone_depletion_constr     'Ozone-depletion impact (kg CFC-11-eq) for construction of the generator (per kW)'
LCA_Ozone_depletion_prod_elec  'Ozone-depletion impact (kg CFC-11-eq) for production of 1 kWh by the generator (per kWh)'
LCA_Ozone_depletion_prod_heat  'Ozone-depletion impact (kg CFC-11-eq) for production of 1 kWh by the generator (per kWh)'

* --- Land Use -----------------------------------------------------------------
LCA_LU_constr     'Land-use impact (Pt) for construction of the generator (per kW)'
LCA_LU_prod_elec  'Land-use impact (Pt) for production of 1 kWh by the generator (per kWh)'
LCA_LU_prod_heat  'Land-use impact (Pt) for production of 1 kWh by the generator (per kWh)'

* --- Water Use ----------------------------------------------------------------
LCA_WU_constr     'Water-use impact (m3 deprivation) for construction of the generator (per kW)'
LCA_WU_prod_elec  'Water-use impact (m3 deprivation) for production of 1 kWh by the generator (per kWh)'
LCA_WU_prod_heat  'Water-use impact (m3 deprivation) for production of 1 kWh by the generator (per kWh)'

* --- Freshwater Eutrophication ------------------------------------------------
LCA_Eutrophication_freshwater_constr     'Freshwater-eutrophication impact (kg P-eq) for construction of the generator (per kW)'
LCA_Eutrophication_freshwater_prod_elec  'Freshwater-eutrophication impact (kg P-eq) for production of 1 kWh by the generator (per kWh)'
LCA_Eutrophication_freshwater_prod_heat  'Freshwater-eutrophication impact (kg P-eq) for production of 1 kWh by the generator (per kWh)'

* --- Freshwater Ecotoxicity ---------------------------------------------------
LCA_Ecotoxicity_freshwater_constr     'Freshwater-ecotoxicity impact (CTUe) for construction of the generator (per kW)'
LCA_Ecotoxicity_freshwater_prod_elec  'Freshwater-ecotoxicity impact (CTUe) for production of 1 kWh by the generator (per kWh)'
LCA_Ecotoxicity_freshwater_prod_heat  'Freshwater-ecotoxicity impact (CTUe) for production of 1 kWh by the generator (per kWh)'

* --- Particulate Matter Formation ---------------------------------------------
LCA_PM_constr     'Particulate-matter impact (disease incidence) for construction of the generator (per kW)'
LCA_PM_prod_elec  'Particulate-matter impact (disease incidence) for production of 1 kWh by the generator (per kWh)'
LCA_PM_prod_heat  'Particulate-matter impact (disease incidence) for production of 1 kWh by the generator (per kWh)'

* --- Terrestrial Acidification ------------------------------------------------
LCA_Acidification_constr     'Acidification impact (mol H+-eq) for construction of the generator (per kW)'
LCA_Acidification_prod_elec  'Acidification impact (mol H+-eq) for production of 1 kWh by the generator (per kWh)'
LCA_Acidification_prod_heat  'Acidification impact (mol H+-eq) for production of 1 kWh by the generator (per kWh)'

* --- Resource Use (Minerals and Metals) ---------------------------------------
LCA_Resource_constr     'Resource-use impact (kg Sb-eq) for construction of the generator (per kW)'
LCA_Resource_prod_elec  'Resource-use impact (kg Sb-eq) for production of 1 kWh by the generator (per kWh)'
LCA_Resource_prod_heat  'Resource-use impact (kg Sb-eq) for production of 1 kWh by the generator (per kWh)'

* --- Ionising Radiation -------------------------------------------------------
LCA_Radiation_constr     'Ionising-radiation impact (kBq U-235-eq) for construction of the generator (per kW)'
LCA_Radiation_prod_elec  'Ionising-radiation impact (kBq U-235-eq) for production of 1 kWh by the generator (per kWh)'
LCA_Radiation_prod_heat  'Ionising-radiation impact (kBq U-235-eq) for production of 1 kWh by the generator (per kWh)'

/;
