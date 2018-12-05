SET DHUSER  "Heat demand user groups. Set must include element RESH for holding demand not included in any other user group"
$ifi %HEATTRANS%==yes $goto heattrans                                                                                       
/RESH/;                                                                                                                     
$ifi not %HEATTRANS%==yes $goto endoffile                                                                                   
$label heattrans                                                                                                            
/RESH,SH,PHL,PHH/;                                                                                                          
$label endoffile                                                                                                            
