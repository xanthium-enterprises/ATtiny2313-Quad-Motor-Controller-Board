
# ATtiny2313 Development Board with Quad Motor Control and Serial/RS485 Interface 
---------------------------------------------------------------------------------------------------------------------------------
<a href ="http://www.xanthium.in/buy-atmel-avr-attiny2313-quad-motor-control-development-board-serial-rs485-interface">ATtiny2313 Quad Motor Controller Development Board</a> is an easy to use ATtiny2313 development board with built in Motor controller and RS485 communication features.It is aimed mainly at robotics enthusiasts who wants to build their own robot.This repo contains Circuit Diagram,Sourcecodes and other documentation related to ATtiny2313 Quad Motor Controller Board.

 - <a href ="http://www.ebay.in/sch/xanthium.enterprises/m.html?rt=nc&_dmd=2">**Store**</a>
 - <a href ="http://www.xanthium.in/buy-atmel-avr-attiny2313-quad-motor-control-development-board-serial-rs485-interface">**Website**</a>
 - <a href ="http://xanthium.in/usermanual-attiny85-attiny2313-development-board-motor-control-serial-rs485-ports">**User Manual**</a>

<img src = "http://www.xanthium.in/sites/default/files/site-images/attiny2313-motor-control-board/attiny2313-quad-motor-control-development-board-640px.jpg"/>

The board contains an 20 Pin **ATtiny2313** Microcontroller which is interfaced to two L293D Motor controller Chips and a MAX485 chip.The motors on the Board can be controlled either through **Serial** or **RS485** interface 

##Source Codes 
-------------------------------------------------------------------------------------------------------------------------------------
- All the codes are written in **embedded C** and compiled using **AVR GCC** (WinAVR).
- The Makefiles required for compiling the source are also provided in each respective folder.
- The Programmer used is **"avrisp"**.
- **Please change the  COM port number** in the MakeFile before compiling. 



##Repository Contents 
-------------------------------------------------------------------------------------------------------------------------------------
- C source code for **Interfacing ATtiny with L293D** for controlling DC brushed Motors can be found in the following Directories.
 
  - Motor Control
  - Motor Control Advanced
  - The corresponding <a href ="http://www.xanthium.in/controlling-4-motors-bidirectionally-using-l293d-atmel-avr-attiny2313a-microcontroller-tutorial">**Tutorial for controlling motors can be found online here**</a> 
  - <img src ="http://xanthium.in/sites/default/files/site-images/attiny2313-motor-control/atmel-avr-attiny2313-interfaced-l293d-motor.jpg"/>

