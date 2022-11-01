---
title: IntToStringWithLeadingZeroes
grand_parent: Function Libraries
parent: Misc
layout: page
---

# DateTimeToString

| Function name | DateTimeToString |
| --- | --- |
| Function Library | Content/DRGLib/Main/LIB_F_Main |
| Inputs | `Format(String)` A string reflecting your desired format<br/>`DateTime(DateTime Structure)` The date you wish to format |
| Outputs | `ReturnValue(String)` A string with all keys replaced by the proper values from the DateTime input|

This node is designed to let you easily convert a DateTime object into readable text through a key value system

| Key | Value |
| --- | --- |
| `D` | Day of the month |
| `M` | Month of the year |
| `Y` | Year |
| `h` | Hour of the day |
| `m` | Minute of the hour |
| `s` | Second of the minute |
| `n` | Millisecond of the second |
| `\` | Escape character |

For example, a string like `D:M:Y h.m.s` would return a result similar to `01:13:2022 02.56.35`. If you want to include characters that are also keys in your output string, simply use the escape character. E.G. `T\he bell dot\h toll h` would return something like `The bell doth toll 02` 

Time entries will have leading zeroes to ensure a constant length

Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Misc/DateTimeToStringImage.png)
