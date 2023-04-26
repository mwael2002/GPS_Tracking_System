# GPS Tracking System
The GPS subsystem stores the coordinates of the start point. After reaching the destination point it stores the coordinates of the end point and calculates the total distance that was taken by the user. The covered distance is displayed through LCD.

## The output will be translated as the following:
### 1. Stage 1: The built-in LED will be turned on(green) when the target destination is reached.
### 2. Stage 2: The built-in LED will be turned on(yellow) when the target destination < 5 meters.
### 3. Stage 3: The built-in LED will be turned on(red) when the target destination is far away by distance > 5 meters.


### Keil 4 IDE is used to develop the project.

## Software drivers:
#### 1- GPIO (consists of port and DIO drivers)
#### 2- Systick Timer
#### 3- UART
#### 4- LCD


## Hardware:
### Tiva-C (TM4C123GH6PM) microcontroller, The built-in LEDs in the board, LCD and Ublox 6M GPS Module.
