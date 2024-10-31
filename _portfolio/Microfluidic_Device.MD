---
title: "Microfluidic Device"
excerpt: "A 3D printed microfluidic device that uses pinched flow fractionation to separate particles."
header:
  image: assets/img/PFF_Set_Up.jpg
  teaser: /assets/img/PPF_device.jpg
gallery:
  - image_path: assets/img/PFF_Mold_and_Device.jpg
  - image_path: assets/img/PFF_mold.jpg
  - image_path: assets/img/PFF.png
   
---

# Device in Action
Watch in real-time the particles be separated by size [here](https://youtu.be/7T2pOAr_oSM)!

[![7T2pOAr_oSM](https://img.youtube.com/vi/7T2pOAr_oSM/0.jpg)](https://youtu.be/7T2pOAr_oSM)


# Background 

* **Overview of Microfluidic Devices** 
  * Microfluidic devices are small-scale systems that control and manipulate tiny volumes of fluids. These devices are often used in the biomedical realm, for applications such as diagnostic devices, as they require minimal amounts of fluids and reagents for the efficient processing of the fluids. Smaller amounts of reagents used along with the ability to 3D print microfluidic devices significantly lowers the costs of diagnostic and other biomedical analyses and tests.  
* **Scientific Principles of Microfluidic Devices** 
  * Due to the micro-compartments of the device, capillary action occurs, causing liquid movement. Also, in microfluidic devices, there is only laminar flow, which is not conducive to mixing. However, mixing is necessary in microfluidic devices to perform assays and other biological tests. Mixing can occur in microfluidic devices though diffusion by increasing the surface area of the channels (split flow or increase path length) and chaotic advection by adding geometries (corners, chevrons, obstacles, intersections).  
* **Pinched Flow Fractionation (PFF)**
  * Pinched Flow Fractionation (PFF) allows for the continuous separation of particles by size. Two fluids, one with the particles and one without, intersect at different speeds into a 'pinched' (smaller width) segment of the device. Both fluids experience laminar flow. After the pinched segment, the channel expands into a broadened segment and the smaller particles are pushed to the outside, following the streamline that is passing through its center of mass. Larger particles stay closer to the center of the broadened segment as the streamline passing through its center of mass is influenced more by the liquid without particles, which will continue flowing closer to the middle and the side of its input channel. Thus, the particles will have different positions in the y axis and can then be separated into different channels for collection.
* **Applications**  
  * Diagnostic devices (separate cells based on size to diagnose different diseases)
  * Biological and chemical analyses
  * Environmental assessments
  * Chemical and food processing
* **Challenges** 
  * The minimum feature size of the resin printer used was 85 microns, and for PFF, smaller sizes are desired in order to separate the particles most effectively.
  * There is a lack of published specifications for PFF devices, resulting in design specifications that were based off of my best judgement and knowledge of the topic.

# CAD Model
A mold for the device was created using stereolithography (SLA) 3D printing. High-temperature clear resin (Form 3+) was used for the mold. SLA printing was utilized in order to obtain the fine details necessary for a microfluidic device. 
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4aa3385128126c77e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Device Design

![Selected Specifications](/assets/img/PFF_Drawing.jpg)

**[Particle End Position Equation](https://pubs.acs.org/doi/10.1021/ac049863r)**

<img src="/assets/img/PEPE.png" alt="Particle End Position Equation" width="150" height="90">

  * <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = width of pinched segment, <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = width of broadened segment, <img src="/assets/img/Dp.png" alt="Dp" width="35" height="30"> = particle diameter, y = distance particle with <img src="/assets/img/Dp.png" alt="Dp" width="35" height="30"> travels from centerline

## Calculations using the Particle End Position Equation

### **<img src="/assets/img/Wp.png" alt="Wp" width="45" height="40"> Calculations**
  1. An arbitrary constant <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> was chosen to determine the most effective <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> for particle separation. 
  2. Two different sized particles with constant, known, diameters <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> = 550 µm and <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40"> = 165 µm were used. 
  3. Two equations were set up, one using <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> and one using <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40">. <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> was varied in each equation, with the minimum <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> as the segment cannot be smaller than the largest particle as the particle would not be able to flow through the channel. 

<img src="/assets/img/WpVary.png" alt="WpVary" width="250" height="190">

  4. The difference between y values was then calculated. 

<img src="/assets/img/delta_y.png" alt="delta_y" width="250" height="190">

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** As <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> increased, the difference between y values decreased.
  * **Conclusion:** The smallest possible <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> should be used to obtain the largest possible distance between different sized particles. Thus, <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = 0.800 mm = 800 µm, as this was the smallest possible size that could be accurately printed by the resin printer without a print failure.

### **<img src="/assets/img/Wb.png" alt="Wb" width="45" height="40"> Calculations**
  1. Two y equations were set up using the newly determined <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> value, and <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40"> for one equation and <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> for the other.

<img src="/assets/img/WbVary.png" alt="WbVary" width="250" height="190">

  2. <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> was varied and the difference between y values was calculated.

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** as <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> increased, the difference between y values increased.
  * **Conclusion:** the largest possible <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> should be used to obtain the largest possible distance between different sized particles. Thus, <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 17.8 mm, as this was the largest possible size that could be contained in the microfluidic device.

### Output Channel y Position
  1. Divide <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 17.8 mm by 2 to achieve the y position above the midline of the broadened segment. <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 8.9 mm = 8900 µm

  2. Plug in all variables to obtain the y value for the smallest particle and the y position for the largest particle. 

<img src="/assets/img/ysl.png" alt="ysl" width="450" height="390">

  3. Determine the midpoint between the two y positions

<img src="/assets/img/midpoint.png" alt="midpoint" width="350" height="290">

  * **Rationale:** It is desired to have the separation point between the two channels that will collect the two different particles to be in between the two calculated y values. If the separation point is between the two numbers calculated above, the particles should flow into their respective channels, with room for discrepancies between particles. 
  * **Results:** The smallest particle should move 7.982 mm away from the midline towards the outer edge of the device and the largest particle should move 5.840 mm away from the midline towards the outer edge of the device. 
  * **Conclusion:** Therefore, the two end channels should be separated by a wall that begins at a point 7.00 mm away in the y direction from the midline. The smaller particles will flow into the topmost channel that ranges from y = 7 mm to y = 8.9 mm as 7 mm < <img src="/assets/img/ysmall.png" alt="ysmall" width="75" height="70"> < 8.9 mm. The larger particles will flow through the channel closer to the midline as the channel ranges from y = 0 to y = 7 and  0 mm < <img src="/assets/img/ylarge.png" alt="ylarge" width="75" height="70"> < 7 mm.

### Rationale for Selected Geometries

|                   | Rationale |
| ----------------- | ------- | 
| Broadened Segment | As explained above, the width of the broadened segment was determined by the Particle End Position Equation. The length of the segment was maximized in order to allow for wide output channels with gradual angles, but was limited by the size of the base model used. The base model used required a 4 mm border between the edge of the device and the broadened segment to prevent leaking. The angle of the broadened segment compared to the pinched segment was 180 degrees to ensure maximum particle movement and separation in the y direction.|
| Pinched Segment   | The width of the pinched segment was determined by the Particle End Position Equation, as explained above. The length of the pinched segment was determined based off of previous devices found in [literature](https://pubs.acs.org/doi/10.1021/ac049863r), which had a length that was close to the minimum feature size. |
| Input Channels    | It has been found that the input channels should meet at a gradual angle, and thus the input channels met at a 45 degree angle. The width of the input channels was 1 mm in order to be slightly wider than the pinched segment width. The length of the input channels was constrained by the width of the input channels, 45 degree angle, length of the broadened and pinched segments, and placement of the counterbores in the base model used. |
| Output Channels   | The placement in the y direction of the horizontal line for the topmost and bottom most output channels was determined by the Particle End Position Equation, as explained above. The outer channels had gradual angles (12 degrees) in comparison to each other so as not to disrupt the flow of particles greatly. There are four output channels in order to sort the two different sized particles into two different channels, and the remaining two channels were built in to maintain symmetry across the x axis. Symmetry was necessary in order to not disrupt the liquid and particle flow. The endpoints of the channel were constrained in both the y and x direction by the size of the counterbores. The width of channels were determined by the Particle End Position and the gradual angle desired between channels. The channels begin 14.52 mm from the end of the broadened segment because this length is just short of the middle of the broadened segment. This length allows the particles time and space to move into their anticipated y position, but not too much space before separating them into separate channels to avoid outside factors can affect their y position. |
| Depth of Channels and Segments   | The depth of the channels and segments was 0.8 mm as this was the smallest size that the resin printer could accurately print without any print failures. |

# Flow Rate Calculations

1. Volume Estimation:          
<img src="/assets/img/volume.png" alt="volume" width="350" height="290"> 
2. Conversion:          
<img src="/assets/img/conversion.png" alt="conversion" width="350" height="290">
  3. Determination of Flow Rates  
      * Desired ratio of flow rates based on [literature](https://pubs.acs.org/doi/10.1021/ac049863r):  <img src="/assets/img/ratio.png" alt="ratio" width="150" height="90">
          
      * Assumption: fill the entirety the volume of the device in 10 seconds
  
<img src="/assets/img/flowE.png" alt="flowE" width="350" height="290">

# Instructions for the Production of the Microfluidic Device

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
