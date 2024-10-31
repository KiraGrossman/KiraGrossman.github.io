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

# Design and Flow Rate Calculations and Specifications

* **Calculations**

  y = /frac{(w~p - (/frac{D~p}{2})) x w~B}{wp}
$\frac{1}{2}$
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
