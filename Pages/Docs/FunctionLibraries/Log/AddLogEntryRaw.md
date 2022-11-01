---
title: AddLogEntryRaw
grand_parent: Function Libraries
parent: Log
layout: page
---

# AddLogEntryRaw

| Function name | AddLogEntryRaw |
| --- | --- |
| Function Library | Content/DRGLib/LoggingFunctions/LIB_F_Log |
| Inputs | `LIB_A_MainRef(LIB_A_Main Object reference)`<br/>`LogSeverity(LIB_E_LogSeverity Enum)` The severity level of the log entry<br/>`LogEntry(String)` The log entry |

Adds a log entry without any fancy formatting, outside of a newline being added.
Useful if you're dumping a lot of info all at once and don't want to worry about those dang prefixes

Node Appearance:  
![Example image](/DRGLib/Media/FullDocs/FunctionLibs/Log/AddLogEntryRawImage.png)
