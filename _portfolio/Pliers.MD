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

# Design and Relevant Specifications

![Selected Specifications1](/assets/img/Pliers_Specs1.png)
![Selected Specifications2](/assets/img/Pliers_Specs2.png)

All parts were custom made using FFF printing

### Design Rationale

| Part | Purpose | Material |
| ----------- | ----------- | ----------- |
| Handle and Nose | The Handle is connected to the Nose by the Inner Handle Diameter. The Handle's and Nose's shapes and sizes were created to mimic that of manufactured pliers. The Inner Handle Diameter was created in order to rotate the Handle and Nose around the Secure, which would allow for the pinching capability of the pliers. There are two Handle/Nose parts in the pliers assembly, and the two parts mirror each other so that when the Handles are squeezed together, the Noses will touch. The Inner Handle Diameters of the two Handles/Noses are 3 mm tall and are stacked on top of each other. This allows each Handle/Nose to rotate independently of the other. Since the Inner Handle Diameters are stacked, the Noses are offset from each other, so the Noses are 6 mm high instead of 3. Thus, when put together, one of the Handle/Nose is flipped 180 degrees so that the Handles are mirrored and the Noses touch each other (one of the Noses is extruded 6 mm up while the other is extruded 6 mm down). The Handles also have a Flexible Part Insertion Site, where the Flexible Part is pressed into. The Flexible Part fits snuggly with the Handles and the geometry of the Flexible Part Insertion Site prevents the Flexible Part from being pulled from the device, even when the handles are being pulled apart to widen the Jaw Width. | PLA |
| Secure |  | PLA |
| Bolt |  | PLA |
| Flexible Part | | TPU |

### Relevant Specifications

| Part | Specification | Rationale |
| ----------- | ----------- | ----------- |
| Jaw Length | 40 mm | Jaw Length was based off of the specifications of manufactured pliers, and allows the Jaw to pick up longer objects. |
| Jaw Width | Resting State = 10 mm, Minimum = 0 mm, Maximum = XX | The Jaw Width varies depending on what state the pliers are in. At its resting state, the Jaw is open, with a width of 10 mm. When the Handles are squeezed together, the Jaw closes completely, which is necessary to pick up small items. The Jaw can also be widened by pulling the Handles apart, allowing the pliers to pick up wider objects. |
| Jaw Capacity | 0-300 g | The Jaws are able to pick up and move objects as small and light as a resistor. The Jaws can also pick up and move objects as large as an iPhone 14 Pro with a case on (roughly 300 g). |
| Handle Gap Width | 30 mm | The gap between the Handles is 30 mm at the base in order to allow for a similar geometry to that of manufactured pliers while still having enough space at the joint of the two handles in order to close the Nose fully. |
| Handle Width | 70 mm | The Handle Width was based off of the specifications of manufactured pliers, and allow the pliers to fit comfortably in one hand. |

# Print Settings

| Print Setting | TPU Part | PLA Parts | Rationale |
| ----------- | ----------- | ----------- | ----------- |
| Infill Density | None | 18% | The TPU part had no infil and was printed as a solid part. The part was very thin, meaning it would have little infil, and, when it was printed with infil, the print failed and there was excessive stringing. Thus, for the second iteration, the infil was removed to create a solid part that would endure the printing process. Furthermore, removing the infil made the part have better mechanical properties and made the spring component stronger. The PLA parts had an infil density of 18% to make the parts light and print faster. |
| Sparse Infill Pattern | N/A | Rectilinear | The infill pattern did not affect the mobility or functionality of the pliers and thus the default settings were used. |
| Top Infill Pattern | N/A | Monotonic | The infill pattern did not affect the mobility or functionality of the pliers and thus the default settings were used. |
| Perimeters | 3 | 4 | The TPU part was printed with 3 perimeters as that is the default print setting. The PLA parts had 4 perimeters as one iteration of parts failed to print the top millimeter of the parts. Thus, I increased the number of perimeters to ensure that the tops of the parts would be printed. |
| Wall Thickness | 0 | 0 | There were no issues with the first iterations printed with regard to the default wall thickness used and thus I continued to use the default settings. |
| Solid Layers | Top and Bottom: 3 | Top and Bottom: 3 | There were no issues with the first iterations printed with the default settings and thus I continued to use the default settings. |
| Minimum Shell Thickness | Top and Bottom: 0 | Top and Bottom: 0 | There were no issues with the first iterations printed with the default settings and thus I continued to use the default settings. |
| Extruder Temperature (Celsius) | First Layer, Other Layers: 240, 235 | First Layer, Other Layers: 215, 210 | There were no issues with the first iterations printed with the default settings and thus I continued to use the default settings. |
| Bed Temperature (Celsius) | First Layer, Other Layers: 50, 50 | First Layer, Other Layers: 65, 65 | There were no issues with the first iterations printed with the default settings and thus I continued to use the default settings. |
{% include gallery caption="Iterations of Pliers" %}

