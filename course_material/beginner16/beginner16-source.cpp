#include "beginner16-source.hpp"

namespace Beginner16Code
{
	Calculator::Calculator(Multiplier& multiplier):
		m_multi(multiplier)
	{
	}

	int Calculator::multiply(int a, int b)
	{
		return m_multi.multiplyTwoNumbers(a, b);
	}

	int Calculator::squared(int a)
	{
		return m_multi.multiplyTwoNumbers(a, a);
	}

	int Multiplier::multiplyTwoNumbers(int a, int b)
	{
		return a*b;
	}
}