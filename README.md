# README #

Data for the spatial_study branch of the [Balmorel framework](https://github.com/balmorelcommunity/Balmorel_data/tree/mberos-spatialaggregation). Clone this repository into base/ for easy version control of both framework code and base data. Remember to rename the cloned folder from "Balmorel_data" to "data" for proper functioning. 

## Generating .inc files from Excel
* An excel file exist that can be used to generate .inc-files in this repository
* Store the file in a directory outside of OneDrive synchronisation
* In the same diretory/On the same level create a new folder for the .inc files (e.g. data)
* Open the sheet 'Settings' of the dataset
* Enable Editing
* Edit the GAMS path e.g. like: C:\Users\some_user\games_folder\
* Edit the Export diretory - only the name of the folder created in step 2: data\
* Press the 'Export All' button

## Making changes to the master branch
* Changes to the master branch are only possible through a pull request.
* A pull request must only be approved if the resulting dataset corresponds to the latest major version of the xlsm file.

