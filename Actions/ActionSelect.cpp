#include "ActionSelect.h"
#include "../GUI/GUI.h"
#include "../ApplicationManager.h"

ActionSelect::ActionSelect(ApplicationManager* pApp) :Action(pApp) {}

void ActionSelect::Execute() {
	Point point;


	GUI* pGUI = pManager->GetGUI();


	pGUI->PrintMessage("Select Action");
	pGUI->GetPointClicked(point.x, point.y);


	pGUI->ClearStatusBar();

	CFigure* fig = pManager->GetFigure(point.x, point.y);

	if (fig) {
		pGUI->PrintMessage("Fig unselected");
		fig->SetSelected(!fig->IsSelected());
		if (fig->IsSelected())
		{
			fig->PrintMe(pGUI);
		}
	}



}