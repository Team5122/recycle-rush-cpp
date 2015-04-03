#ifndef _XBOX_H
#define _XBOX_H

#include "WPILib.h"
class Xbox: public Joystick{

public:
	Xbox(int portNumber);
	virtual ~Xbox(void);
	bool* isA();
	bool* isB();
	bool* isX();
	bool* isY();
	bool* isLB();
	bool* isRB();
	bool* isBack();
	bool* isStart();
	bool* isLeftStick();
	bool* isRightStick();

	double* getLeftStickX();
	double* getLeftStickY();
	double* getLeftTrigger();
	double* getRightTrigger();
	double* getRightStickX();
	double* getRightStickY();

	bool* getRawButton(int);
	double* getRawAxis(int);
	
};

#endif
