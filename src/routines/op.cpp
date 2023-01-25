#include "robot_config.h"

void op_comp(){
  while(1){
    ////Tank Drive
    // int left = joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
    // int right = joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    // tankDrive(left, right);

    ////Button if Statement
    // if(joystick.get_digital(E_CONTROLLER_DIGITAL_R1)){
    //   $motorName = 127;
    // }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_R2)){
    //   $motorName = -127;
    // }else{
    //   $motorName = 0;
    // }

    //pneumatics
    // if(joystick.get_digital_new_press(E_CONTROLLER_DIGITAL_X)){
    //   piston.set_value(true);
    // }else if(joystick.get_digital_new_press(E_CONTROLLER_DIGITAL_B)){
    //   piston.set_value(false);
    // }
    delay(2);
  }
}
