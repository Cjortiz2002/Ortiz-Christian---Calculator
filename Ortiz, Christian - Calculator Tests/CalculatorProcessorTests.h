#pragma once
#include "../Ortiz,Christian - Calculator/CalculatorProcessor.h"

class CalculatorProcessorTests
{
private:
	std::vector<double>* calcValues = new std::vector<double>();
	std::vector<int>* operatorIDs = new std::vector<int>();
	CalculatorProcessor* processor = &CalculatorProcessor::GetInstance();;
public:
	bool Test5Plus9Minus8times6();
	bool Test8Times2divide8();
	bool Test5times5plus5divide5minus5();
	bool Test1plus3times8minus10divide11();
	bool TestBinary26();
	bool TestBinary51();
	bool TestBinary99();
	bool TestHexadecimal15();
	bool TestHexadecimal102();
	bool TestHexadecimal23();


};

