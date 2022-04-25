#pragma once
#include <vector>
#include "IBaseCommand.h"
#include <string>

class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInstance()
	{
		static CalculatorProcessor instance;
		return instance;
	};
private:
	CalculatorProcessor() {};
	~CalculatorProcessor();
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator = (CalculatorProcessor const&) = delete;
	std::vector<double>* calcValues;
	std::vector<int>* operatorIDs;
	std::vector<IBaseCommand*> commands = std::vector<IBaseCommand*>();

public:
	double CalculateEquation(std::vector<double>* calcvalues, std::vector<int>* operatorIDs);
	std::string ConvertToBinary(int _value);
	std::string ConvertToHex(int _value);
};

