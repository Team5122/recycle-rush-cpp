#ifndef _XBOX_H
#define _XBOX_H

#include "WPILib.h"
class Xbox: public Joystick{

public:
	Xbox(int portNumber);
	virtual ~Xbox(void);
	bool isA();
	bool isB();
	bool isX();
	bool isY();
	bool isLB();
	bool isRB();
	bool isBack();
	bool isStart();
	bool isLeftStick();
	bool isRightStick();

	float getLeftStickX();
	float getLeftStickY();
	float getLeftTrigger();
	float getRightTrigger();
	float getRightStickX();
	float getRightStickY();

};

#endif
