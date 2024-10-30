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


# Features

* **Adjustable Flow Rate** With a motor running on Arduino code, the flow rate of the pump can quickly and easily be changed to the desired rate. The pump is a motor powered device that can administer liquids with high accuracy. The use of an Arduino Uno also allows for endless possibilities to program the pump to execute different tasks.
* **Two Syringe Capability** With a custom 3D printed syringe holder, the pump can expel liquid from two syringes simultaneously. The design also allows for the syringes to be changed quickly and easily, which promotes sterility and minimizes cross-contamination. 
* **Affordable Parts** Syringe pumps are often very expensive. The pump created is made entirely of affordable off-the-shelf parts and 3D printed parts, reducing the cost of the pump. The pump can be manufactured at a low cost, allowing greater access of syringe pumps to low-resource areas.
* **Convenient Buttons** The pump has three buttons: On/Off, Forwards, and Reverse. The On/Off button is pressed once and the motor moves the carriage forwards, compressing the syringes, until the limit switch is pressed which turns the motor off. The Forwards and Reverse buttons can be pressed and held to move the carriage either forwards to compress the syringes or in reverse, to put the carriage back in the starting position. An LED light changes color when the buttons are pressed to signify the status of the pump.

# CAD Model
A mold for the device was created using stereolithography (SLA) 3D printing. High-temperature clear resin (Form 3+) was used for the mold. SLA printing was utilized in order to obtain the fine details necessary for a microfluidic device. 
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4aa3385128126c77e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Off-the-Shelf Parts

# 3D Printed Parts

All parts were custom made to specifically fit the off-the-shelf parts and to execute the purposes of the syringe pump.  

| Part | Purpose |
| ----------- | ----------- |
| Enclosure Top and Bottom | The enclosure contains the breadboard, wires, Arduino, and power supply, making the syringe pump one portable unit. The enclosure also protects the internal components from damage if dropped. The top of the enclosure has grooves to house the aluminum extrusion. Attached to the side of the enclosure are the three buttons and LED light. |
| Carriage | The carriage moves along the lead screw and linear rod linearly to compress the syringes. |
| End Support | The end support holds the linear rod and lead screw in place. |
| Motor Mounting Plate | The motor mounting plate holds the motor in place. |
| Syringe Holder | The syringe holder holds the syringes in place and contains the limit switch. |


# Instructions for Use

1. Upload the Arduino code with the desired flow rate to the Arduino Uno via a USB cable. Remove the cable when done.
2. Plug the syringe pump into an outlet
3. Insert a pre-filled syringe into the syringe holder while making sure that the carriage has been pulled back far enough to fit the syringe. The carriage can be moved manually by turning the coupler counterclockwise or by continuously pressing the red button. 
4. Press and release the bigger black button. This will turn the motor clockwise continuously. The LED will turn green and the lead screw will turn, moving the carriage and pressing the plunger of the syringe. When the plunger reaches its end point, the carriage will hit a stop button which will stop the motion of the motor and turn the LED red. At this point, all of the liquid should be dispensed from the syringe and the user can repeat the operation steps for new syringes.

{% include gallery caption="Syringe Pump Gallery" %}
