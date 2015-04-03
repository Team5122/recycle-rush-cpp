#include "Xbox.h"
Xbox::Xbox(int portNumber) : Joystick (portNumber)
{

}
Xbox::~Xbox(){

}
bool* Xbox::isA(){
	return getRawButton(1);
}
bool* Xbox::isB(){
	return getRawButton(2);
}
bool* Xbox::isX(){
	return getRawButton(3);
}
bool* Xbox::isY(){
	return getRawButton(4);
}
bool* Xbox::isLB(){
	return getRawButton(5);
}
bool* Xbox::isRB(){
	return getRawButton(6);
}
bool* Xbox::isBack(){
	return getRawButton(7);
}
bool* Xbox::isStart(){
	return getRawButton(8);
}
bool* Xbox::isLeftStick(){
	return getRawButton(9);
}
bool* Xbox::isRightStick(){
	return getRawButton(10);
}


double* Xbox::getLeftStickX(){
	return getRawAxis(1);
}
double* Xbox::getLeftStickY(){
	return getRawAxis(2);
}
double* Xbox::getLeftTrigger(){
	return getRawAxis(3);
}
double* Xbox::getRightTrigger(){
	return getRawAxis(4);
}
double* Xbox::getRightStickX(){
	return getRawAxis(5);
}
double* Xbox::getRightStickY(){
	return getRawAxis(6);
}


/*bool* Xbox::getRawButton(int button){
	return _joystick->GetRawButton(button);
}
double* Xbox::getRawAxis(int axis){
	return _joystick->GetRawAxis(axis);
}*/
