* EV charging infrastructure, used by the EV addon when it invests in charging capacity (TechInvest).
* *_INFRA_INVCOST: overnight cost in 10'000 EUR/MW. *_INFRA_COST_OPEX: fixed O&M in 10'000 EUR/MW/yr.
* Source: Sanvito et al. (2026), arXiv:2602.01862v1, Supplementary Table 3, Cost-Base. EUR2015, taken as EUR2016.
* The model annualises the overnight cost with DISCOUNTRATE over EV_INFRA_LIFETIME and retires the infrastructure after it.
PARAMETERS
V2G_INFRA_INVCOST(YYY)      'Investment cost of bidirectional (V2G) charging infrastructure (10^4 EUR/MW)'
G2V_INFRA_INVCOST(YYY)      'Investment cost of unidirectional (G2V) charging infrastructure (10^4 EUR/MW)'
V2G_INFRA_COST_OPEX(YYY)    'Fixed O&M cost of bidirectional (V2G) charging infrastructure (10^4 EUR/MW/yr)'
G2V_INFRA_COST_OPEX(YYY)    'Fixed O&M cost of unidirectional (G2V) charging infrastructure (10^4 EUR/MW/yr)'
;

TABLE EV_INFRA_DATA(YYY,*)
        V2G_INFRA_INVCOST   G2V_INFRA_INVCOST   V2G_INFRA_COST_OPEX   G2V_INFRA_COST_OPEX
2020    69.518              63.205              1.346                 1.346
2025    69.518              63.205              1.346                 1.346
2030    69.518              63.205              1.346                 1.346
2035    69.518              63.205              1.346                 1.346
2040    69.518              63.205              1.346                 1.346
2045    69.518              63.205              1.346                 1.346
2050    69.518              63.205              1.346                 1.346
;

V2G_INFRA_INVCOST(YYY)   = EV_INFRA_DATA(YYY,'V2G_INFRA_INVCOST');
G2V_INFRA_INVCOST(YYY)   = EV_INFRA_DATA(YYY,'G2V_INFRA_INVCOST');
V2G_INFRA_COST_OPEX(YYY) = EV_INFRA_DATA(YYY,'V2G_INFRA_COST_OPEX');
G2V_INFRA_COST_OPEX(YYY) = EV_INFRA_DATA(YYY,'G2V_INFRA_COST_OPEX');

* Lifetime: one value for the whole station. Swiss eMobility/EnergieSchweiz (2023), Ladeinfrastruktur in Mietobjekten,
* p. 31, and the HEV/MV paritaetische Lebensdauertabelle (2024): wallbox 8-10 y, basic installation (cabling,
* distribution boards, core drilling) 20-40 y, meters and protection 15 y. With installation being most of the cost,
* the annuity-equivalent single lifetime is about 15-22 y.
SCALAR EV_INFRA_LIFETIME 'Lifetime of EV charging infrastructure (years)' /20/;
