---
title: LIB_JSON_O_Value
parent: Objects
layout: page
---

# LIB_JSON_O_Value

This object is core to the JSON library. Each LIB_JSON_O_Value will be of one of the following types:

- Null
- String
- Number
- Object
- Array
- Boolean

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `Value` | LIB_JSON_E_Type | The current value of the watch. |

## Functions

### ToString

| Function name | ToString |
| --- | --- |
| Inputs | `SortOrders(LIB_JSON_O_SortOrders object reference)` Optional |
| Outputs | `ReturnValue(String)` |

### ToStringPretty

| Function name | ToStringPretty |
| --- | --- |
| Inputs | `SortOrders(LIB_JSON_O_SortOrders object reference)` Optional <br/> `CurrentIndent(String)` Leave empty <br/> `IndentString(String)` The string stacked to make indents. Usually best left with the default of "  " |
| Outputs | `ReturnValue(String)` |

Generates a much more human-readable JSON string

### SetString

| Function name | SetString |
| --- | --- |
| Inputs | `String(String)` |

### SetNumber

| Function name | SetNumber |
| --- | --- |
| Inputs | `Number(Float)` |

### SetObject

| Function name | SetObject |
| --- | --- |
| Inputs | `Object(Map of Strings to LIB_JSON_O_Value object references)` |

### SetArray

| Function name | SetArray |
| --- | --- |
| Inputs | `Array(Array of LIB_JSON_O_Value object references)` |

### SetBoolean

| Function name | SetBoolean |
| --- | --- |
| Inputs | `Boolean(Boolean)` |

### GetString

| Function name | GetString |
| --- | --- |
| Outputs | `Success(Boolean)` Returns true as long as the type of the object is String<br/>`String(String)` |

### GetNumber

| Function name | GetNumber |
| --- | --- |
| Outputs | `Success(Boolean)` Returns true as long as the type of the object is Number<br/>`Number(Float)` |

### GetObject

| Function name | GetObject |
| --- | --- |
| Outputs | `Success(Boolean)` Returns true as long as the type of the object is Object<br/>`Object(Map of Strings to LIB_JSON_O_Value object references)` |

### GetArray

| Function name | GetArray |
| --- | --- |
| Outputs | `Success(Boolean)` Returns true as long as the type of the object is Array<br/>`Array(Array of LIB_JSON_O_Value object references)` |

### GetBoolean

| Function name | GetBoolean |
| --- | --- |
| Outputs | `Success(Boolean)` Returns true as long as the type of the object is Boolean<br/>`Boolean(Boolean)` |

### IsNull

| Function name | IsNull |
| --- | --- |
| Outputs | `IsNull(Boolean)` |

### IsType

| Function name | IsType |
| --- | --- |
| Inputs | `Type(LIB_JSON_E_Type)` |
| Outputs | `ReturnValue(Boolean)` |

Returns true if the type of the JSON value matches the input

### Clone

| Function name | Clone |
| --- | --- |
| Inputs | `Outer(Object reference)` |
| Outputs | `Clone(LIB_JSON_O_Value object reference)` |

Creates a clone of a JSON object
