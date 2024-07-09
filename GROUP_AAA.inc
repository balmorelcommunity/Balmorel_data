*Areas beling to groups                                                        
SET GROUP_AAA(GROUP,AAA) 'Areas assigned to groups';                           
GROUP_AAA('ALL_SECTORS',IA)=YES;                                               
GROUP_AAA('OTHER_SECTORS',IA)=YES;                                             
$ifi %INDIVUSERS%==yes GROUP_AAA('INDIVIDUAL_USERS',IA)$INDIVUSERS_AAA(IA)=YES;
$ifi %INDIVUSERS%==yes GROUP_AAA('OTHER_SECTORS',IA)$INDIVUSERS_AAA(IA)=NO;    
$ifi %INDUSTRY%==yes GROUP_AAA('INDUSTRY',IA)$INDUSTRY_AAA(IA)=YES;            
$ifi %INDUSTRY%==yes GROUP_AAA('OTHER_SECTORS',IA)$INDUSTRY_AAA(IA)=NO;        
