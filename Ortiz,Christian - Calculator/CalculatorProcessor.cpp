#include "CalculatorProcessor.h"
#include <sstream>
enum IDS
{
	zero, one, two, three, four, five, six, seven, eight, nine, binary, hex, decimal, divide, mult, subtract, add, equals, mod, negative, clear
};

CalculatorProcessor::~CalculatorProcessor()
{
	
}

std::string CalculatorProcessor::ConvertToBinary(int _value)
{
	std::string text = "";
	
	for (int i = 0; i < 16; i++)
	{
		if (_value % 2 == 0)
		{
			text = "0" + text;
		}
		else
		{
			text = "1" + text;

		}
		_value = _value / 2;
	}
	return text;
}

std::string CalculatorProcessor::ConvertToHex(int _value)
{
	std::stringstream sstream;
	sstream << std::hex << _value;
	return sstream.str();
}

#pragma region Calculate Equation 

double CalculatorProcessor::CalculateEquation(std::vector<double>* calcValues, std::vector<int>* operatorIDs)
{
	double calcAnswer = 0;
	if (calcValues->size() < 2 && calcValues->size() != 0)
	{
		calcAnswer = calcValues->at(0);
		return calcAnswer;
	}

	for (int i = 0; i < operatorIDs->size(); i++)
	{
		switch (operatorIDs->at(i))
		{
			// Divide
		case divide:
		{
			//calcValues->at(i + 1) = calcValues->at(i) / calcValues->at(i + 1);
			IBaseCommand* divideCommand = new DivideCommand(&calcValues->at(i), &calcValues->at(i + 1));
			commands.push_back(divideCommand);
			break;
		}
		// Mult
		case mult:
		{
			//calcValues->at(i + 1) *= calcValues->at(i);
			IBaseCommand* multCommand = new MultiplyCommand(&calcValues->at(i), &calcValues->at(i + 1));
			commands.push_back(multCommand);
			break;
		}
		// Sub
		case subtract:
		{
			//calcValues->at(i + 1) = calcValues->at(i) - calcValues->at(i + 1);
			IBaseCommand* subtractCommand = new SubtractCommand(&calcValues->at(i), &calcValues->at(i + 1));
			commands.push_back(subtractCommand);
			break;
		}
		// add
		case add:
		{
			//calcValues->at(i + 1) += calcValues->at(i);
			IBaseCommand* addCommand = new AddCommand(&calcValues->at(i), &calcValues->at(i + 1));
			commands.push_back(addCommand);
			break;
		}
		// Mod
		case mod:
		{
			return fmod(calcValues->at(i), calcValues->at(i + 1));

			break;
		}
		default:
			break;
		}
	}

	// calcAnswer = calcValues->at(calcValues->size() - 1);
	// loop through commands
	for (int i = 0; i < commands.size(); i++)
	{
		commands[i]->Execute();
	}
	calcAnswer = calcValues->at(calcValues->size() - 1);
	calcValues->clear();
	operatorIDs->clear();
	commands.clear();
	return calcAnswer;
}

#pragma endregion

