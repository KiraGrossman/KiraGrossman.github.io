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
**[Particle End Position Equation](https://pubs.acs.org/doi/10.1021/ac049863r)**

  * $y=\frac{(W_p - \frac{D_p}{2})W_B}{W_p}$
  * $W_p$ = width of pinched segment, $W_B$ = width of broadened segment, $D_p$ = particle diameter, y = distance particle with $D_p$ travels from centerline

### **$W_p$ Calculations**
  1. An aribitrary constant $W_B$ was chosen to determine the most effective $W_p$ for particle separation. 
  2. Two different sized particles with constant, known, diameters $D_{max}$ = 550 µm and $D_{min}$ = 165 µm were used. 
  3. Two equations were set up, one using $D_{max}$ and one using $D_{min}$. $W_p$ was varied in each equation, with the minimum $W_p = D_{max}$ as the segment cannot be smaller than the largest particle as the particle would not be able to flow through the channel. 
  4. The difference between y values was then calculated. 

  * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
  * **Results:** as $W_p$ increased, the difference between y values decreased.
  * **Conclusion:** the smallest possible $W_p$ should be used to obtain the largest possible distance between different sized particles. Thus, $W_p$ = 0.800 mm, as this was the smallest possible size that could be accurately printed by the resin printer without a print failure.

### **$W_B$ Calcuations**
  1. Two y equations were set up using the newly determined $W_p$ value, and $D_{min}$ for one equation and $D_{max}$ for the other.
  2. $W_B$ was varied and the difference between y values was calculated.
    * **Rationale:** It is desired to have the largest difference between y values as that correlates to the largest amount of separation between the particles, making them easier to collect.
    * **Results:** as $W_B$ increased, the difference between y values increased.
    * **Conclusion:** the largest possible $W_B$ should be used to obtain the largest possible distance between different sized particles. Thus, $W_B$ = 17.8 mm, as this was the largest possible size that could be contained in the microfluidic device.

2. **Flow Rate**

    a. **Volume Estimation**
      * $Volume = length\times width\times height$ 

      * $V= 43.2 mm\times 17.8 mm\times 0.8 mm = 615.17 mm^3$  

    b. **Conversion**  
      * $V = 615.17 mm^3 = 0.61517 cm^3 = 0.61517 mL$  

    c. **Determination of Flow Rates**  
      * Desired ratio of flow rates based on [literature](https://pubs.acs.org/doi/10.1021/ac049863r): $1Q_{particles}:6Q_{water}$
          
      * Assumption: fill the entirety the volume of the device in 10 seconds
  
      * $Q_{particles}=\frac{\frac{V}{7}mL}{10s}\times \frac{60s}{1min} = 0.521 mL/min$
  
      * $Q_{water}=\frac{\frac{V\times 6}{7}mL}{10s}\times \frac{60s}{1min} = 3.16 mL/min$

* **Selected Specifications**

 ![Selected Spefifications](/assets/img/PFF_Drawing.jpg)

|                   | Rationale |
| ----------------- | ------- | 
| Broadened Segment |  |
| Pinched Segment   |  |
| Input Channels    |  |
| Output Channels   |  |


# Instructions for the Production of the Microfluidic Device

1. Upload the Arduino code with the desired flow rate to the Arduino Uno via a USB cable. Remove the cable when done.
2. Plug the syringe pump into an outlet
3. Insert a pre-filled syringe into the syringe holder while making sure that the carriage has been pulled back far enough to fit the syringe. The carriage can be moved manually by turning the coupler counterclockwise or by continuously pressing the red button. 
4. Press and release the bigger black button. This will turn the motor clockwise continuously. The LED will turn green and the lead screw will turn, moving the carriage and pressing the plunger of the syringe. When the plunger reaches its end point, the carriage will hit a stop button which will stop the motion of the motor and turn the LED red. At this point, all of the liquid should be dispensed from the syringe and the user can repeat the operation steps for new syringes.

{% include gallery caption="Microfluidics Device Gallery. (Left: Mold and PFF device. Center: Resin printed mold of PFF device. Right: Particles flowing through PFF device)" %}
