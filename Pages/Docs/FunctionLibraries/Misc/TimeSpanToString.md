---
title: TimeSpanToString
grand_parent: Function Libraries
parent: Misc
layout: page
---

### TimeSpanToString

| Function name | TimeSpanToString |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_F_Main |
| Inputs | `Format(String)` A string reflecting your desired format<br/>`TimeSpan(Timespan Structure)` The timespan you wish to format |
| Outputs | `ReturnValue(String)` A string with all keys replaced by the proper values from the TimeSpan input|

This node is designed to let you easily convert a DateTime object into readable text through a key value system

| Key | Value |
| --- | --- |
| `h` | Hours |
| `m` | Minutes off the hour |
| `s` | Seconds off the minute |
| `n` | Milliseconds off the second |
| `\` | Escape character |

Similar to DateTimeToString, but for a timespan structure

Node Appearance: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Misc/TimespanToStringImage.png?raw=true">
</p>
