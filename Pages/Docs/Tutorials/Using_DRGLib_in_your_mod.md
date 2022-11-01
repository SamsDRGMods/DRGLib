---
title: Using DRGLib in your mod
parent: Tutorials
layout: page
has_children: true
---

# Introduction
DRGLib is built to be easily upgradable and backwards compatible. This can make it slightly difficult to implement into your UE project. Hopefully this guide will help make that easier :)

## Step 1: Download the DRGLib files

### 1.A Options
There are 2 main ways to include DRGLib in your project.  

- You can include the full DRGLib source in your project
  - The main advantage to this approach is that it lets you view the source and understand how it is implemented
  - The main disadvantage is that it will clog up your project with many objects you may not actually need
  - _If you don't know what it means to "Dummy" a game blueprint, I highly recommend going with the devkit_
- You can use the [DRGLib devkit files](https://github.com/SamsDRGMods/DRGLibDevkitFiles)
  - This approach tends to be much simpler

### 1.AA Downloading the full source  
To get the full source in your mod simply download the most recent version from the main page

**Notes on using the full source**
DRGLib makes use of many of the game's functions and objects to accomplish its goals. This means 2 things:

1. You'll need to have the header dumps and plugins from the game. Refer to [this repository](https://github.com/DRG-Modding/FSD-Template)
2. You'll need to have the FSD full asset content as supplied on the [DRGModding discord](https://discord.com/channels/676880716142739467/883791204930703360/998263940809232507) ([invite](https://discord.gg/gUw32ayWGt))

![Example image](/DRGLib/Media/ProjectSetupGuide/DownloadSource.png)

### 1.AB downloading the devkit files
Download the most recent version from [releases](https://github.com/SamsDRGMods/DRGLibDevkitFiles/releases)

## Step 2. copy DRGLib into your project folder
Whether using the full source code or just the Devkit, from here you just need to find Content\DRGLib and copy that folder into your project's own content directory

## Step 3. Exclude DRGLib from cooking
I suggest excluding DRGLib from the cooking in your project. You can do this in Project settings>Packaging>Packaging>Directories to never cook. The reason for this is so that you don't overwrite the DRGLib files with your mod

![Example image](/DRGLib/Media/ProjectSetupGuide/DisableCooking.png)
