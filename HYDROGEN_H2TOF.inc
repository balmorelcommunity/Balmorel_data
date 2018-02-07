Parameter HYDROGEN_H2TOF(GGG) 'Factor for need of hydrogen for fuel production'
;
*initial values for test of hydrogen add-on
HYDROGEN_H2TOF(IHYDROGEN_GH2UP)$(GDATA(IHYDROGEN_GH2UP,'GDFUEL') eq BIOGAS_H2)=1;
HYDROGEN_H2TOF(IHYDROGEN_GH2UP)$(GDATA(IHYDROGEN_GH2UP,'GDFUEL') eq THERMGAS_H2)=0.92;