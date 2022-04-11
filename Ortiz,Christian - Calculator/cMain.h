#pragma once
#include "wx\wx.h"
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
public:
	int gridWidth = 10;
	int gridHeight = 10;

#pragma region Initialize Buttons Members
	// create calc button members
	wxTextCtrl* outputTxt = nullptr;
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

	wxDECLARE_EVENT_TABLE();

};

