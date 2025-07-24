---
title: "Phone Case"
excerpt: "A FFF 3D printed phone case for an iPhone 14 Pro with a custom design on the back."
header:
  image: /assets/img/caseside2.png
  teaser: /assets/img/caseback.jpg
gallery:
  - image_path: assets/img/iterations.png
  - image_path: assets/img/caseside1.jpg
  - image_path: assets/img/casefront.jpg
  - image_path: assets/img/casecharger.jpg
---

# Significance

* In 2022, around 6.6 billion people owned a smartphone, and the number of smartphone users is expected to increase significantly 
* The increasing number of people owning a smartphone has created a sizable and rapidly expanding market for protective cases for the phones
* The estimated market size for phone cases is about $26 billion

# Function of Phone Cases

* Protect smartphones from damage and outside elements
* Be a decorative piece displaying designs
* Have innovative functional pieces

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a47aa6b55bd140effb?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Engineering Drawing

![Phone_ED](/assets/img/Phone_ED.png)
***Note:** all dimensions in mm*


# Rationale

| Aspect | Rationale |
| ------ | --------- |
| Walls | The thickness of the walls was chosen in order to allow for proper actuation of the volume and power buttons and the ringer switch. Thicker case walls would prevent fingers from being able to reach the buttons and switch. Thus, the walls were thinned to the smallest possible thickness that would still be protective to the phone. To protect the touchscreen, the height of the case walls was increased to above the height of the phone and screen protector and a lip was added to the phone case. Increasing the height to 8.4 mm, which is above the screen protector, ensures that no part of the screen will touch the surface it is laying on while resting screen side down.  |
| Lip | Adding a lip to the case prevents the phone from falling out of the case when held screen-side-down. The lip also protects the screen as the lip extends over the phone slightly and thus is the first point of contact, rather than the screen, to the surface that the phone is laying screen side down on, preventing the screen from receiving any scratches from the surface. |
| Back | The back of the case had a thickness of 4.2 mm to ensure that the camera lenses would be protected while the phone with the case on was placed on a surface with the screen facing up. With a thickness of 4.2 mm, the camera lenses would not touch the surface as the lenses have a thickness of 4.18 mm. |
| Button and Switch Holes | To allow for better access to the power and volume buttons and ringer switch, the width of the holes for these features were expanded slightly larger than the true size of the feature so that fingers can reach the buttons. Chamfers and fillets of the edges were added to the buttons and switch holes in order to increase accessibility as the chamfers create a larger hole at the outside surface of the case that narrows and the fillets round off the edges created by the chamfers for a smooth feel. | 
| Charging Port Hole | The charging port hole was widened larger than the actual charging port in order to allow a charger to sit flush against the phone. The corners were rounded for aesthetic purposes. |
| Speakers | For aesthetic purposes, the corners of the speaker holes were rounded with the fillet tool.  |

***Note:** All corners of all holes and of the case itself were rounded for aesthetic purposes*

# Custom Design

1. I created the design based off of a photo and sample of handwriting
2. I imported a photo I took of a boardwalk and beach and a photo of the handwriting into iArtbook on an iPad
3. I drew over the details I wanted to engrave into the phone
4. I then exported the drawing to my computer as a PNG and used Adobe ssoftware to convert the PNG into a .step file
5. I imported the .step file into Fusion 360 and used the extrude-cut function to choose and engrave areas of the design
6. I also added my initials and the year to the side of the phone case

# Parametric Modeling

Parameters were created for the lengths, widths, and heights (if applicable) for all features of the phone

* Easy, quick, and error-free adjustments to the sizing of each feature for rapid prototyping!
  * Having each feature measurement as a parameter allowed me to access each measurement easily and quickly in order to modify them 
    * For example, the lip height and phone height were adjusted multiple times after two iterations of the phone case proved to have too low walls and a lip that pressed too far into the phone for the phone with a screen protector to fit properly
    * Also, the lengths and widths of the charger, ringer switch, and button holes were all modified with the parameters to be a larger hole to allow for easier access to the phone
* Keep track of previous modifications!
  * I could keep track of the modifications I had made to each iteration by adding the amount desired to the parameter as the original measurement and the addition would both display in the “Expression” tab
* Obtain new measurements that constantly update as the design changes!
  * I added expressions together to obtain the exact measurement for other features, and this new measurement would update as I adjusted the parent parameters
    * For example, I added the case walls thickness parameters with a desired amount to create the lip width as the lip width would have to expand over the case walls and the phone itself

# Materials

Thermoplastic polyurethane (TPU) was the filament used to print the phone case. 
* Flexibile, rubber-like properties and excellent layer adhesion 
  * **Rationale:** The case needed to be flexible to allow for easy insertion and removal of the phone
* Great abrasion and hydrolysis resistances
  * **Rationale:** This is an essential characteristic for a protective phone case as the case will be able to withstand everyday use and environmental factors
* High ductility, durability, and tensile strength 
  * **Rationale:** Will protect the phone when dropped
* No significant warping
  * **Rationale:** Desired while printing the phone case to ensure that the case would fit the phone well


# Slicer Settings

| Part | Setting | Rationale |
| ---- | ------- | --------- |
| Extrusion | Elastic | TPU is an elastic material |
| Bed Temperature | 50 degrees Celsius | Help prevent stringing |
| Extruder Temperature | 235 degrees Celsius for the first layer and 230 degrees Celsius for all other layers| Help prevent stringing |
| Removable Brim | Added to print | Increased bed-contact area to help prevent warping |
| Number of Solid Top and Bottom layers | 5 | Make the case stronger and more protective with more material |
| Number of Perimeters | 3 | The walls were thin enough to have no infill with this setting |




{% include gallery caption="Iterations of the phone case (leftmost picture) and images of final product (right three photos)" %}
