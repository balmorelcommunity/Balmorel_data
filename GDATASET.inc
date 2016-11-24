* -----------------------------------------------------
* XLS2GMS 2.8      24.7.1 r56632 Released Mar 14, 2016 VS8 x86 32bit/MS Windows 
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       07(Sheet10)
* Range:       $A$1:$B$47
* -----------------------------------------------------
SET GDATASET 'Generation technology data'                                                                                        
/                                                                                                                                
GDTYPE                                    'Generation type'                                                                      
GDFUEL                                    'Fuel type'                                                                            
GDCV                                      'Cv-value for CHP-Ext'                                                                 
GDCB                                      'Cb-value for CHP'                                                                     
GDFE                                      'Fuel efficiency'                                                                      
GDDESO2                                   'Degree of desulphoring'                                                               
GDNOX                                     'NOx-factor (mg/MJ)'                                                                   
GDCH4                                     'CH4-factor (mg/MJ)'                                                                   
GDURBRUR                                  'Central or decentral technology'                                                      
GDINVCOST0                                'Investment cost (MMoney/MW)(default value)'                                           
GDOMVCOST0                                'Variable operating and maintenance costs (Money/MWh)(default value)'                  
GDOMFCOST0                                'Annual operating and maintenance costs (kMoney/MW)(default value)'                    
GDFROMYEAR                                'Technology available from this year'                                                  
GDLIFETIME                                'Economic lifetime (years)'                                                            
GDKVARIABL                                'Capacity is a variable to be found for each year (1/0)'                               
GDSTOHLOAD                                'Hours to load storage'                                                                
GDSTOHUNLD                                'Hours to unload storage'                                                              
GDCOMB                                    'Combination technology'                                                               
GDCOMBSK                                  'Combination technology, maximum share of capacity'                                    
GDCOMBSLO                                 'Combination technology, minimum share of production'                                  
GDCOMBSUP                                 'Combination technology, maximum share of production'                                  
GDLOADLOSS                                'Loss when loading a storage (MWh loss/MWh loading input)'                             
GDSTOLOSS                                 'Stationary loss from storage (MWh loss per time period/MWh energy content in storage)'
GDRAMPUP                                  'Max upward ramp (% of cap / hour)'                                                    
GDRAMPDOWN                                'Max downward ramp (% of cap / hour)'                                                  
GDLASTYEAR                                'Technology investment expires from this year (blank or 0 implies no expiration)'      
GDMOTHBALL                                'Year when a unit is mothballed'                                                       
GDCOMBKRES                                'Combination technology, capacity reserved for specific subunit'                       
GDCOMBFCAP                                'Combination technology, capacity limited by input capacity'                           
GDUC                                      'Unit commitment: the unit participates in unit commitment (0/1)'                      
GDUCUNITSIZE                              'Standard size of unit type (MW)'                                                      
GDUCGMIN                                  'Unit commitment: minimum production (share of nominal capacity)'                      
GDUCUCOST                                 'Unit commitment: startup cost (Money)'                                                
GDUCCOST0                                 'Unit commitment: fixed hourly cost (Money)'                                           
GDUCF0                                    'Unit commitment: fixed hourly fuel use (MWh)'                                         
GDUCDCOST                                 'Unit commitment: shutdown cost (Money)'                                               
GDUCDTMIN                                 'Unit commitment: minimum down time (hours)'                                           
GDUCUTMIN                                 'Unit commitment: minimum up time (hours)'                                             
GDUCDURD                                  'Unit commitment: duration of shut down process (hours)'                               
GDUCDURU                                  'Unit commitment: duration of start up process (hours)'                                
GDUCRAMPU                                 'Unit commitment: ramp-up limit (% of capacity/h)'                                     
GDUCRAMPD                                 'Unit commitment: ramp-down limit (% of capacity/h)'                                   
GDSTOINTERS                                                                                                                      
GDBYPASSC                                                                                                                        
/;                                                                                                                               
* -----------------------------------------------------
