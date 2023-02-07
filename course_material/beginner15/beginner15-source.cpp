#include "beginner15-source.hpp"

namespace Beginner15Code
{
	CashRegister::CashRegister():
		m_cashSum(0)
	{
	}

	void CashRegister::addCash(int dollars)
	{
		m_cashSum += dollars;
	}

	GroceryStore::GroceryStore(CashRegister& cashRegister):
		m_cashReg(cashRegister)
	{
	}

	void GroceryStore::buyMilk()
	{
		const int PRICE_OF_MILK = 3;
		m_cashReg.addCash(PRICE_OF_MILK);
	}

	void GroceryStore::buyBread()
	{
		const int PRICE_OF_BREAD = 2;
		m_cashReg.addCash(PRICE_OF_BREAD);
	}
}