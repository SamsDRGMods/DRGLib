// See https://aka.ms/new-console-template for more information
using UAssetAPI.ExportTypes;
using UAssetAPI.PropertyTypes.Objects;
using UAssetAPI.UnrealTypes;
using UAssetAPI;

//This is largely built clumsily off of the UassetAPI example script for editing an asset

// Instantiate the asset with the path and the engine version (4.18).
// This reads the entire asset to memory at once; use a different constructor with an AssetBinaryReader if you don't want that
UAsset myAsset = new UAsset(Environment.CurrentDirectory + "..\Temp", EngineVersion.VER_UE4_27);

// We want the 2nd export, so we reference the export at index 1.
// There are many types, but any export that has regular "tagged" data like you see as properties in UAssetGUI can be cast to a NormalExport, like this one.
NormalExport myExport = (NormalExport)myAsset.Exports[1];

// myExport.Data will give us a List<PropertyData> which you can enumerate if you like, but we can reference a property by name or index with the export directly.
// We know this is a FloatPropertyData because it is serialized as a FloatProperty. BoolPropertyData is a BoolProperty, ObjectPropertyData is an ObjectProperty, etc.
FloatPropertyData myFloat = (FloatPropertyData)myExport["MaxRotationAngle"];
Console.WriteLine(myFloat.Value);

// All we have to do to change this value is to set myFloat.Value, and we'll be ready to re-save the asset.
myFloat.Value = 1337;

// Save the asset back to disk with UAsset.Write and a path.
myAsset.Write("NEW.uasset");

Console.WriteLine("All done!");
Console.ReadLine();