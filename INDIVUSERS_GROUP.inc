SET INDIVUSERS_GROUP  'Individual users groups'                                                                              
*These are the heating systems with known capacity, to restrict sudden change of heating systems.                            
*We are restricted by data availability, but the more groups can be added with better data.                                  
                                                                                                                             
/                                                                                                                            
*Groups with single heating technologies                                                                                     
INDIV_RES_BO_COAL                                                                                 ,INDIV_TER_BO_COAL         
INDIV_RES_BO_OIL                                                                                  ,INDIV_TER_BO_OIL          
INDIV_RES_BO_GAS                                                                                  ,INDIV_TER_BO_GAS          
INDIV_RES_BO_BIO                                                                                  ,INDIV_TER_BO_BIO          
INDIV_RES_BO_EL                                                                                   ,INDIV_TER_BO_EL           
INDIV_RES_HP_A2W                                                                                  ,INDIV_TER_HP_A2W          
                                                                                                                             
*Hybrid groups with heat pumps                                                                                               
INDIV_RES_BO_EL_HPA2A                                                                             ,INDIV_TER_BO_EL_HPA2A     
                                                                                                                             
*Hybrid groups with wood fire places                                                                                         
INDIV_RES_BO_BIO_WOODSTOVE                                                                        ,INDIV_TER_BO_BIO_WOODSTOVE
                                                                                                                             
*New heating system that can install any technologies                                                                        
INDIV_RES_NEW_ALL                                                                                 ,INDIV_TER_NEW_ALL         
                                                                                                                             
*Newly built district heating                                                                                                
RES_NEW_DH                                                                                        ,TER_NEW_DH                
/;                                                                                                                           
                                                                                                                             
SET INDIVUSERS_GROUP_NEW(INDIVUSERS_GROUP)/                                                                                  
INDIV_RES_NEW_ALL                                                                                 ,INDIV_TER_NEW_ALL         
RES_NEW_DH                                                                                        ,TER_NEW_DH                
/;                                                                                                                           
SET INDIVUSERS_GROUP_NEWDH(INDIVUSERS_GROUP)/                                                                                
RES_NEW_DH                                                                                        ,TER_NEW_DH                
/;                                                                                                                           
