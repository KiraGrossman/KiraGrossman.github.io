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

  * <img src="/assets/img/Wp.png" alt="Wp" width="30" height="25"> = width of pinched segment, $W_B$ = width of broadened segment, $D_p$ = particle diameter, y = distance particle with $D_p$ travels from centerline

## Calculations using the Particle End Position Equation

### **$W_p$ Calculations**
  1. An aribitrary constant $W_B$ was chosen to determine the most effective $W_p$ for particle separation. 
  2. Two different sized particles with constant, known, diameters $D_{max}$ = 550 µm and $D_{min}$ = 165 µm were used. 
  3. Two equations were set up, one using $D_{max}$ and one using $D_{min}$. $W_p$ was varied in each equation, with the minimum $W_p = D_{max}$ as the segment cannot be smaller than the largest particle as the particle would not be able to flow through the channel. 

      a. $y_{max}=\frac{(W_p - \frac{550 µm}{2})W_B}{W_p}$

      b. $y_{min}=\frac{(W_p - \frac{165 µm}{2})W_B}{W_p}$

  4. The difference between y values was then calculated. 

      a. $\\Delta{y} =y_{min} - y_{max}$

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** As $W_p$ increased, the difference between y values decreased.
  * **Conclusion:** The smallest possible $W_p$ should be used to obtain the largest possible distance between different sized particles. Thus, $W_p$ = 0.800 mm = 800 µm, as this was the smallest possible size that could be accurately printed by the resin printer without a print failure.

### **$W_B$ Calcuations**
  1. Two y equations were set up using the newly determined $W_p$ value, and $D_{min}$ for one equation and $D_{max}$ for the other.

      a. $y_{max}=\frac{(800 µm - \frac{550 µm}{2})W_B}{800 µm}$

      b. $y_{min}=\frac{(800 µm - \frac{165 µm}{2})W_B}{800 µm}$

  2. $W_B$ was varied and the difference between y values was calculated.

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** as $W_B$ increased, the difference between y values increased.
  * **Conclusion:** the largest possible $W_B$ should be used to obtain the largest possible distance between different sized particles. Thus, $W_B$ = 17.8 mm, as this was the largest possible size that could be contained in the microfluidic device.

### Output Channel y Position
  1. Divide $W_B$ = 17.8 mm by 2 to achieve the y position above the midline of the broadened segment. $W_B$ = 8.9 mm = 8900 µm

  2. Plug in all variables to obtain the y value for the smallest particle and the y position for the largest particle. 

      a. $y_{small.particle}=\frac{(800 µm - \frac{550µm}{2})8900µm}{800µm} = 7982.19µm$

      b. $y_{large.particle}=\frac{(800 µm - \frac{550µm}{2})8900µm}{800µm} = 5840.63 µm$

  3. Determine the midpoint between the two y positions

      a. $5.840 mm + \frac{7.982 mm - 5.840 mm}{2} = 6.91 mm$

  * **Rationale:** It is desired to have the separation point between the two channels that will collect the two different particles to be in between the two calculated y values. If the separation point is between the two numbers calculated above, the particles should flow into their respective channels, with room for discrepancies between particles. 
  * **Results:** The smallest particle should move 7.982 mm away from the midline towards the outer edge of the device and the largest particle should move 5.840 mm away from the midline towards the outer edge of the device. 
  * **Conclusion:** Therefore, the two end channels sohuld be separated by a wall that begins at a point 7.00 mm away in the y direction from the midline. The smaller particles will flow into the topmost channel that ranges from y = 7 mm to y = 8.9 mm as 7 mm < $y_{small.particle}$ < 8.9 mm. The larger particles will flow through the channel closer to the midline as the channel ranges from y = 0 to y = 7 and  0 mm < $y_{large.particle}$ < 7 mm.

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
    * $Volume = length\times width\times height$ 

    * $V= 43.2 mm\times 17.8 mm\times 0.8 mm = 615.17 mm^3$  

2. Conversion 
    * $V = 615.17 mm^3 = 0.61517 cm^3 = 0.61517 mL$  

3. Determination of Flow Rates  
    * Desired ratio of flow rates based on [literature](https://pubs.acs.org/doi/10.1021/ac049863r): $1Q_{particles}:6Q_{water}$
          
    * Assumption: fill the entirety the volume of the device in 10 seconds
  
    * $Q_{particles}=\frac{\frac{V}{7}mL}{10s}\times \frac{60s}{1min} = 0.521 mL/min$
  
    * $Q_{water}=\frac{\frac{V\times 6}{7}mL}{10s}\times \frac{60s}{1min} = 3.16 mL/min$

# Instructions for the Production of the Microfluidic Device

1. Upload the Arduino code with the desired flow rate to the Arduino Uno via a USB cable. Remove the cable when done.
2. Plug the syringe pump into an outlet
3. Insert a pre-filled syringe into the syringe holder while making sure that the carriage has been pulled back far enough to fit the syringe. The carriage can be moved manually by turning the coupler counterclockwise or by continuously pressing the red button. 
4. Press and release the bigger black button. This will turn the motor clockwise continuously. The LED will turn green and the lead screw will turn, moving the carriage and pressing the plunger of the syringe. When the plunger reaches its end point, the carriage will hit a stop button which will stop the motion of the motor and turn the LED red. At this point, all of the liquid should be dispensed from the syringe and the user can repeat the operation steps for new syringes.

{% include gallery caption="Microfluidics Device Gallery. (Left: Mold and PFF device. Center: Resin printed mold of PFF device. Right: Particles flowing through PFF device)" %}
