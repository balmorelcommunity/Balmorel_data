PARAMETER VRE_CERT_AS(YYY,GGG) "Certainty/probability associated to the provision of ancilary services from VRE (0-1, 0 means no certainty, 1 means full certainty)";
VRE_CERT_AS(Y,G)$(GDATA(G,'GDTYPE') EQ GHYRR OR GDATA(G,'GDTYPE') EQ GWND OR GDATA(G,'GDTYPE') EQ GSOLE OR GDATA(G,'GDTYPE') EQ GWAVE)=1;
