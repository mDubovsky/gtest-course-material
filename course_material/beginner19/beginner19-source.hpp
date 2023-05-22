#pragma once

namespace Beginner19Code
{
	class RobotController {
	public:
		virtual double GetBatteryLevel(double x, double y) = 0;
	};

	class ToyRobot {
	public:
		ToyRobot(RobotController& robot_controller);
		double GetBatteryLevel(double x, double y);

	private:
		RobotController& m_robotController;
	};
}