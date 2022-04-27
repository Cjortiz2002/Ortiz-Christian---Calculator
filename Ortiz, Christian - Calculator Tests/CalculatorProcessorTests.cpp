#include "CalculatorProcessorTests.h"
enum IDS
{
	zero, one, two, three, four, five, six, seven, eight, nine, binary, hex, decimal, divide, mult, subtract, add, equals, mod, negative, clear
};

bool CalculatorProcessorTests::Test5Plus9Minus8times6()
{
	calcValues->push_back(5);
	calcValues->push_back(9);
	calcValues->push_back(8);
	calcValues->push_back(6);
	operatorIDs->push_back(add);
	operatorIDs->push_back(subtract);
	operatorIDs->push_back(mult);

	if (processor->CalculateEquation(calcValues, operatorIDs) == 36)
	{
		calcValues->clear();
		operatorIDs->clear();
		return true;

	}
	else
	{
		calcValues->clear();
		operatorIDs->clear();
		return false;
	}
}

bool CalculatorProcessorTests::Test8Times2divide8()
{
	calcValues->push_back(8);
	calcValues->push_back(2);
	calcValues->push_back(8);
	operatorIDs->push_back(mult);
	operatorIDs->push_back(divide);

	if (processor->CalculateEquation(calcValues, operatorIDs) == 2)
	{
		calcValues->clear();
		operatorIDs->clear();
		return true;
	}
	else
	{
		calcValues->clear();
		operatorIDs->clear();
		return false;
	}
}

bool CalculatorProcessorTests::Test5times5plus5divide5minus5()
{
	calcValues->push_back(5);
	calcValues->push_back(5);
	calcValues->push_back(5);
	calcValues->push_back(5);
	calcValues->push_back(5);
	operatorIDs->push_back(mult);
	operatorIDs->push_back(add);
	operatorIDs->push_back(divide);
	operatorIDs->push_back(subtract);

	if (processor->CalculateEquation(calcValues, operatorIDs) == 1)
	{
		calcValues->clear();
		operatorIDs->clear();
		return true;
	}
	else
	{
		calcValues->clear();
		operatorIDs->clear();
		return false;
	}
}

bool CalculatorProcessorTests::Test1plus3times8minus10divide11()
{
	calcValues->push_back(1);
	calcValues->push_back(3);
	calcValues->push_back(8);
	calcValues->push_back(10);
	calcValues->push_back(11);
	operatorIDs->push_back(add);
	operatorIDs->push_back(mult);
	operatorIDs->push_back(subtract);
	operatorIDs->push_back(divide);

	if (processor->CalculateEquation(calcValues, operatorIDs) == 2)
	{
		calcValues->clear();
		operatorIDs->clear();
		return true;
	}
	else
	{
		calcValues->clear();
		operatorIDs->clear();
		return false;
	}
}

bool CalculatorProcessorTests::TestBinary26()
{
	if (processor->ConvertToBinary(26) == "0000000000011010")
	{

		return true;
	}
	else
	{

		return false;
	}
}

bool CalculatorProcessorTests::TestBinary51()
{
	if (processor->ConvertToBinary(51) == "0000000000110011")
	{

		return true;
	}
	else
	{

		return false;
	}
}

bool CalculatorProcessorTests::TestBinary99()
{
	if (processor->ConvertToBinary(99) == "0000000001100011")
	{

		return true;
	}
	else
	{

		return false;
	}
}

bool CalculatorProcessorTests::TestHexadecimal15()
{
	if (processor->ConvertToHex(15) == "f")
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}

bool CalculatorProcessorTests::TestHexadecimal102()
{
	if (processor->ConvertToHex(102) == "66")
	{
		return true;
	}
	else
	{
		
		return false;
	}
}

bool CalculatorProcessorTests::TestHexadecimal23()
{
	if (processor->ConvertToHex(23) == "17")
	{
		return true;
	}
	else
	{

		return false;
	}
}


