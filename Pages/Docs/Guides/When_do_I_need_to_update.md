---
title: When do I need to update?
parent: Guides
layout: page
---

# Introduction

So you see all this stuff but you don't want to have to update your mod constantly with DRGLib. Well good news! DRGLib is designed to be backwards compatible and allow for bugfixes without breaking existing mods! 

## The DRGLib goal

The goal of DRGLib is to only make *additive* changes or bugfixes, unless doing a major version change. This means that no change should break existing mods. If you find a change that has been made that breaks one of your mods, please file a bug report and the DRGLib team will work to fix it

## Versioning scheme

DRGLib follows the basic semantic versioning scheme of Major.Minor.Patch 

- A **Major** version will cause major breaking changes. This would include removing functionality or reworking a major interface
  - The last Major version change was V4, when DRGLib removed settings page functionality to encourage people to use ModHub instead'
  - This is the only time your mod will *have* to update with DRGLib. We make an effort to ensure that these types of updates happen as infrequently as possible
- A **Minor** version will add new stuff
  - You shouldn't need to update your mod unless you want to take advantage of these new features. A new version of the [Devkit files](https://github.com/SamsDRGMods/DRGLibDevkitFiles) are released with each minor version
- A **Patch** version will include no new features, just bugfixes

## The catch

All of this only matters if you stick to the documented functions and objects. Everything else is considered internal, and subject to change without warning. For instance, if you directly access a variable that isn't listed in the documentation (i.e. the Boolean ModHubOpen from LIB_A_Main) it might be removed at a later date without a major version change
