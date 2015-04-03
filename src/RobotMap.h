// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static SpeedController* driveLeftFront;
	static SpeedController* driveLeftRear;
	static SpeedController* driveRightFront;
	static SpeedController* driveRightRear;
	static RobotDrive* driveDrivetrain;
	static SpeedController* driveStrafe;
	static Gyro* drivegyro;
	static Encoder* driveLeftEncoder;
	static Encoder* driveRightEncoder;
	static Encoder* driveHdriveEncoder;
	static SpeedController* liftLift;
	static DigitalInput* liftTopLimit;
	static DigitalInput* liftBottomLimit;
	static SpeedController* liftLiftCim;
	static Encoder* liftLiftEncoder;
	static Solenoid* grabberLight;
	static Solenoid* grabberToteGripper;
	static DoubleSolenoid* grabberPusher;

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Solenoid* liftBlueLiftLights;
	static Solenoid* grabberPurpleTopLights;
	static Solenoid* grabberGreenTopLight;
    static Solenoid* liftRedLiftLights;
    static Solenoid* liftGreenLiftLights;
	static void init();
};
#endif