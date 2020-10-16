PARAMETER WNDFLH(AAA)  'Full load hours for wind power (hours)'
/
HSTAN_A1	3500
WINDIA_A1	3200

/;

* If WNDFLH has no values, but solar power is an investment option or has capacity in GKFX: Use the same value as HSTAN_A1
WNDFLH(IA)$((NOT WNDFLH(IA)) AND (SUM(G$(GDATA(G,'GDTYPE') EQ GWND), AGKN(IA,G)) OR SUM((G,Y)$(GDATA(G,'GDTYPE') EQ GWND), GKFX(Y,IA,G)))) = WNDFLH('HSTAN_A1') ;
