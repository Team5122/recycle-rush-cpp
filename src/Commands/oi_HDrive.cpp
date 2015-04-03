// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "oi_HDrive.h"

oi_HDrive::oi_HDrive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drive);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void oi_HDrive::Initialize() {
	
}
double oi_HDrive::map(double old_value, double old_top, double old_bottom, double new_top, double new_bottom){
	return (old_value - old_bottom) / (old_top - old_bottom) * (new_top - new_bottom) + new_bottom;
}

// Called repeatedly when this Command is scheduled to run
void oi_HDrive::Execute() {
	double throttle = Robot::oi->getDriver()->GetThrottle();

	throttle = map(throttle, -1, 1, 1, .25);
	double factor = throttle*.8;
	double drive = Robot::oi->getDriver()->GetY()*factor;
	double turn = Robot::oi->getDriver()->GetZ()*factor;
	double slide = Robot::oi->getDriver()->GetX()*factor;

	Robot::drive->HDrive(drive, turn, slide);
}

// Make this return true when this Command no longer needs to run execute()
bool oi_HDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void oi_HDrive::End() {
	Robot::drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void oi_HDrive::Interrupted() {

}
