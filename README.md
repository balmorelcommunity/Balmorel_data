# Balmorel_data

Base data for the [Balmorel framework](https://github.com/balmorelcommunity/Balmorel): the .inc files that every scenario falls back on. Clone this repository into `Balmorel/base` and rename the folder from `Balmorel_data` to `data`, so the framework can find it.

## Preprocessing

This repository holds only .inc files. The preprocessing tools that produce them live elsewhere and should be listed on the framework's [pre-processing page](https://balmorelcommunity.github.io/Balmorel/pre_processing.html). See [ADR 0002](docs/adr/0002-preprocessing-tools-live-outside-this-repository.md).

## Making changes to the master branch

* Changes to the master branch are only possible through a pull request.
* The pull request description must state:
  1. how the data was generated: the preprocessing tool, with a link and the version or commit used, or that the files were edited by hand
  2. the raw data source
* Commit only the .inc files your change is about, and discard any other files your preprocessing tool wrote.
* If the change involves a data decision, add an ADR in the same pull request. See [ADR 0001](docs/adr/0001-record-decisions-in-adrs.md).

## Decisions and terms

Decisions about base data are recorded in [docs/adr](docs/adr). Terms are defined in the framework's [GLOSSARY.md](https://github.com/balmorelcommunity/Balmorel/blob/master/GLOSSARY.md) (`../../GLOSSARY.md` when cloned into `base/data`).
