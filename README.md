# Gowla-Macro-Boards 

 - [Gowla Macro Board V1](#Gowla-Macro-Board-V1)
   - 9 Key Macro board for MX style switches.
 - [Gowla-Macro-eRGB](#Gowla-Macro-eRGB)
   - 9 Key Macro Board with easy underglow RGB and Rotary Encoder support.
 - [MEK-Light-RGB](#MEK-Light-RGB)
   - 12 Key editing keyboard with OLED screen, fader, two rotary encoders and underglow lighting. 
 
 ---

# Gowla-Macro-Board-V1

Version 1 PCB is where this project all started and is available to buy, it's fully supported in QMK and super simple to put together! Great for practicing your soldering skills and getting started into mechanical keyboards. 

<p align="center">
  <img src="/Images/render.PNG" width="300">
</p>


## Purchase

To purchase a PCB for DIY assembly and to support this project please visit my [eBay Page](https://www.ebay.co.uk/itm/164290094737).

For additional options such as plates, hardware, RGB and more visit the <b>new!</b> multi variation page : [Variations eBay Page](http://www.ebay.co.uk/itm/164521787563)

<b> Stock Status  :heavy_check_mark: </b>


## Required Parts

- 1 x Pro Micro ATMEGA32U4 5V 16MHz (Micro USB).
- 9 x 1N4148 Diodes.
- 9 x PCB or Plate Mount Switches (Cherry MX or Clones).
- 9 x Key Caps.
- 8 x *<i>M2, 6mm (min) to 10mm (max) body length + 3mm thread Stand Off Spacers Male-to-Female</i>
  
  > Please note there's a variety of different hardware options. At a minimum you will need your PCB 6mm off the ground, though for the best compatibility I would recommend 8mm. 

## Assembly

Asssembly will require the use of a soldering iron, solder and some tape is recommended for holding components. <b>The order of assembly is important for the complete 9 switches. </b>

 1. Start by folding the legs of your diodes, with approx 3mm of space either side of the diode in wire. 
 
 2. Pull all diodes through the pcb holes, making sure the direction of the diode matches the image printed on the PCB. With the black mark in the direction towards the line. 
 
 3. Solder your diode legs and then cut the excess, leaving a little length for error. 
 
 4. Next solder in your top 3 switches. 
 
 5. Then solder in and/or socket your pro micro, you will at a minimum need the [headers](https://i.ebayimg.com/images/g/YPwAAOSwV3JeY9c1/s-l1600.jpg) provided with most when ordered. Making sure the pro micro usb is pointing outwards away from PCB and on the underside of the PCB. 
 
 <p align="center">
  <img src="/Images/direction.JPG" width="300">
</p>
 
 6. Once the Pro Micro is in, continue to solder your remaining switches. 
 
 7. Finish by adding key caps and screws, then move onto programming or flashing the firmware.
 
 <p align="center">
  <img src="/Images/side.jpg" width="300">
</p>

---
## Simple Programming

You can build and compile new keyboard layouts most simply by using the web configurator : https://config.qmk.fm/#/gowla/LAYOUT_ortho_3x3

For more advanced programming follow the [QMK tutorials](https://beta.docs.qmk.fm/tutorial).

The [default build](https://github.com/qmk/qmk_firmware/tree/master/keyboards/gowla) is also available for use through QMK toolbox and files available within the QMK Firmware repository.

## Prebaked Firmware Profiles

 1. <a href='Hex Profiles/gowla_default.hex'> Default </a><br>
 2. <a href='Hex Profiles/arrows_media.hex'> Arrows & Media </a><br>
 3. <a href='Hex Profiles/functions_gui.hex'> Fuctions & Gui </a><br>
 4. <a href='Hex Profiles/nav_media.hex'> Navigation and Media </a><br>
 
 <i>Images for each of the profiles can be found in the [images directory](https://github.com/SamGowland/Gowla-Macro-Board/tree/master/Images).</i>
 
 If you wish to add your template for other users to use, please create 
 [an issue](https://github.com/SamGowland/Gowla-Macro-Board/issues), prefixing the
issue name with "Profile".

## Flashing a Pro Micro

To flash a pro micro with your newly built or prebaked firmware you must get it into DFU mode, short the reset and ground pins. Shorting once will put into DFU for 750ms, you can use QMK toolbox to dectect DFU and automatically flash once detected. 

Double resets, to keep the pro micro in DFU mode for longer short reset and ground twice quickly. This will keep it in DFU mode upto 8 seconds allowing you to manually flash the pro micro with QMK toolbox or AVRdudess GUI. 

You can use either of the following software to flash your pro micro. 
- [QMK toolbox](https://github.com/qmk/qmk_toolbox/releases).
- [AVRdudess](https://blog.zakkemble.net/avrdudess-a-gui-for-avrdude/).

---

## Top Plates

To further improve aesthetics an additional top plate is available to buy, top plates only come in gloss white from now on. Matte blacks were experimented with but scratch too easily. <b> These are available to buy now </b> at the new multi variation ebay listing, along with new white PCBs:  [eBay Page](http://www.ebay.co.uk/itm/164521787563)

Top plates require additional hardware, M2 hardware is inculuded when purchasing a Top Plate. 3mm spacers between the plate and the PCB. 8mm spacers and 8mm M2 machine screws. 

<p align="center">
  <img src="/Images/top plate.jpg" height="300">
</p>


## Case in the works

Currently I am working towards a low cost case design and intend it to look like the render below. The case will work with any updated PCB designs. So far I have designed and 3D printed these. But to improve surface finish and reduce print time the top plates will be laser cut. Top plates will be available in either black and white. 

STL files are provided for the case design within this repository. However you will need some additonal M2 hardware and no assembly instructions are currently provided. 

<b> Cases should be available to buy within December. </b>

<p align="center">
  <img src="/Images/case_d2.PNG" height="300">
</p>

---

## Usage and EULA 

Design and profiles are made freely available for personal usage only and no further commercial usage. By downloading or using files within this repository users agree to not resell or redistribute the designs or files. 

## Additional Use Cases

Find additional use cases for the PCB within the [Uses directory](https://github.com/SamGowland/Gowla-Macro-Board/tree/master/Uses), a nice example is [dan-r's](https://github.com/dan-r) IR Remote use case. 

---

# Gowla-Macro-eRGB

Designed to make RGB lighting as easy as possible and add support for an optional rotary encoder (Alps EC11)

Early Prototypes on sale now through the [Variations eBay Page](http://www.ebay.co.uk/itm/164521787563)

<p align="center">
  <img src="/Images/RGB2.jpg" height="200">
  <img src="/Images/RGB1.jpg" height="200">
  <img src="/Images/eRGB front.PNG" height="200">
</p>

# MEK-Light-RGB

coming soon. 

## Maintainers

* [Gowla](https://github.com/SamGowland)

## Getting Help

Please report issues you encounter to the
*Gowla-Macro-Board*
[Issue Tracker](https://github.com/SamGowland/Gowla-Macro-Board/issues), prefixing the
issue name with "Macro".
