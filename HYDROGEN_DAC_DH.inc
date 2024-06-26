PARAMETER DAC_DH(GGG) 'Heat demand needed to produce biomethane through DAC (Mwth/MWth biomethane)';
DAC_DH(G)$(GDATA(G,'GDTYPE') EQ HYDROGEN_GH2TOBIOMETH)=0.285;                                       
