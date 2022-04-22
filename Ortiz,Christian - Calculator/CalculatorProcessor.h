#pragma once
class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInstance()
	{
		static CalculatorProcessor instance;
		return instance;
	};
};

