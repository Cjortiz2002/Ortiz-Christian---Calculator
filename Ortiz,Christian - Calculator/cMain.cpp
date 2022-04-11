#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(101, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator Lab", wxPoint(30, 30), wxSize(517, 815))
{
	wxGridSizer* grid = new wxGridSizer(gridWidth, gridHeight, 0, 0);
	outputTxt = new wxTextCtrl(this, 101, "", wxPoint(0, 0), wxSize(500, 275), wxTE_RIGHT);

	wxFont font(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

#pragma region Newing Buttons
	// Newing Buttons
	// Row 1
	binaryBtn = new wxButton(this, 10, "BIN", wxPoint(0, 275), wxSize(125, 100));
	hexBtn = new wxButton(this, 11, "HEX", wxPoint(125, 275), wxSize(125, 100));
	decimalBtn = new wxButton(this, 12, "DEC", wxPoint(250, 275), wxSize(125, 100));
	divideBtn = new wxButton(this, 13, "/", wxPoint(375, 275), wxSize(125, 100));

	// Row 2
	sevenBtn = new wxButton(this, 7, "7", wxPoint(0, 375), wxSize(125, 100));
	eightBtn = new wxButton(this, 8, "8", wxPoint(125, 375), wxSize(125, 100));
	nineBtn = new wxButton(this, 9, "9", wxPoint(250, 375), wxSize(125, 100));
	multBtn = new wxButton(this, 14, "*", wxPoint(375, 375), wxSize(125, 100));

	// Row 3
	fourBtn = new wxButton(this, 4, "4", wxPoint(0, 475), wxSize(125, 100));
	fiveBtn = new wxButton(this, 5, "5", wxPoint(125, 475), wxSize(125, 100));
	sixBtn = new wxButton(this, 6, "6", wxPoint(250, 475), wxSize(125, 100));
	subtractBtn = new wxButton(this, 15, "-", wxPoint(375, 475), wxSize(125, 100));

	// Row 4
	oneBtn = new wxButton(this, 1, "1", wxPoint(0, 575), wxSize(125, 100));
	twoBtn = new wxButton(this, 2, "2", wxPoint(125, 575), wxSize(125, 100));
	threeBtn = new wxButton(this, 3, "3", wxPoint(250, 575), wxSize(125, 100));
	addBtn = new wxButton(this, 17, "+", wxPoint(375, 575), wxSize(125, 100));

	// Row 5
	negativeBtn = new wxButton(this, 20, "(-)", wxPoint(0, 675), wxSize(125, 100));
	zeroBtn = new wxButton(this, 0, "0", wxPoint(125, 675), wxSize(125, 100));
	modBtn = new wxButton(this, 19, "%", wxPoint(250, 675), wxSize(125, 100));
	equalsBtn = new wxButton(this, 18, "=", wxPoint(375, 675), wxSize(125, 100));
#pragma endregion




#pragma region Setting Buttons Colors/Fonts
	// setting buttons colors
	zeroBtn->SetBackgroundColour(wxColour(133, 19, 157));
	oneBtn->SetBackgroundColour(wxColour(133, 19, 157));
	twoBtn->SetBackgroundColour(wxColour(133, 19, 157));
	threeBtn->SetBackgroundColour(wxColour(133, 19, 157));
	fourBtn->SetBackgroundColour(wxColour(133, 19, 157));
	fiveBtn->SetBackgroundColour(wxColour(133, 19, 157));
	sixBtn->SetBackgroundColour(wxColour(133, 19, 157));
	sevenBtn->SetBackgroundColour(wxColour(133, 19, 157));
	eightBtn->SetBackgroundColour(wxColour(133, 19, 157));
	nineBtn->SetBackgroundColour(wxColour(133, 19, 157));
	binaryBtn->SetBackgroundColour(wxColour(128, 0, 64));
	hexBtn->SetBackgroundColour(wxColour(128, 0, 64));
	decimalBtn->SetBackgroundColour(wxColour(128, 0, 64));
	divideBtn->SetBackgroundColour(wxColour(0, 128, 128));
	multBtn->SetBackgroundColour(wxColour(0, 128, 128));
	subtractBtn->SetBackgroundColour(wxColour(0, 128, 128));
	addBtn->SetBackgroundColour(wxColour(0, 128, 128));
	modBtn->SetBackgroundColour(wxColour(128, 0, 64));
	negativeBtn->SetBackgroundColour(wxColour(128, 0, 64));
	equalsBtn->SetBackgroundColour(wxColour(124, 118, 150));

	// setting button fonts
	zeroBtn->SetFont(font);
	oneBtn->SetFont(font);
	twoBtn->SetFont(font);
	threeBtn->SetFont(font);
	fourBtn->SetFont(font);
	fiveBtn->SetFont(font);
	sixBtn->SetFont(font);
	sevenBtn->SetFont(font);
	eightBtn->SetFont(font);
	nineBtn->SetFont(font);
	binaryBtn->SetFont(font);
	hexBtn->SetFont(font);
	decimalBtn->SetFont(font);
	divideBtn->SetFont(font);
	multBtn->SetFont(font);
	subtractBtn->SetFont(font);
	addBtn->SetFont(font);
	equalsBtn->SetFont(font);
	modBtn->SetFont(font);
	negativeBtn->SetFont(font);

	// Setting Buttons Foreground Color
	zeroBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	oneBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	twoBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	threeBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	fourBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	fiveBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	sixBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	sevenBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	eightBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	nineBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	binaryBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	hexBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	decimalBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	divideBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	multBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	subtractBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	addBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	equalsBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	modBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
	negativeBtn->SetOwnForegroundColour(wxColour(*wxWHITE));
#pragma endregion


#pragma region Setting Output Text Color/Font
	// Output Text Box Font
	outputTxt->SetFont(font);

	// Output Text box color
	outputTxt->SetBackgroundColour(wxColour(*wxBLACK));
	outputTxt->SetOwnForegroundColour(wxColour(*wxWHITE));
#pragma endregion

}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	evt.Skip();
}
