PARAMETER DECOM_G(YYY,YYY,GGG)  'DECOMMISIONING YEAR OF ENDOGENOUS GENERATION INVESTMENTS DEPENDING ON INVESTMENT YEAR';                                                                                                                               
                                                                                                                                                                                                                                                       
LOOP(C,                                                                                                                                                                                                                                                
  LOOP(G$(GDATA(G,'GDKVARIABL') EQ 1),                                                                                                                                                                                                                 
    LOOP(IYALIAS,                                                                                                                                                                                                                                      
      LOOP(Y$(ORD(Y) EQ ORD(IYALIAS)),                                                                                                                                                                                                                 
        IINVYEARG_LEFT(C,IYALIAS,Y,G)=GDATA(G,'GDLIFETIME');                                                                                                                                                                                           
      );                                                                                                                                                                                                                                               
    );                                                                                                                                                                                                                                                 
  );                                                                                                                                                                                                                                                   
);                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                       
DECOM_G(Y,Y,G)$(GDATA(G,'GDKVARIABL') EQ 1)=0;                                                                                                                                                                                                         
                                                                                                                                                                                                                                                       
LOOP(C,                                                                                                                                                                                                                                                
  LOOP(G$(GDATA(G,'GDKVARIABL') EQ 1),                                                                                                                                                                                                                 
    LOOP(IYALIAS,                                                                                                                                                                                                                                      
      IN_INV_G(C,IYALIAS,G)=ROUND(IWEIGHTY(IYALIAS)/GDATA(G,'GDLIFETIME'));                                                                                                                                                                            
*Correction of IN_INV_G                                                                                                                                                                                                                                
      IF ( IN_INV_G(C,IYALIAS,G) EQ 0,                                                                                                                                                                                                                 
        IN_INV_G(C,IYALIAS,G)=1;                                                                                                                                                                                                                       
      );                                                                                                                                                                                                                                               
      LOOP(Y$(ORD(Y) GE ORD(IYALIAS) AND (SUM(IYALIAS2$(ORD(IYALIAS2) LT ORD(Y)),DECOM_G(IYALIAS,IYALIAS2,G)) EQ 0)),                                                                                                                                  
*First year                                                                                                                                                                                                                                            
        IF (ORD(Y) EQ ORD(IYALIAS),                                                                                                                                                                                                                    
          IF(IINVYEARG_LEFT(C,IYALIAS,Y,G)*IN_INV_G(C,IYALIAS,G) LE IWEIGHTY(Y),                                                                                                                                                                       
            DECOM_G(IYALIAS,Y+1,G)$(ORD(Y) NE CARD(IYALIAS2))=1;                                                                                                                                                                                       
            );                                                                                                                                                                                                                                         
            IINVYEARG_LEFT(C,IYALIAS,Y+1,G)$(ORD(Y) NE CARD(IYALIAS2))=GDATA(G,'GDLIFETIME')*IN_INV_G(C,IYALIAS,G)-IWEIGHTY(Y);                                                                                                                        
          );                                                                                                                                                                                                                                           
*Remaining year                                                                                                                                                                                                                                        
        IF (ORD(Y) GT ORD(IYALIAS),                                                                                                                                                                                                                    
          IF ( IINVYEARG_LEFT(C,IYALIAS,Y,G) GT IWEIGHTY(Y),                                                                                                                                                                                           
            IINVYEARG_LEFT(C,IYALIAS,Y+1,G)$(ORD(Y) NE CARD(IYALIAS2))=IINVYEARG_LEFT(C,IYALIAS,Y,G)-IWEIGHTY(Y);                                                                                                                                      
          );                                                                                                                                                                                                                                           
          IF ((IINVYEARG_LEFT(C,IYALIAS,Y,G) GE IWEIGHTY(IYALIAS)/2) AND (IINVYEARG_LEFT(C,IYALIAS,Y,G) LE IWEIGHTY(Y)) ,  !!Assumption: if the reamining years are more ore equal than half of IWEIGHTY, then the technology is in in this snapshot   
            DECOM_G(IYALIAS,Y+1,G)=1;                                                                                                                                                                                                                  
          );                                                                                                                                                                                                                                           
          IF ((IINVYEARG_LEFT(C,IYALIAS,Y,G) LT IWEIGHTY(IYALIAS)/2) AND (IINVYEARG_LEFT(C,IYALIAS,Y,G) LE IWEIGHTY(Y)) , !!Assumption: if the reamining years are less than half of IWEIGHTY, then the technology is out in this snapshot             
            DECOM_G(IYALIAS,Y,G)=1;                                                                                                                                                                                                                    
          );                                                                                                                                                                                                                                           
        );                                                                                                                                                                                                                                             
      );                                                                                                                                                                                                                                               
    );                                                                                                                                                                                                                                                 
  );                                                                                                                                                                                                                                                   
);                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                       