---
title: AddLogEntry
grand_parent: Function Libraries
parent: Log
layout: page
---

# AddLogEntry

| Function name | AddLogEntry |
| --- | --- |
| Function Library | Content/DRGLib/LoggingFunctions/LIB_F_Log |
| Inputs | `LIB_A_MainRef(LIB_A_Main Object reference)`<br/>`LogSeverity(LIB_E_LogSeverity Enum)` The severity level of the log entry<br/>`Prefix(String)` A prefix to place before the log entry<br/>`LogEntry(String)` The log entry |

Adds an entry to the log saved by DRGLib. Prefix is intended as your mod's name

Entry format: `LogSeverity` + ": " + `Prefix` + ": " + `LogEntry`

Node Usage: 
<p align="center">
<img src="https://github.com/SamsDRGMods/WikiMedia/blob/main/DRGLib/FullDocs/FunctionLibs/Log/AddLogEntryUsage.png?raw=true">
</p>
