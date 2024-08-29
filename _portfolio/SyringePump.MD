---
title: "Syringe Pump"
excerpt: "A 3D printed motor powered container used for expelling liquid from syringes at various speeds programmed with Arduino code."
header:
  image: /assets/img/LF3DP-Banner-2.jpg
  teaser: /assets/img/Large-Format-3D-Printer-Thumbnail.png
gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png
   
---

# Features

* **Massive Print Area: 1140 x 1200 x 1100 mm.** With a build envelop just shy of 4 feet in all dimensions, the LF3DP is capable of printing furniture and other large objects.
* **High Volumetric Output Extruder: 1 kg/hr - 450 C.** This printer come standard with a MDPH2 extruder by Massive Dimension, which can extrude at a rate of 1 kg/hr. Unlike typical filament extruders, the MDPH2 uses a screw to convey and liquify plastic pellets before the molten material is pushed out of a large nozzle (1 to 5 mm extrusion diameter). Please note: This printer can also be configured for other high flow rate extruders, such as the Typhoon and Pulsar by Dyze Design.
* **Affordable Pellet Feedstock** Pellets are the cheapest form of feedstock for any plastic-based manufacturing process. Save 50-75% of material costs by using pellets instead of spools of filament. Concentrated colorant can be added to the virgin material to achieve any color in the rainbow without requiring large amounts of storage. Recyled material can also be used for sustainable material printing.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a438d5332e8cbad27e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Off-the-Shelf Parts

| Part | Quantity |
| ----------- | ----------- |
| 250 mm lead screw with 2 mm pitch and 2 mm lead | 1 |
| 250 mm Lead Screw with 2 mm pitch and 8 mm lead | 1 |
| 1/4" x 8 mm Flexible Coupling | 1 |
| 200 mm Linear Rod with 8 mm diameter | 1 |
| LM8UU Linear bearing for 8 mm diameter rod | 1 |
| 2040 Aluminum Extrusion 1' Length | 1 |
| Nema 17 Stepper Motor | 1 |
| MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 4 Amp | 1 |
| Arduino Uno | 1 |
| A4988 Stepper Driver | 1 |
| Small Breadboard | 1 |
| Panel Mount Latching Push Buttons: On/Off | 1 |
| Panel Mount Momentary Push Buttons | 2 |
| Limit Switch | 1 |
| RGB Common Cathode LED | 1 |
| M5 T-Nut | 3 |
| M5-0.8 x 8 mm Bolt | 6 |
| M3-0.5 x 10 mm Bolt | 4 |
| 8 mm Collar | 2 |
| M4-0.7 x 3 mm Bolt | 2 |
| M3-0.5 x 8 mm Bolt | 2 |
| 8 mm Linear Rod Clamp | 2 |
| F688-2RS Flanged Ball Bearing | 2 |
| TR8 x 8 Nut | 1 |
| Syringe | 2 |
| Heat-Set Insert | 4 |

# 3D Printed Parts

All parts were custom made to specifically fit the off-the-shelf parts and to execute the purposes of the syringe pump.  

| Part | Purpose |
| ----------- | ----------- |
| Enclosure Top and Bottom | The enclosure contains the breadboard, wires, Arduino, and power supply, making the syringe pump one portable unit. The enclosure also protects the internal components from damage if dropped. The top of the enclosure has grooves to house the aluminum extrusion. Attached to the side of the enclosure are the three buttons and LED light. |
| Carriage | The carriage moves along the lead screw and linear rod linearly to compress the syringes. |
| End Support | The end support holds the linear rod and lead screw in place. |
| Motor Mounting Plate | The motor mounting plate holds the motor in place. |
| Syringe Holder | The syringe holder holds the syringes in place and contains the limit switch. |

# Arduino Code

The syringe pump was programmed using an [Arduino code](/Syringe_Pump.ino). The code was used to run the motor, thus determining the flow rate of the syringe. The code also controlled the On/Off capabilities of the pump, the LED light, and the direction of movement of the carriage. 

{% include gallery caption="Syringe Pump Gallery" %}
