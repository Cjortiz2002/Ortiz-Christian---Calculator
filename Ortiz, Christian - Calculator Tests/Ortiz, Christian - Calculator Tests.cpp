// Ortiz, Christian - Calculator Tests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ButtonFactoryTests.h"
#include "CalculatorProcessorTests.h"
#include <iostream>

int main()
{
	CalculatorProcessorTests processorTests;
	ButtonFactoryTests factoryTests;

#pragma region Calculator Processor Test
	std::cout << "----CALCULATOR PROCESSOR TESTS----\n\n";
	if (processorTests.Test5Plus9Minus8times6())
	{
		std::cout << "5 + 9 - 8 * 6 does = 36, test Passed" << std::endl;
	}
	else
	{
		std::cout << "5 + 9 - 8 * 6 does not = 36, test Failed" << std::endl;

	}

	if (processorTests.Test8Times2divide8())
	{
		std::cout << "8 * 2 / 8 does = 2, test Passed" << std::endl;
	}
	else
	{
		std::cout << "8 * 2 / 8 does not = 2, test Failed" << std::endl;

	}

	if (processorTests.Test5times5plus5divide5minus5())
	{
		std::cout << "5 * 5 + 5 / 5 does = 1, test Passed" << std::endl;
	}
	else
	{
		std::cout << "5 * 5 + 5 / 5 does not = 1, test Failed" << std::endl;

	}

	if (processorTests.Test1plus3times8minus10divide11())
	{
		std::cout << "1 + 3 * 8 - 10 does = 2, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "1 + 3 * 8 - 10 does not = 2, Test Failed" << std::endl;

	}

	if (processorTests.TestBinary26())
	{
		std::cout << "26 in binary does = 0000 0000 0001 1010, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "26 in binary does not = 0000 0000 0001 1010, Test Failed" << std::endl;

	}

	if (processorTests.TestBinary51())
	{
		std::cout << "51 in binary does = 0000 0000 0011 0011, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "51 in binary does not = 0000 0000 0011 0011, Test Failed" << std::endl;

	}
	if (processorTests.TestBinary99())
	{
		std::cout << "99 in binary does = 0000 0000 0110 0011, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "99 in binary does not = 0000 0000 0110 0011, Test Failed" << std::endl;

	}

	if (processorTests.TestHexadecimal15())
	{
		std::cout << "15 in Hexadecimal does = f, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "15 in Hexadecimal does not = f, Test Failed" << std::endl;

	}

	if (processorTests.TestHexadecimal102())
	{
		std::cout << "102 in Hexadecimal does = 66, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "102 in Hexadecimal does not = 66, Test Failed" << std::endl;

	}

	if (processorTests.TestHexadecimal23())
	{
		std::cout << "23 in Hexadecimal does = 17, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "23 in Hexadecimal does not = 17, Test Failed" << std::endl;

	}
#pragma endregion

#pragma region Button Factory Tests
	std::cout << "\n----BUTTON FACTORY TESTS----\n\n";
	if (factoryTests.Check2ButtonID())
	{
		std::cout << "The Two Button's ID is 2, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Two Button's Id is not 2, Test Failed" << std::endl;

	}

	if (factoryTests.Check4ButtonID())
	{
		std::cout << "The Four Button's ID is 4, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Four Button's Id is not 4, Test Failed" << std::endl;

	}

	if (factoryTests.Check6ButtonID())
	{
		std::cout << "The Six Button's ID is 6, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Six Button's Id is not 6, Test Failed" << std::endl;

	}

	if (factoryTests.Check8ButtonID())
	{
		std::cout << "The Eight Button's ID is 8, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Eight Button's Id is not 8, Test Failed" << std::endl;

	}

	if (factoryTests.CheckClearButtonID())
	{
		std::cout << "The Clear Button's ID is 20, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Clear Button's Id is not 20, Test Failed" << std::endl;

	}
	if (factoryTests.CheckDivideButtonID())
	{
		std::cout << "The Divide Button's ID is 13, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Divide Button's Id is not 13, Test Failed" << std::endl;

	}

	if (factoryTests.CheckMultButtonID())
	{
		std::cout << "The Multiply Button's ID is 14, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Multiply Button's Id is not 14, Test Failed" << std::endl;

	}

	if (factoryTests.CheckNegativeButtonID())
	{
		std::cout << "The Negative Button's ID is 19, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Negative Button's Id is not 19, Test Failed" << std::endl;

	}

	if (factoryTests.CheckPlusButtonID())
	{
		std::cout << "The Plus Button's ID is 16, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Plus Button's Id is not 16, Test Failed" << std::endl;

	}

	if (factoryTests.CheckSubtractButtonID())
	{
		std::cout << "The Subtract Button's ID is 15, Test Passed" << std::endl;
	}
	else
	{
		std::cout << "The Subtract Button's Id is not 15, Test Failed" << std::endl;

	}
#pragma endregion

}

