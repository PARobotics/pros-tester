#ifndef _CONFIG_C
#define _CONFIG_C

//#include "main.h"

/*

//Remote
#define USE_PR_BUTTON  0
#define NUM_PR_BUTTONS  1 //Only include if using remote
void setUpButtons(){ //Only include if using remote

}

#define BAILOUT_BUTTON Btn7D //Include if using a bailout button
void bailOut(){ //Must be included if using bailout

}

  Sensors
  Configure them here


#define USE_SECOND_BATTERY 1 //Include this if using a second battery

#define USE_LCD  1 //Include if using LCD
void lcdGenerateMessage(){ //Include if using LCD
  printf("%s 8900 %4.1fV %4.1fV", lcdStr1, getMainBatteryVoltage() / 1000.0, getSecondBatteryVoltage() / 1000.0);
}

  MOTOR CONTROL


//Slew Rate
#define USE_SLEW  1 //Disable if slew interferes with move functions or slows robot down
int MOTOR_SLEW[MOTOR_NUM] = {255, 40, 40, 255, 255, 255, 255, 40, 40, 255}; //Include if using slew

//Move functions

void getWheelVal(){
  //TODO: replace old DRV code, set X_POS, Y_POS, THETA = 0
}

void move(int V, int H, int X){
  motorReq[M_WHEEL_L1] = BOUND(V + H, -127, 127);
  motorReq[M_WHEEL_L2] = BOUND(V + H, -127, 127);
  motorReq[M_WHEEL_R1] = BOUND(V - H, -127, 127);
  motorReq[M_WHEEL_R2] = BOUND(V - H, -127, 127);
}

#define USE_FPS 1 //Use field positioning system.

  DEBUGGING


#define DEBUG 1 //Add your debugging toggles here
*/

#endif
