* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       14_1(Sheet15)
* Range:       $A$36:$FR$51
* -----------------------------------------------------
SET T(TTT)  'Time periods within a season in the simulation'
/
* For BB1 and BB2
$ontext
$ifi not %bb3%==yes
$ifi not %timeaggr%==yes                                     T001,     T006, T011, T016, T021, T026, T031, T036, T041, T046, T051, T056, T061, T066, T071, T076, T081, T086, T091, T096, T101, T106, T111, T116, T121, T126, T131, T136, T141, T146, T151, T156, T161, T166

$ifi not %bb3%==yes
$ifi not %timeaggr%==yes                                     T002,     T012, T022, T032, T042, T052, T062, T072, T082, T092, T102, T112, T122, T132, T142, T152, T162
$offtext
$ifi %timeaggr%==yes T001*T005
* For BB3
$ifi %bb3%==yes                                              T001*T168
/;

* -----------------------------------------------------
