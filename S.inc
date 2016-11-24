* -----------------------------------------------------
* XLS2GMS 2.8      24.4.6 r52609 Released Jun 26, 2015 VS8 x86 32bit/MS Windows
* Erwin Kalvelagen, GAMS Development Corp.
* -----------------------------------------------------
* Application: Microsoft Excel
* Version:     15.0
* Workbook:    C:\Balmorel_git\Flex4RES_BalModel\base\data\Data.xls
* Sheet:       14_1(Sheet15)
* Range:       $A$53:$BE$69
* -----------------------------------------------------
SET S(SSS)  'Seasons in the simulation'
/

* For BB1 and BB2
$ifi not %bb3%==yes      S02,            S08,    S15, S21, S28, S34, S41, S47
*S01*s52

* For BB3
* NB! IMPORTANT TO SPECIFY THE SEASON YOU WANT TO LOOK AT HERE!!!
$ifi not %bb3%==yes $goto label_BB3_SEASONS_END
*s01                                                           /*              S01*S52 */
S08,S34                                                                 /*S02,            S08 ,    S15, S21, S28, S34, S41, S47*/
*                                                                 S02*S06,S22*S26

$label label_BB3_SEASONS_END
/;

* -----------------------------------------------------
