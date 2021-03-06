#pragma once
#include "wx\wx.h"
#include <vector>
#include "CalculatorProcessor.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
private:
	std::vector<double>* calcValues = new std::vector<double>();
	std::vector<int>* operatorIDs = new std::vector<int>();
	CalculatorProcessor* processor = &CalculatorProcessor::GetInstance();;
	int decimalConverted = 0;
	bool conversionOccured = false;
#pragma region Initialize Buttons Members
	// create calc button members
	wxTextCtrl* outputTxt = nullptr;
	wxButton* clearBtn = nullptr;
	wxButton* zeroBtn = nullptr;
	wxButton* oneBtn = nullptr;
	wxButton* twoBtn = nullptr;
	wxButton* threeBtn = nullptr;
	wxButton* fourBtn = nullptr;
	wxButton* fiveBtn = nullptr;
	wxButton* sixBtn = nullptr;
	wxButton* sevenBtn = nullptr;
	wxButton* eightBtn = nullptr;
	wxButton* nineBtn = nullptr;
	wxButton* binaryBtn = nullptr;
	wxButton* hexBtn = nullptr;
	wxButton* decimalBtn = nullptr;
	wxButton* divideBtn = nullptr;
	wxButton* multBtn = nullptr;
	wxButton* subtractBtn = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* equalsBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* negativeBtn = nullptr;
#pragma endregion

	void OnButtonClicked(wxCommandEvent& evt);
	void GetInputValue();
	void SetButtonsFormat();
	wxDECLARE_EVENT_TABLE();

};

