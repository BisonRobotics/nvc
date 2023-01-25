#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

//Motor $motorName(PORT_NUMBER, isReversed?);
//Motor $motorGroupName[]{$motorName1, $motorName2};

//ADIEncoder $sensorName ('PORT_TOP', 'PORT_BOTTOM', isReversed?);

//ADIDigitalOut piston ('PORT_NUMBER');

////Tank Drive Function (driveLeft, driveRight are Motor arrays)
// void tankDrive(int left, int right){
//   for(int x=0;x<2;x++){driveLeft[x] = left;}
//   for(int x=0;x<2;x++){driveRight[x] = right;}
// }
