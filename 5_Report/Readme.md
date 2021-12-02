# Requirements
## Introduction
The use of personal vehicles is very common now a days and a result, the number of vehicles on the roads are exponentially increasing. Roads without any supervision or guidance can lead in to traffic congestions and accidents.

Traffic Lights or Traffic Signals are signalling devices that are used to control the flow of traffic. Generally, they are positioned at junctions, intersections, ‘X’ roads, pedestrian crossings etc. and alternate the priority of who has to wait and who has to go.
## Research
The traffic lights will provide instructions to the users (drivers and pedestrians) by displaying lights of standard color.The traffic lights consist of three universal coloured lights: the green light allows traffic to proceed in the indicated direction, the yellow  light  warns  vehicles  to  prepare  for  short  stop, and the red  signal prohibits any  traffic  from  proceeding. Similarly  as  traffic light we have used four light pair of three color lights Red, Green & Yellow. These light timing is control by Atmega328 controller.
## Features
simple, low-cost, and real time traffic signal system that aims to overcome many problems and improves the traffic system and the system is based on ATMEGA 328.
## Defining our system
Traffic signal mainly used for controlling the vehicles and help to reduce the accidents between vehicles. The traffic congestion problems are increasing day by day because of the increasing number of vehicles with limited infrastructure. Under this situation, the existing traffic light systems which are timer based are not able to control traffic. To solve this problem, a real time traffic control system is needed which will control the traffic signal according to traffic density.
## SWOT Analysis
**Strength:**
- The advantage of  traffic light contoller is that to avoid more accidents and vehicle congestion.

**Weakness:**
- If you do not follow the traffic rules , this can lead to a occur some accident.
- if you waiting the car in traffic,the vehicle is not turned off 
- you can not wait more time in traffic because of some urgent work.

**Opportunities:**
- The advanced technologies in automotive and intelligence traffic light controller are predicted to increase the growth of the market in the review period.Growing demand for comfort and energy capabilities in vehicles is accelerating market growth.

**Threats:**
- More number of vehicles are waiting in three side roads .
## What
A real time traffic control system is needed which will control the traffic signal according to traffic density.
## When
Our system will be very useful for solving most of the traffic congestion problems occurs today.
## Who
The People facing traffic congestion problems are increasing day by day because of the increasing number of vehicles with limited infrastructure.
## Where
The traffic signal lights system is enhanced to generate traffic-light signals based on the traffic on roads at that particular instant.
## How
The whole system is controlled by Atmega328 & atmega8 microcontroller. The designed system is implemented, tested to ensure its performance and other design factors.
## High level requirements
| ID | Description | Status |
|------| ------| ------|
| HLR1 | When the 3 sides of road are closed, the Green LED glows in fourth side indicating the vehicle is to be moved. | Implemented
|HLR2  | Next the yellow led glows in one side,then the vehicle is ready to move.| Implemented
|HLR3  | The red LED glows in other roads,then the vehicle is stop in that side . |	Implemented
## Low Level Requirements
| ID | Description | Status |
|-------|------|------|
| LLR1 | The input is visualized using colour of LED glow.| Implemented 
| LLR2 | The traffic system runs effectively on linux but it will also run equally well on other.  | Implemented
| LLR3 | The corresponding LED glows based on the traffic density.| Implemented 
# TEST PLAN
## High Level Test plan
| ID    | Description                             | Expected O/P | Actual O/P | Type of Test |
|-------|-----------------------------------------| ------------ | ---------- | ------------ |
| H_01  |Traffic signal                   |PASSED        |SUCCESS     | Requirement  |
| H_01  |RYG Led glow                      |PASSED        |SUCCESS     | Scenario     |
| H_03  | blinking led             |PASSED        |SUCCESS     | Boundary     |

## Low Level Test Plan
| ID    | Description           | Expected O/P | Actual O/P | Type of Test | 
|-------|-----------------------| ------------ | -----------| ------------ |
| L_01  |Open the traffic road         | PASSED       |SUCESS      | Requirement  |
| L_02  |View the signal | PASSED       |SUCESS      | Scenario     |
| L_03  |waiting possible vehicle     | PASSED       |SUCCESS     | Boundary     |

## Output
![Image 1](https://user-images.githubusercontent.com/94268410/144395120-d14580ec-b9d1-4bac-a0a6-c261282a1526.png)

![Image 2](https://user-images.githubusercontent.com/94268410/144395159-0cc78581-c3bd-4bd2-ba43-5a894c7a9c50.png)

![Image 3](https://user-images.githubusercontent.com/94268410/144396972-96f502b8-1d82-4a7d-8ff1-b5f6b5889acb.png)

![Image 4](https://user-images.githubusercontent.com/94268410/144397073-08856bd2-b9cd-48d7-8aba-71f1b1a22049.png)


