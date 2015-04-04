#include "Xbox.h"
Xbox::Xbox(int portNumber) : Joystick (portNumber)
{

}
Xbox::~Xbox(){

}
bool Xbox::isA(){
	return Joystick::GetRawButton(1);
}
bool Xbox::isB(){
	return Joystick::GetRawButton(2);
}
bool Xbox::isX(){
	return Joystick::GetRawButton(3);
}
bool Xbox::isY(){
	return Joystick::GetRawButton(4);
}
bool Xbox::isLB(){
	return Joystick::GetRawButton(5);
}
bool Xbox::isRB(){
	return Joystick::GetRawButton(6);
}
bool Xbox::isBack(){
	return Joystick::GetRawButton(7);
}
bool Xbox::isStart(){
	return Joystick::GetRawButton(8);
}
bool Xbox::isLeftStick(){
	return Joystick::GetRawButton(9);
}
bool Xbox::isRightStick(){
	return Joystick::GetRawButton(10);
}


float Xbox::getLeftStickX(){
	return Joystick::GetRawAxis(1);
}
float Xbox::getLeftStickY(){
	return Joystick::GetRawAxis(2);
}
float Xbox::getLeftTrigger(){
	return Joystick::GetRawAxis(3);
}
float Xbox::getRightTrigger(){
	return Joystick::GetRawAxis(4);
}
float Xbox::getRightStickX(){
	return Joystick::GetRawAxis(5);
}
float Xbox::getRightStickY(){
	return Joystick::GetRawAxis(6);
}

/*float Xbox::Joystick::GetRawAxis(int axis){
	return Joystick::GetRawAxis(axis);
}*/
