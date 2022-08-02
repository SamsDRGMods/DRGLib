---
title: Contribution guidelines
parent: Guides
layout: page
---

Need a feature added to DRGLib and the regular dev team\* isn't fast enough? Try adding it yourself!

To do this you'll first need to [build DRGLib from the source](https://github.com/SamsDRGMods/DRGLib/wiki/Tutorial;-Building-DRGLib-from-source)

- All pull requests should have a detailed list of changes
- Pull requests should merge into the Dev-Staging branch
  - Any pull requests for main will be rejected. The dev process is to prepare an update in Dev-Staging then merge into main
- Please minimize the number of changed assets in any pull request
- Make sure that any changes you make will *not* break existing mods. This means:
  - No removing documented functions
  - No removing pins from documented functions
  - No layout changes for a documented widget
  - The following changes have been tested to not break anything:
    - Adding a new pin to a function
    - Adding new variables to an object
    - Making a non-pure function pure (But not the inverse)


\* Does one person count as a team? Asking for a friend
