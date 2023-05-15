# Keeb-For-Mom
KFM is a low cost 4x5 modular mechanical keyboard that everyone can build. Modular it's mean two PCBs can be combined become one 40% keyboard, so you can use the PCB board as single 4x5 macro pad or 4x10 ortholinier mechanical keyboard. The PCB board has some feature like south facing switches orientation, RGB perkey and passive buzzer supported which can be used as layer indicator. The firmware is fully QMK, see [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) then the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. 

Designer and maintainer: [sandipratama/nendezkombet](https://github.com/nendezkombet) 

![xeropi1](https://github.com/nendezkombet/Keeb-For-Mom/assets/82454371/c2c39dee-5d21-4ead-9ba7-267fd6815a17)

![xeropi3](https://github.com/nendezkombet/Keeb-For-Mom/assets/82454371/8644a1bf-c07a-4d0a-bef2-c184e4513cad)

![xeropi2](https://github.com/nendezkombet/Keeb-For-Mom/assets/82454371/99a986f6-d1dc-4eb3-a780-d52479048dc8)

![xeropi4](https://github.com/nendezkombet/Keeb-For-Mom/assets/82454371/65e23757-147d-4b2a-960f-e8a29b919683)



## Table of contents

- [Features](#features)
- [Default Layout](#default-layout)
- [Optional Layout](#optional-layout)
- [PCB](#pcb)
- [BOM](#bom)
- [Case](#case)
- [Assembly Guide](#assembly-guide)
- [Firmware](#firmware)


## Features


- Low cost.
- Modular PCB board.
- Multi layout support.
- Easy to source components.
- Easy to build.
- Arduino Pro Micro 32u4 as MCU.
- RGB perkey support (optional).
- Passive buzzer support.


## Default Layout

40% layout

![Screenshot 2022-07-27 184517](https://user-images.githubusercontent.com/82454371/181346433-14dd6d3b-99df-4c8c-b44b-590213cd11c2.png)


## Optional Layout 

20% layout

![Screenshot 2022-07-27 183847](https://user-images.githubusercontent.com/82454371/181346722-93b2d5e3-c876-42a7-ab09-54b71251bedc.png)

40% layout with 2x 2u keycaps

![Screenshot 2022-07-27 184849](https://user-images.githubusercontent.com/82454371/181346969-34260ebc-0d4b-49d8-8e70-de6958e0a980.png)

40% layout with 4x 2u keycaps

![Screenshot 2022-07-27 184743](https://user-images.githubusercontent.com/82454371/181347156-c042669a-c30e-4861-a07c-7486b09e738c.png)


## PCB


Top view

![Screenshot 2022-07-27 194925](https://user-images.githubusercontent.com/82454371/181347419-60f54595-f402-46bb-8136-43930ea8aa3d.png)

Bottom view

![Screenshot 2022-07-27 194846](https://user-images.githubusercontent.com/82454371/181482157-231bf12e-715d-4003-9e5e-3a93660908fb.png)

## BOM

|Parts|Footprint|Quantity|
|:---|:---|:---|
|SK6812 mini-E RGB LED |5050|20-40|
|100nF capacitor|0805|20-40|
|Cherry MX style switch |3 or 5 pin|20-40|
|1N4148 diode |axial|20-40|
|Arduino Promicro |32u4|1|
|220ohm resistor|axial|2|
|Reset button switch |6mm*2.5mm|1|
|10mm M3 "FEMALE TO FEMALE" brass standoff|round or hex|6|
|6mm M3 screw|-|6|


## Case

Stacked acrylic case 

In the pictures above i just use top and bottom plate for PCB and switch support, but you can build your own full stacked acrylic case with PCB dimension as reference inside acrylic cutting file.

## Assembly Guide

See inside "case" folder !!!


## Firmware

Firmware flashing :

Open QMK Toolbox and locate The .hex file you compiled before or use ready flash default keymap

Enter the bootloader :

Briefly press the reset button and click flash button !!! 


