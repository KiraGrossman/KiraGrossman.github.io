---
title: "Multi-Material Pliers"
excerpt: "Multi-material pliers printed with Fused Filament Fabrication 3D printing capable of picking up small items."
header:
  image: /assets/img/front_good.png
  teaser: /assets/img/sp1.png
gallery:
  - image_path: assets/img/sp1.png
  - image_path: assets/img/sp2.png
  - image_path: assets/img/sp3.png
   
---

# Description

High functioning, light-weight, low-cost, easy-to-assemble pliers! These pliers are the coolest design on the market! 

* **High Functionality:** While small in size, these pliers are mighty in strength and precision! The pliers are capable of picking up objects as small and light as a single resistor or as large and heavy as an iPhone 14 Pro with a case on!
* **Light-weight:** Made of PLA and TPU, and at 170 mm long, 70 mm wide with a maximum height of 6 mm, these pliers weigh less than 1 pound! The pliers are also small enough to fit compfortable in a handbag or on-the-go tool kit.
* **Low-Cost:** The pliers were made with Fused Filament Fabrication (FFF) 3D printing and recycled material, lowering production costs. 
* **Easy-to-Assemble:** With only 5 easy-to-understand parts, these pliers could be assembled by anyone!

# Print-in-Place Parts

**What are Print-in-Place Parts?**
* Print-in-place (PIP) is a 3D printing technique where the desired parts of an assembly are printed in the correct orientation and position so that they do not need to be assembled post-print. The whole assembly is printed as a single piece, with small gaps between parts so they do not fuse together.

**Why use PIP parts?**
* Using PIP allows for the device to be used immediately, without having to assemble after printing. Also, designing the device is made easier by off-setting the geometry of the joints that connect parts to have a better, more accurate fit between joints. 

**What are some applications where PIP is useful?**
* PIP is useful for parts that have hinges (such as box hinges, toy figurines, snake chains) as the highly accurate joints allow for the part to hinge or bend without breaking. In addition, PIP is often used to print gears, screws, and other parts that require precise movement between joints.

**Best materials for PIP parts**
* **Polylactic Acid (PLA):** PLA is rigid, easy-to-print, and can provide good detail. PLA also has minimal warping and works well at low temperatures. Thus, PLA can be used for small hinges and snap-fit connections, which do not undertake a large load as PLA is brittle.
* **Thermoplastic Polyurethane (TPU):** TPU is great for creating the flexible joints, living hinges, and other bendable parts within a PIP assembly as the material is very flexble. TPU also has great impact resistance. TPU is often used in combination with PLA to create PIP parts that have both rigid and flexible components (such as pliers!).
* **Nylon:** Nylon works well for PIP parts that require durability, such as gears and clamps, as nylon is strong and wear-resistant. Nylon is ideal for high-stress parts as it is flexible and strong. The nylon parts can be printed using Selective Laser Sintering.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a45e6d97e27d443d7e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Design



# Relevant Specifications

All parts were custom made to specifically fit the off-the-shelf parts and to execute the purposes of the syringe pump.  

| Part | Purpose |
| ----------- | ----------- |
| Enclosure Top and Bottom | The enclosure contains the breadboard, wires, Arduino, and power supply, making the syringe pump one portable unit. The enclosure also protects the internal components from damage if dropped. The top of the enclosure has grooves to house the aluminum extrusion. Attached to the side of the enclosure are the three buttons and LED light. |
| Carriage | The carriage moves along the lead screw and linear rod linearly to compress the syringes. |
| End Support | The end support holds the linear rod and lead screw in place. |
| Motor Mounting Plate | The motor mounting plate holds the motor in place. |
| Syringe Holder | The syringe holder holds the syringes in place and contains the limit switch. |

# Print Settings

The syringe pump was programmed using an [Arduino code](/Syringe_Pump.ino). The code was used to run the motor, thus determining the flow rate of the syringe. The code also controlled the On/Off capabilities of the pump, the LED light, and the direction of movement of the carriage. 


{% include gallery caption="Iterations of Pliers" %}

