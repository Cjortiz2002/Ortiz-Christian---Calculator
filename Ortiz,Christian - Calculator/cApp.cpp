#include "cApp.h"
wxIMPLEMENT_APP(cApp);
#define  _CRT_SECURE_NO_WARNINGS
cApp::cApp()
{

}

cApp::~cApp()
{
}

bool cApp::OnInit()
{
	m_windowFrame1 = new cMain();
	m_windowFrame1->Show();


	return true;
}
