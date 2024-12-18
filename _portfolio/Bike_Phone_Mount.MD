---
title: "Bicycle Phone Mount"
excerpt: "A 3D printed device that can hold a phone in different orientations while attached to handle bars on a bicycle."
header:
  image: assets/img/PH_Front.jpg
  teaser: /assets/img/PH_FFront.jpg
gallery:
  - image_path: assets/img/PH_Side.jpg
  - image_path: assets/img/PH_Back.jpg
  - image_path: assets/img/SectionalView.png
   
---

# Device in Action
Watch the amazing capabilities of the phone mount [here](https://youtu.be/e-mjb65F7E4)!

[![e-mjb65F7E4](https://img.youtube.com/vi/e-mjb65F7E4/0.jpg)](https://youtu.be/e-mjb65F7E4)


# Top-Down Modeling
Top-down modeling was used in Fusion 360 in order to create the design of the mount.
* **What is top-down modeling?** Top-down modeling is a design approach in Fusion 360 where all of the parts to an assembly are built in one document within the context of the overarching structure. Top-down modeling allows for parts to be created based off of previously designed parts, allowing relationships between parts to be easily made and maintained even when there are other changes. Thus, instead of measuring dimensions for parts to fit together, the structure can be referenced instead and the new part can be made to fit using the offset feature.
* **How was top-down modeling used in the bicycle mount?** Top-down modeling was used to create the entire bicycle mount. This method was especially useful when creating parts that fit together, such as the Top and Bottom Clamps fitting flush together, the Spring-Loaded Knobs fitting inside of both the Rotator and the Top Clamp, and the Cap fitting onto the Top Clamp. The Top Clamp was designed first, so it was often used as the reference. Other parts were then designed based off of the Top Clamp, rather than taking new measurements. For example, the extrusion part of the Knobs was designed in reference to the indents in the Top Clamp. The holes for the Cap were also made by cutting holes through both the Cap and Top Clamp parts, instead of making holes separately for each.


# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4a257d9a3245c2449?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Design Rationale

| Part                | Material | Rationale | Photo |
| ------------------- | -------- | --------- | ----- |
| Top Clamp | Nylon | The Top Clamp clamps down on the bicycle rod to secure the mount onto the bicycle. The Top Clamp also houses the Rotator and Spring-Loaded Knobs, which allow for rotation of the phone. The Top Clamp also controls the height of the phone, ensuring that it does not interfere with any of the mount's geometry. | Top Clamp: ![TC](/assets/img/TopClamp.png)  Iterations of the Top Clamp: ![ITC](/assets/img/I_TC.jpg) |
| Bottom Clamp | Nylon | The Bottom Clamp clamps down on the bicycle rod to secure the mount onto the bicycle. Screws are used to tighten the Bottom Clamp to the Top Clamp to remain secure around the bicycle. | ![BC](/assets/img/BottomClamp.png) |
| Rotator | PLA | The Rotator is rotated clockwise by rotating the phone clockwise in order to easily have the phone in the vertical or horizontal position. | ![R](/assets/img/Rotator.png) |
| Spring-Loaded Knobs | Nylon | The Spring-Loaded Knobs are securely in the Rotator, 180 degrees away from each other. The spring in between the Knobs is extended in its resting state. At the spring's resting state, the Knobs protrude out of the Rotator into indents in the Top Clamp. There are 4 indents in the Top Clamp, at 0, 90, 180, and 270 degrees. When the Knobs are in the indents and the spring is in its resting position, the Rotator is locked into place with the phone positioned either vertically or horizontally. When the phone is rotated, the Knobs will compress the spring as they exit the Top Clamp indents so that the Knobs do not protrude out of the Rotator, allowing the Rotator to rotate with ease. The Rotator will rotate smoothly for 90 degrees, until the Knobs enter the next Top Clamp indents and the spring expands to its resting position.| Knobs: ![K](/assets/img/SLK.png)  Iterations of the Knobs: ![IK](/assets/img/I_SLK.jpg) |
| Cap | Nylon | The Cap is screwed into the Top Clamp to ensure that the Rotator does not fall out of the Top Clamp. | ![C](/assets/img/Cap.png) |
| Base | Nylon | The Base secures the back of the phone to prevent the phone from falling. The Base also houses the Spur Gear and the gear rack portion of the Holders. The Base ensures that the Holders do not move in the y direction, away from the Spur Gear. | ![B](/assets/img/Base.png) |
| Spur Gear | Nylon | The Spur Gear facilitates the horizontal movement of the Holders. | Gear: ![G](/assets/img/Gear.png)  Iterations of the Gear: ![IG](/assets/img/I_G.jpg) |
| Holder (x2) | PLA | The Holders move horizontally to adjust to any size phone. The Holders have an extension spring secured to their backs so that the Holders will compress as much as possible to squeeze the phone so that it will not fall out of the mount. | Top Clamp: ![H](/assets/img/Holder.png)  Iterations of the Holder: ![IH](/assets/img/I_H.jpg) |

# Assembly Instructions

1. Add 4 M5-0.5 brass knurled nuts (heat-set inserts) to all holes in the Bottom Clamp.
2. Add 4 M5-0.5 brass knurled nuts (heat-set inserts) to 4 holes on the round face of the Top Clamp.
3. Add 1 M3-0.5 brass knurled nuts (heat-set insert) to the hole in the Rotator.
4. Add 1 M3-0.5 brass knurled nuts (heat-set insert) to the bottom of the hole in the Base.
5. Line up the holes of the Bottom Clamp to the corresponding holes of the Top Clamp, so that the clamps form a circle around the bicycle handle.
6. Screw in 4 M5-0.5 x 35 mm screws into the holes and add 4 M5 nuts to each screw.
7. Place 1 Spring-Loaded Knob into the Notch in the Rotator so that the extruded part of the Knob runs vertically.
8. While holding the Knob in place in the Rotator, add a 9/32" x 3/4" compression spring into the other Notch in the Rotator. 
9. Place the remaining Knob into remaining open Notch in the same orientation as the first Knob.
10. While compressing both Knobs, place the rotator into the Rotator Hole. Rotate the Rotator until the Knobs click into place.
11. Place the Cap over the Rotator and align the holes to the corresponding holes in the Top Clamp. Screw in 4 M5 x 15 mm screws into the holes.
12. Slide the gear rack parts of the Holders into the Base through the slots, so that the serration of the Holders face each other. Press the Holders as far as possible into the Base.
13. Align the hole in the center of the Spur Gear with the hole in the center of the Base so that the Gear is inside of the walls of the Base and fits snuggly with the Holders. Screw in a M3-0.5 x 15 mm screw through the Spur Gear into the Base until the head of the screw is slightly above the Spur Gear but not touching it.
14. Screw the Base into the Rotator using the M3 x 15 mm screw protruding from the Base.
15. Attach a 9/32" x 2-13/16" extension spring to the Spring Holders on the backs of the Holders.

{% include gallery caption="Phone Mount Gallery. (Left: Side of the Phone Mount. Center: Back of the Phone Mount. Right: Sectional View of the Phone Mount to show how the Spring Loaded Knobs and Rotator fit into the Top Clamp)" %}

