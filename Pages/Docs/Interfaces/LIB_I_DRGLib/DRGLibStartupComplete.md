---
title: DRGLibStartupComplete
parent: LIB_I_DRGLib
layout: page
grand_parent: Interfaces
---

# DRGLibStartupComplete

| Function name | DRGLibStartupComplete |
| --- | --- |
| Interface | Content/DRGLib/Main/LIB_I_DRGLib |
| Inputs | `LIB_A_MainReference(LIB_A_Main Actor Reference)` |

Guaranteed to call only once, and after DRGLib is ready. Best used to set up anything in your mod that relies on DRGLib being ready with a LIB_A_Main Reference, like custom inputs or debug watches

**Note:** Only works for actors, as DRGLib gets a reference to your mod through "GetAllActorsWithInterface" in order to call this function  
**Note:** Is called one frame after DRGLib is spawned. This normally will not cause problems, as all mod Init actors are spawned on the same frame but if you spawn an actor later that needs this, then you'll need to call "UpdateInformedActors" on LIB_A_Main
