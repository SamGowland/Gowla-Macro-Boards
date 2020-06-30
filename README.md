# Gowla-Macro-Board - Version 1
---

Gowla Macro Board is a custom PCB design for use with a Pro Micro to build a DIY Reprogrammable Macro Board for use with a computer. This is it's first version and I hope to produce feature updates or perhaps new designs. 

<p align="center">
  <img src="/Images/render.PNG" width="300">
</p>


## Purchase

To purchase a PCB for DIY assembly and to support this project please visit my [eBay Page](https://www.ebay.co.uk/itm/164268389351).

<b> Stock Status  : :x: </b>

<i> Currently sold out, restock due 14/07/2020. Follow my [eBay profile](https://www.ebay.co.uk/usr/gowla.2014) and this repository for updates. </i>


## Required Parts

- 1 x Pro Micro ATMEGA32U4 5V 16MHz.
- 9 x 1N4148 Diodes.
- 9 x Cherry PCB Mount Switches.
- 9 x Key Caps.
- 8 x M2*6+3 Stand Off Spacers Male-to-Female
- Soldering and time. 


## Assembly

Asssembly will requre the use of a soldering iron, solder and some tape is recommended hold components. The order of assembly is important for the complete 9 switches. 

 1. Start by folding the legs of your diodes, with aprox 3mm of space either side of the diode in wire. 
 2. Pull all diodes through the pcb holes, making sure the direction of the diode watches the image printed on the PCB. With the black mark in the direction towards the line. 
 3. Solder your diode legs and then cut the excess, leaving a little length for error. 
 4. Next solder in your switches. 
 5. Solder in and/or socket your pro micro, you will at a minimum need the [headers](https://i.ebayimg.com/images/g/YPwAAOSwV3JeY9c1/s-l1600.jpg) provided with most when ordered. 
 6. Finish by adding key caps and screws, then move onto programming.
 
 <p align="center">
  <img src="/Images/comp.jpg" width="300">
</p>

## Prebaked Profiles

 1. <a href='Hex Profiles/arrows_media.hex'> Arrows & Media </a><br>
 2. <a href='Hex Profiles/functions_gui.hex'> Fuctions & Gui </a><br>
 3. <a href='Hex Profiles/nav_media.hex'> Navigation and Media </a><br>
 
 <i>Images for each of the profiles can be founh in the [images directory](https://github.com/SamGowland/Gowla-Macro-Board/tree/master/Images).</i>
 
 If you wish to add your template for other users to use, please create 
 [an issue](https://github.com/SamGowland/Gowla-Macro-Board/issues), prefixing the
issue name with "Profile".

## Simple Programming

Head to https://kbfirmware.com/ and either import the keyboard layout or more simply select Treasure Macropad Type-9. 

<b> Skip to step 4 if you want to use the prebaked profiles above and don't want to program. </b>

Once selected you will need to make a couple of changes to the wiring and pin layout to match this PCB. 

1. Change the diode direction to be Row to Column. Matching the Image below.  
<p align="center">
  <img src="/Images/wiring.PNG" width="400">
</p> 

2. Next, on the Pins tap change the pins to match the Pin specified in the image below. 
<p align="center">
  <img src="/Images/pins.PNG" width="400">
</p>

3. Input you macros, then select the flip button. You can now dowload the hex file by selecting the compile tab. 

4. Once you have your Hex file you can flash it to the pro micro, I recommend using [Avrdudness](https://blog.zakkemble.net/avrdudess-a-gui-for-avrdude). 

5. Open Avrdude and select your options to match my settings shown below. You will have to change the com port. To find out short the pins of pro micro for gnd and rst using a screw driver or wire. Listen out for windows attached device sound, once you here the confirmation you will have around 7 seconds to find out the port. Simply select the drop down and assuming you have no other similar devices connected only one will show probably COM3 or simiar. 
<p align="center">
  <img src="/Images/avr.PNG" width="400">
</p>

6. Now you know your port, keep it selected and simply change the hex file to your desired file. 

7. Reset the Pro Micro Again waiting for sound, once you hear confirmation press program and see what happens. If it does not work try and try again. You may have to tap the reset twice, waiting for confirmation sound before shorting.  
<br/><br/>

For more advanced programming follow the [QMK tutorials](https://beta.docs.qmk.fm/tutorial).

---

## Usage and EULA 

Design and profiles are made freely available for personal usage only and no further commerical usage. By dowloading or using files within this repository users agree to not resell or redistrubute the designs or files. 

---

## Maintainers

* [Gowla](https://github.com/SamGowland)

## Getting Help

Please report issues you encounter to the
*Gowla-Macro-Board*
[Issue Tracker](https://github.com/SamGowland/Gowla-Macro-Board/issues), prefixing the
issue name with "Macro".
