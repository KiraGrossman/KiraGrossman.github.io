---
title: "Bicycle Phone Mount"
excerpt: "A 3D printed device that can hold a phone in different orientations while attached to handle bars on a bicycle."
header:
  image: assets/img/PFF_Set_Up.jpg
  teaser: /assets/img/PPF_device.jpg
gallery:
  - image_path: assets/img/PFF_Mold_and_Device.jpg
  - image_path: assets/img/PFF_mold.jpg
  - image_path: assets/img/PFF.png
   
---

# Device in Action
Watch the amazing capabilities of the phone mount [here](https://youtu.be/7T2pOAr_oSM)!

[![7T2pOAr_oSM](https://img.youtube.com/vi/7T2pOAr_oSM/0.jpg)](https://youtu.be/7T2pOAr_oSM)


# Top-Down Modeling
Top-down modeling was used in Fusion 360 in order to create the design of the mount.
* 


# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4aa3385128126c77e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Design Rationale

![Labeled_Design](/assets/img/PFF_Drawing.jpg)


| Part                | Material | Rationale |
| ------------------- | -------- | --------- | 
| Top Clamp |  | Nylon |
| Bottom Clamp |  | Nylon |
| Rotator |  | PLA |
| Spring Loaded Knobs |  | Nylon |
| Cap |  | Nylon |
| Base |  | Nylon |
| Spur Gear |  | Nylon |
| Holder (x2) |  | PLA |

# Assembly Instructions
M5 x 15 mm screws --> clamp
M3 x 15 mm screw --> rotator
1. Create design for the mold of the device in Fusion 360.
2. Upload the design to PreForm and then upload the file to a resin printer. Make the layer resolution 25 microns.
3. When the print is finished, wash the device for 5 minutes on the print bed in FormWash.
4. Remove the mold from the print bed and wash for 5 minutes in fresh IPA
5. Lay the device at an angle to prevent pooling of isopropyl alcohol and let the device dry for 30 minutes.
6. Using compressed air, blow off debris from the mold.
7. Cure the device in the Form Cure for 60 seconds with no heat.
8. Remove support materials. Do not touch the inside of the mold. Ensure that there is no uncured resin on the surface of the mold, as this will prevent the polydimethyl siloxane (PDMS) from crosslinking.
9. Coat the device with a thin layer of parylene-C using a parylene deposition machine. This is so that the acrylates from the resin do not leak into the device.
10. Place the mold in a petri dish.
11. Mix together PDMS and curing agent at a weight ratio of 10:1, respectively.
12. Pour the PDMS mixture into the mold.
13. Put the mold with the mixture into a vacuum chamber for 30 minutes to degas the mixture.
14. Place the mold into an over at 80 degrees Celsius and cure for 3 hours.
15. Demold the PDMS device.
16. Bond the PDMS device to a glass coverslip using PlasmaFlo PDC-FMG plasma cleaner.
17. Sterilize device in an autoclave.

{% include gallery caption="Microfluidics Device Gallery. (Left: Mold and PFF device. Center: Resin printed mold of PFF device. Right: Particles flowing through PFF device)" %}

