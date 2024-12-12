---
title: "Longboard Truck"
excerpt: "A longboard truck created with generative design and powder bed fusion."
header:
  image: assets/img/t1.jpg
  teaser: /assets/img/t2.jpg
gallery:
  - image_path: assets/img/t3.jpg
  - image_path: assets/img/t4.jpg
  - image_path: assets/img/t5.png
   
---

# Device in Action
Watch the truck in the assembly [here](https://youtu.be/p-67j8Mv230)!

[![e-mjb65F7E4](https://img.youtube.com/vi/p-67j8Mv230/0.jpg)](https://youtu.be/p-67j8Mv230)


# Pairing of Powder Bed Fusion and Generative Design

  Generative design is a new and exciting design tool where the design software will make a part for a design based off of constraints set by the user. Models created with generative design can then be printed with powder bed fusion (PBF) to create the ultimate part! Generative design pairs perfectly with PBF as no supports are needed during printing, which is useful as parts created with generative design are often complex shapes. 
  Currently, PBF and generative design are being used in tandem to create many different parts, especially for the automotive and aerospace industries as PBF parts have good mechanical properties. Generative design with PBF is also perfect for the automotive and aerospace industries as the printed parts have less weight and fewer components than the current solutions. This is desired as less weight enables the automobile or air craft to consume less energy and produce fewer emissions. Also, turning a complex assembly into one part is sought after in these industries to make manufacturing and production easier. Generative design is able to achieve less weight and fewer components by generating less material around the constraints, and these complex shapes can then be accurately printed with PBF to create mechanically sound parts.  

# Commercial Example: [General Electric’s Turbine Centre Frame](https://www.research.autodesk.com/blog/general-electric-collaboration-targets-jet-engine-efficiency-with-generative-design/)

	General Electric (GE) partnered with Autodesk to used generative design to create a turbine centre frame, which is a structure between the low and high-pressure turbines of a commercial jet engine. The frame is an assembly of 150 components and bears heavy loads. The part is usually made with subtractive and forming processes where 95% of the material is wasted. 
  GE and Autodesk used generative design to remodel the part into a simpler, lighter, and less wasteful part. The frame went from 150 parts to one single part, greatly simplifying the assembly. Also, less than 1% of the material was wasted in making the part as PBF was used, and all the powder that was not used in the part can be recycled. Additionally, using generative design to create the frame cut its weight by 30%, which will make the plane light, reducing carbon emissions. 

Fast Facts:
* 1 part instead of 150
* 30% lighter
* <1% of material was wasted
* 30% lighter
* Fewer carbon emissions

# Aluminum CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4a257d9a3245c2449?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Nylon CAD Model

# Generative Design Forces

| Name of Force | Force Applied | Rationale | 
| ------------------- | -------- | --------- |
| Structural Constraint | N/A | This was placed at the pivot point of the model. The pivot point was chosen as it is a stationary part, even when all the forces are applied. Also, the pivot is the point of contact between longboard/base and the truck, meaning that the forces will all travel through the pivot. This placement affects the final model’s geometry. The final model was created with the constraint that the pivot will not move in response to any applied loads. Thus, changing the structural constraint will change the design of the final model to ensure that the structural constraint is the part that will not move in response to the applied forces. |
| Shear Forces 1 and 2 | 3500 N each | Both forces account for the longboard turning in either direction. The typical speed of a longboard is 28 km/hr, which was rounded to about 9 m/s. The shear forces were calculated using centripetal force. Assuming the rider and longboard are 80 kg and the turning radius is 2 m, the shear force would be F = (80 x 9^2)/2, which is about 3500 N. |
| Impact Force | 1000 N | The impact force is the force endured by the truck due to the weight of the rider after a sudden collision or deceleration (such as hitting a pothole or landing a jump/trick). Assuming the rider and longboard are 80 kg, the force the rider exerts on the truck is about 784 N (9.8 x 80). This number was than increased to 1000 N to account for the force felt by the truck after enduring a collision. |
| Motor Torque | 400 N mm | The motor is turning a gear with a belt to turn one wheel. Thus, the motor has a torque that will affect the truck since the motor is attached to the truck. The motor used was a Flipsky BLDC Belt motor 6374, which has a maximum torque of 800 N mm. However, the maximum torque results in unrealistic speeds of 55 km/hr. Since the motor will never be spinning that fast (the average speed that this motorized longboard would travel at is 28 km/hr), the torque was adjusted. Keeping the same ratio of 55 km/hr corresponding to 800 N mm, travelling at 28 km/hr corresponds to about 400 N mm (55/800 = 28/X). |
| Motor Force | 30 N | The motor force is a remote force that the weight of the motor applies onto the truck. The motor weighs 0.86 kg and its center of mass is roughly 37 mm from one end of the motor in the center of the motor (the motor’s height is 74 mm, so 74/2 = 37). The motor is going to apply a force on the point at which it pivots on the truck. This can be calculated using the gravitational and rotational force that the motor applies to the truck. The gravitational force is 0.86 kg x 9.81 m/s^2 = 8.44 N. This was then multiplied by a dynamic loading factor of 3 in order to account for the increased forces the motor experiences under normal conditions (including rough terrain, jumps, and other stresses applied when riding the longboard). Thus, the total force now equals 25.32. The force generated by the motor torque of 200 N mm (calculated above) was then divided by 0.037 m (distance from the center of mass) to equal 5.41 N. These forces were then combined to equal roughly 30 N. |
| Belt Force | 6 N | The belt force is the tension the belt exerts on the truck. The belt is pulling the motor towards the wheels through a tension force. The motor was placed 73 mm away from the gear it was turning to ensure maximum tension. Thus, the force of tension the truck feels due to the motor being pulled, is equal to the torque divided by the distance from the motor to the gear (which is also on the truck). F = 400 N mm / 73 mm, which is about 6 N.  |

# Comparison between the Nylon and Aluminum Outcomes
  Overall, the aluminum model was heavier than the nylon model, although the nylon model had a larger volume. The nylon model had a slightly larger maximum von Mises stress, meaning that the nylon model can undergo higher stress than the aluminum model before failure. The safety factor limits were the same, and also indicates how likely the models are to fail under the applied loads. 

### Aluminum AlSi10 Mg Model
* Mass (kg) = 1.21 
* Volume (mm^3) = 453472.36
* Maximum von Mises stress (MPa) = 1289.83
* Safety Factor Limit = 2
* Minimum Safety Factor =0.19
* Maximum Displacement Global (mm) = 30.79

### Nylon 12 Model
* Mass (kg) = 0.46
* Volume (mm^3) = 454218.77
* Maximum von Mises stress (MPa) = 1296.61
* Safety Factor Limit = 2
* Minimum Safety Factor = 0.035
* Maximum Displacement Global (mm) = 1187.48

{% include gallery caption="Phone Mount Gallery. (Left: Side of the Phone Mount. Center: Back of the Phone Mount. Right: Sectional View of the Phone Mount to show how the Spring Loaded Knobs and Rotator fit into the Top Clamp)" %}


