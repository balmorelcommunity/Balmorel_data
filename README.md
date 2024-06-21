# README #

This study investigates a unified European hydrogen infrastructure. 
A pre-print can be found [here](https://www.researchsquare.com/article/rs-3185467/v1), and the data should be used with [this corresponding Balmorel repository](https://github.com/balmorelcommunity/Balmorel/tree/A-unified-European-hydrogen-infrastructure-planning-to-support-the-rapid-scale-up-of-hydrogen-production) 

The master branch of this repository holds the main dataset for Flex4RES. The corresponding xlsm file (generating the all the .inc files in the repository) can be found [here][xlsm]. For trying out changes on datasets please use branches and follow the following instructions for changes on the master branch.

## Generating .inc files
* Store the Flex4Res dataset in any convenient directory
* In the same diretory/On the same level create a new folder for the .inc files (e.g. data)
* Open the sheet 'Settings' of the dataset
* Enable Editing
* Edit the GAMS path e.g. like: C:\Users\some_user\games_folder\
* Edit the Export diretory - only the name of the folder created in step 2: data\
* Press the 'Export All' button

## Making changes to the master branch
* Changes to the master branch are only possible through a pull request.
* A pull request must only be approved if the resulting dataset corresponds to the latest major version of the xlsm file.

## Making changes to the xlsm file on the Flex4RES sharepoint
* Get access to the sharepoint (ask [Olexandr](mailto:obal@dtu.dk?Subject=Flex4RES%20Data%20on%20Sharepoint&Body=Please%20grant%20me%20access.))
* Open the [xlsm file][xlsm] in excel (~~i.e. choose save file~~). When you open it in excel and switch to the edit mode, the file is checked out, so no one else can edit the file at the same time as you are editing it. 

[xlsm]: https://share.dtu.dk/sites/Flex4RES_119500/Version%20Controlled%20Files/Data.xlsm  "Version controlled xlsm file on the Flex4RES Sharepoint"