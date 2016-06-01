# ATtiny2313 Quad Motor Controller Board with serial and RS485 interface 
---------------------------------------------------------------------------------------------------------------------------------
**ATtiny2313 Quad Motor Controller Board** is an easy to use ATtiny2313 development board with built in Motor controller and RS485 communication features.It is aimed mainly at robotics enthusiasts who wants to build their own robot.This repo contains Circuit Diagram,Sourcecodes and other documentation related to ATtiny2313 Quad Motor Controller Board

<img src = "http://www.xanthium.in/sites/default/files/site-images/attiny2313-motor-control-board/attiny2313-quad-motor-control-development-board-640px.jpg"/>

The board contains an 20 Pin **ATtiny2313** Microcontroller which is interfaced to two L293D Motor controller Chips and a MAX485 chip.The motors on the Board can be controlled either through **Serial** or **RS485** interface 

##Source Codes 
-------------------------------------------------------------------------------------------------------------------------------------
- All the codes are written in **embedded C** and compiled using **AVR GCC** (WinAVR).
- The Makefiles required for compiling the source are also provided in each respective folder.
- The Programmer used is **"avrisp"**.
- **Please change the  COM port number** in the MakeFile before compiling. 
