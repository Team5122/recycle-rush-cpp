// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_HDRIVE_H
#define OI_HDRIVE_H


#include "Commands/Subsystem.h"
#include "Commands/Command.h"
#include "WPILib.h"
#include "../Robot.h"


/**
 *
 *
 * @author ExampleAuthor
 */
class oi_HDrive: public Command {
public:
	oi_HDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	double map(double old_value, double old_top, double old_bottom, double new_top, double new_bottom);
};

#endif
