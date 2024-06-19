PARAMETER SOLEFLH(AAA)  'Full load hours for solar power'                                                                                                                                        
* Same data used for all regions as for Germany                                                                                                                                                  
/                                                                                                                                                                                                
DK1_NoDH                                                                                                                                                               1085.90502869064          
DK2_NoDH                                                                                                                                                               1127.35469867694          
NO1_A1                                                                                                                                                                 1021.82149195315          
NO2_A1                                                                                                                                                                 1054.17510499113          
NO3_A1                                                                                                                                                                 923.553516355895          
NO4_A1                                                                                                                                                                 904.28439171604           
NO5_A1                                                                                                                                                                 992.844500433057          
DK1_VRE-ONS_20-30                                                                                                                                                      1085.90502869064          
DK2_VRE-ONS_20-30                                                                                                                                                      1127.35469867694          
NO1_VRE-ONS_20-30                                                                                                                                                      1021.82149195315          
NO2_VRE-ONS_20-30                                                                                                                                                      1054.17510499113          
NO3_VRE-ONS_20-30                                                                                                                                                      923.553516355895          
NO4_VRE-ONS_20-30                                                                                                                                                      904.28439171604           
NO5_VRE-ONS_20-30                                                                                                                                                      992.844500433057          
DK1_VRE-ONS_30-40                                                                                                                                                      1199.04118051701          
DK2_VRE-ONS_30-40                                                                                                                                                      1244.8093277484           
NO1_VRE-ONS_30-40                                                                                                                                                      1128.28103344037          
NO2_VRE-ONS_30-40                                                                                                                                                      1164.00544151113          
NO3_VRE-ONS_30-40                                                                                                                                                      1019.77490596693          
NO4_VRE-ONS_30-40                                                                                                                                                      998.498207411107          
NO5_VRE-ONS_30-40                                                                                                                                                      1096.28504373399          
DK1_VRE-ONS_40-50                                                                                                                                                      1212.17305528257          
DK2_VRE-ONS_40-50                                                                                                                                                      1258.44245433705          
NO1_VRE-ONS_40-50                                                                                                                                                      1140.63794450585          
NO2_VRE-ONS_40-50                                                                                                                                                      1176.75360557149          
NO3_VRE-ONS_40-50                                                                                                                                                      1030.94346011821          
NO4_VRE-ONS_40-50                                                                                                                                                      1009.43373959             
NO5_VRE-ONS_40-50                                                                                                                                                      1108.29153536713          
DK1_VRE-ONS_50                                                                                                                                                         1224.2947858354           
DK2_VRE-ONS_50                                                                                                                                                         1271.02687888042          
NO1_VRE-ONS_50                                                                                                                                                         1152.0443239509           
NO2_VRE-ONS_50                                                                                                                                                         1188.5211416272           
NO3_VRE-ONS_50                                                                                                                                                         1041.25289471939          
NO4_VRE-ONS_50                                                                                                                                                         1019.5280769859           
NO5_VRE-ONS_50                                                                                                                                                         1119.3744507208           
/;                                                                                                                                                                                               
                                                                                                                                                                                                 
* If SOLEFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as DK2_NoDH                                                                      
SOLEFLH(IA)$((NOT SOLEFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GSOLE), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GSOLE), GKFX(Y,IA,G)))) = SOLEFLH('DK2_NoDH') ;                           
