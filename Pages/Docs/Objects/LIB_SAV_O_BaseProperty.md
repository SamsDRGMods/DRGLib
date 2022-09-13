---
title: LIB_SAV_O_BaseProperty
parent: Objects
layout: page
---

# LIB_SAV_O_BaseProperty

This is the parent object of all save properties, and holds some common functions that all of them use

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `PropertyType` | LIB_SAV_E_PropertyType enum | |
| `CanSerializeToJSON` | ReadOnly boolean | |
| `SettingsOptions` | LIB_SAV_S_SettingsWidgetOptions |  |

## Functions

### SerializeValueToJSON

| Function name | SerializeValueToJSON |
| --- | --- |
| Inputs | `Outer (Object reference)` |
| Outputs | `JSON (LIB_JSON_O_Value object reference)` |

Exists to be overridden by children

### PopulateValueFromJSON

| Function name | PopulateValueFromJSON |
| --- | --- |
| Inputs | `JSON (LIB_JSON_O_Value object reference)` |
| Outputs | `Success (Boolean)` |

Exists to be overridden by children

### ReadPropertyAsBoolean

| Function name | ReadPropertyAsBoolean |
| --- | --- |
| Outputs | `Value (Boolean)`</br>`Success (Boolean)` |

Automatically casts this object to a BooleanProperty and attempts to read it

### ReadPropertyAsString

| Function name | ReadPropertyAsString |
| --- | --- |
| Outputs | `Value (String)`</br>`Success (Boolean)` |

Automatically casts this object to a StringProperty and attempts to read it

### ReadPropertyAsInt

| Function name | ReadPropertyAsInt |
| --- | --- |
| Outputs | `Value (Int)`</br>`Success (Boolean)` |

Automatically casts this object to a IntProperty and attempts to read it

### ReadPropertyAsFloat

| Function name | ReadPropertyAsFloat |
| --- | --- |
| Outputs | `Value (Float)`</br>`Success (Boolean)` |

Automatically casts this object to a FloatProperty and attempts to read it

### ReadPropertyAsByte

| Function name | ReadPropertyAsByte |
| --- | --- |
| Outputs | `Value (Byte)`</br>`Success (Boolean)` |

Automatically casts this object to a ByteProperty and attempts to read it

### ReadPropertyAsColor

| Function name | ReadPropertyAsBoolean |
| --- | --- |
| Outputs | `Value (LinearColor structure)`</br>`Success (Boolean)` |

Automatically casts this object to a ColorProperty and attempts to read it

### ReadPropertyAsJSON

| Function name | ReadPropertyAsJSON |
| --- | --- |
| Outputs | `Value (LIB_JSON_O_Value object reference)`</br>`Success (Boolean)` |

Automatically casts this object to a JSONProperty and attempts to read it

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| `PropertyUpdated` | | Called when this property is updated |
