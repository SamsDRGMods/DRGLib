---
title: LIB_SAV_O_CustomSaveObject
parent: Objects
layout: page
---

# LIB_SAV_O_CustomSaveObject

This object is designed to make it as easy as possible to quickly iterate on settings objects, and easily generate settings pages for them. For full instructions on the use and use cases of this object refer to this guide TODO

## Variables

| Variable name | Variable type | Description |
| --- | --- | --- |
| `SaveLocation` | String | The path to save to. For example, the main DRGLib settings object saves to DRGLib\Settings |
| `ObjectVersion` | Integer | Intended to allow you (The Modder) to keep track of revisions of your save object |

## Functions

### AddProperty

| Function name | AddProperty |
| --- | --- |
| Inputs | `PropertyID(Name)` Leave empty for the property to be "UnnamedXXXX" <br/> `PropertyData(LIB_SAV_O_BaseProperty object reference)` The property to add |

Adds a new property to the custom save object. If the propertyID matches an existing property then overwrites it

### GetProperty

| Function name | GetProperty |
| --- | --- |
| Inputs | `PropertyID(Name)` The property to retrieve |
| Outputs | `Property(LIB_SAV_O_BaseProperty object reference)`</br>`Success(Boolean)` |

Retrieve a property with a given ID from a custom save game

### GetPropertyIDs

| Function name | SetString |
| --- | --- |
| Outputs | `PropertyIDs(Array of Names)` |

Gets an array of all the properties held by the custom save game

## Event Dispatchers

| Name | Inputs | Description |
| --- | --- | --- |
| `PropertyUpdated` | | Called any time any property is updated |
| `PropertyListChanged` | | Called any time a property is added |
