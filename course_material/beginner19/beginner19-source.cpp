#include "beginner19-source.hpp"

namespace Beginner19Code
{
	ToyRobot::ToyRobot(RobotController& robot_controller): 
		m_robotController(robot_controller) 
	{}

	double ToyRobot::GetBatteryLevel(double x, double y) 
	{
		return m_robotController.GetBatteryLevel(x, y);
	}
}