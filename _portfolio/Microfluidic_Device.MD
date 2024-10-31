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

* **Scientific Principles of Microfluidic Devices** 
* **Pinched Flow Fractionation (PFF)**
* **Applications**  
* **Challenges** 

# CAD Model
A mold for the device was created using stereolithography (SLA) 3D printing. High-temperature clear resin (Form 3+) was used for the mold. SLA printing was utilized in order to obtain the fine details necessary for a microfluidic device. 
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4aa3385128126c77e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Device Design

![Selected Spefifications](/assets/img/PFF_Drawing.jpg)

**[Particle End Position Equation](https://pubs.acs.org/doi/10.1021/ac049863r)**

<img src="/assets/img/PEPE.png" alt="Particle End Position Equation" width="150" height="90">

  * <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = width of pinched segment, <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = width of broadened segment, <img src="/assets/img/Dp.png" alt="Dp" width="35" height="30"> = particle diameter, y = distance particle with <img src="/assets/img/Dp.png" alt="Dp" width="35" height="30"> travels from centerline

## Calculations using the Particle End Position Equation

### **<img src="/assets/img/Wp.png" alt="Wp" width="45" height="40"> Calculations**
  1. An aribitrary constant <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> was chosen to determine the most effective <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> for particle separation. 
  2. Two different sized particles with constant, known, diameters <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> = 550 µm and <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40"> = 165 µm were used. 
  3. Two equations were set up, one using <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> and one using <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40">. <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> was varied in each equation, with the minimum <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> as the segment cannot be smaller than the largest particle as the particle would not be able to flow through the channel. 

<img src="/assets/img/WpVary.png" alt="WpVary" width="250" height="190">

  4. The difference between y values was then calculated. 

<img src="/assets/img/delta_y.png" alt="delta_y" width="150" height="90">

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** As <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> increased, the difference between y values decreased.
  * **Conclusion:** The smallest possible <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> should be used to obtain the largest possible distance between different sized particles. Thus, <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> = 0.800 mm = 800 µm, as this was the smallest possible size that could be accurately printed by the resin printer without a print failure.

### **<img src="/assets/img/Wb.png" alt="Wb" width="45" height="40"> Calcuations**
  1. Two y equations were set up using the newly determined <img src="/assets/img/Wp.png" alt="Wp" width="35" height="30"> value, and <img src="/assets/img/Dmin.png" alt="Dmin" width="45" height="40"> for one equation and <img src="/assets/img/Dmax.png" alt="Dmax" width="45" height="40"> for the other.

<img src="/assets/img/WbVary.png" alt="WbVary" width="250" height="190">

  2. <img src="/assets/img/Wb.png" alt="Wb" width="45" height="40"> was varied and the difference between y values was calculated.

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** as <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> increased, the difference between y values increased.
  * **Conclusion:** the largest possible <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> should be used to obtain the largest possible distance between different sized particles. Thus, <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 17.8 mm, as this was the largest possible size that could be contained in the microfluidic device.

### Output Channel y Position
  1. Divide <img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 17.8 mm by 2 to achieve the y position above the midline of the broadened segment. $<img src="/assets/img/Wb.png" alt="Wb" width="35" height="30"> = 8.9 mm = 8900 µm

  2. Plug in all variables to obtain the y value for the smallest particle and the y position for the largest particle. 

<img src="/assets/img/ysl.png" alt="ysl" width="350" height="290">

  3. Determine the midpoint between the two y positions

<img src="/assets/img/midpoint.png" alt="midpoint" width="350" height="290">

  * **Rationale:** It is desired to have the separation point between the two channels that will collect the two different particles to be in between the two calculated y values. If the separation point is between the two numbers calculated above, the particles should flow into their respective channels, with room for discrepancies between particles. 
  * **Results:** The smallest particle should move 7.982 mm away from the midline towards the outer edge of the device and the largest particle should move 5.840 mm away from the midline towards the outer edge of the device. 
  * **Conclusion:** Therefore, the two end channels sohuld be separated by a wall that begins at a point 7.00 mm away in the y direction from the midline. The smaller particles will flow into the topmost channel that ranges from y = 7 mm to y = 8.9 mm as 7 mm < <img src="/assets/img/ysmall.png" alt="ysmall" width="55" height="50"> < 8.9 mm. The larger particles will flow through the channel closer to the midline as the channel ranges from y = 0 to y = 7 and  0 mm < <img src="/assets/img/ylarge.png" alt="ylarge" width="55" height="50"> < 7 mm.

### Rationale for Selected Geometries

|                   | Rationale |
| ----------------- | ------- | 
| Broadened Segment | As explained above, the width of the broadened segment was determined by the Particle End Position Equation. The length of the segment was maximized in order to allow for wide output channels with gradual angles, but was limited by the size of the base model used. The angle of the broadened segment compared to the pinched segment was 180 degrees to ensure maximum particle movement and separation in the y direction.|
| Pinched Segment   | The width of the pinched segment was determined by the Particle End Position Equation, as explained above. The length of the pinched segment was determined based off of previous devices found in [literature](https://pubs.acs.org/doi/10.1021/ac049863r), which had a length that was close to the minimum feature size. |
| Input Channels    | It has been found that the input channels should meet at a gradual angle, and thus the input channels met at a 45 degree angle. The width of the input channels was 1 mm in order to be slightly wider than the pinched segment width. The length of the input channels was constrained by the width of the input channels, 45 degree angle, length of the broadened and pinched segments, and placement of the counterbores in the base model used. |
| Output Channels   | The placement in the y direction of the horizontal line for the topmost and bottom most output channels was determined by the Particle End Position Equation, as explained above. The outer channels had gradual angles (12 degrees) in comparison to each other so as not to disrupt the flow of particles greatly. There are four output channels in order to sort the two different sized particles into two different channels, and the remainig two channels were built in to maintain symmetry across the x axis. Symmetry was necessary in order to not disrupt the liquid and particle flow. The endpoints of the channel were constrained in both the y and x direction by the size of the counterbores. The width of channels were determined by the Particle End Position and the gradual angle desired between channels. The channels begin 14.52 mm from the end of the broadened segment because this length is just short of the middle of the broadened segment. This length allows the particles time and space to move into their anticipated y position, but not too much space before separating them into separate channels to avoid outside factors can effect their y position. |
| Depth of Channels and Segments   | The depth of the channels and segments was 0.8 mm as this was the smallest size that the resin printer could accurately print without any print failures. |

# Flow Rate Calculations

1. Volume Estimation

<img src="/assets/img/volume.png" alt="volume" width="150" height="90"> 

2. Conversion 
    * $V = 615.17 mm^3 = 0.61517 cm^3 = 0.61517 mL$  

3. Determination of Flow Rates  
    * Desired ratio of flow rates based on [literature](https://pubs.acs.org/doi/10.1021/ac049863r): 

<img src="/assets/img/ratio.png" alt="ratio" width="150" height="90">
          
    * Assumption: fill the entirety the volume of the device in 10 seconds
  
<img src="/assets/img/flowE.png" alt="flowE" width="150" height="90">

# Instructions for the Production of the Microfluidic Device

1. Upload the Arduino code with the desired flow rate to the Arduino Uno via a USB cable. Remove the cable when done.
2. Plug the syringe pump into an outlet
3. Insert a pre-filled syringe into the syringe holder while making sure that the carriage has been pulled back far enough to fit the syringe. The carriage can be moved manually by turning the coupler counterclockwise or by continuously pressing the red button. 
4. Press and release the bigger black button. This will turn the motor clockwise continuously. The LED will turn green and the lead screw will turn, moving the carriage and pressing the plunger of the syringe. When the plunger reaches its end point, the carriage will hit a stop button which will stop the motion of the motor and turn the LED red. At this point, all of the liquid should be dispensed from the syringe and the user can repeat the operation steps for new syringes.

{% include gallery caption="Microfluidics Device Gallery. (Left: Mold and PFF device. Center: Resin printed mold of PFF device. Right: Particles flowing through PFF device)" %}
