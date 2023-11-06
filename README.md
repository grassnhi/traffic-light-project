# Traffic Light Project

## Finite State Machine
![FSM](https://github.com/grassnhi/traffic-light-project/blob/main/Materials/fsm.png)


## Button using for traffic light
 * BT0 - button 1 (PA1) 
 * BT1 - button 2 (PA4)
 * BT2 - button 3 (PB0)

## Pedestrian mode (Traffic light 1)
 * BT3 - button for pedestrian. (PA0)
 * PLIGHT1 - pedestrian light - red. (PA8)
 * PLIGHT2 - pedestrian light - green. (PB10)
 * BUZZ - Pedestrian Buzzer. (PA6)

## Traffic light 1
 * TLIGHT11
 * TLIGHT12

## Traffic light 2
 * TLIGHT21
 * TLIGHT22

## Light state:
 * Default: 00
 * Green: 01
 * Red: 10
 * Amber: 11

## Timer: 
 * timer_2: 10ms, 
 * timer_3: 1s.

## Button:
 * BT0: Change mode
 * BT1: Configure (color, time)
 * BT2: Confirm
 * BT3: Pedestrian mode