#pragma once
#include "../Ortiz,Christian - Calculator/ButtonFactory.h"

class ButtonFactoryTests
{
private:
	wxButton* TestButton = nullptr;
	cMain* mainAddress = new cMain();
	ButtonFactory buttonFactory = ButtonFactory(mainAddress);
public:
	void SetMainAddress();
	// test Button IDs
	bool Check2ButtonID();
	bool Check4ButtonID();
	bool Check6ButtonID();
	bool Check8ButtonID();
	bool CheckPlusButtonID();
	bool CheckClearButtonID();
	bool CheckMultButtonID();
	bool CheckDivideButtonID();
	bool CheckNegativeButtonID();
	bool CheckSubtractButtonID();

};

