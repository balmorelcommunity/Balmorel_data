PARAMETER INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_GGG,INDHEAT_GROUP)  'Allowed investment in area'
/
DK1_NoDH         . EL       . GR_EL      1
DK1_NoDH         . EL       . GR_ELHPA2A 1
DK1_NoDH         . SH       . GR_WPSH    1
DK1_NoDH         . SH       . GR_GBSH    1
DK1_NoDH         . GB       . GR_GB      1
DK1_NoDH         . GB       . GR_GBSH    1
DK1_NoDH         . GB       . GR_GBHPA2W 1
DK1_NoDH         . WP       . GR_WP      1
DK1_NoDH         . WP       . GR_WPSH    1
DK1_NoDH         . HPA2W    . GR_HPA2W   1
DK1_NoDH         . HPA2W    . GR_GBHPA2W 1
DK1_NoDH         . HPA2A    . GR_ELHPA2A 1
/
;

INDHEAT_AGKN(INDHEAT_AAA,INDHEAT_G,INDHEAT_GROUP)=INDHEAT_AGKN('DK1_NoDH',INDHEAT_G,INDHEAT_GROUP);