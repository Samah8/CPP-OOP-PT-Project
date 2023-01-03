#include "ActionAddRectangle.h"
#include "..\Figures\CRectangle.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionAddRectangle::ActionAddRectangle(ApplicationManager* pApp) :Action(pApp)
{}

//Execute the action
void ActionAddRectangle::Execute()
{
	Point P1, P2;

	//Get a Pointer to the Interface
	GUI* pGUI = pManager->GetGUI();


	GfxInfo SqrGfxInfo;
	SqrGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	SqrGfxInfo.DrawClr = pGUI->getCrntDrawColor();
	SqrGfxInfo.FillClr = pGUI->getCrntFillColor();
	SqrGfxInfo.BorderWdth = pGUI->getCrntPenWidth();


	//Step 1 - Read Square data from the user

	pGUI->PrintMessage("New Rectangle: Click at first point");
	//Read 1st point and store in point P1
	pGUI->GetPointClicked(P1.x, P1.y);

	pGUI->PrintMessage("New Rectangle: Click at second point");
	//Read 2nd point and store in point P2
	pGUI->GetPointClicked(P2.x, P2.y);


	pGUI->ClearStatusBar();



	//Step 2 - Create a Rectangle with the parameters read from the user
	Point TopLeftCorner=P1;
	Point BotRightCorner=P2;

	CRectangle* R = new CRectangle(TopLeftCorner, BotRightCorner, SqrGfxInfo);

	//Step 3 - Add the Square to the list of figures
	pManager->AddFigure(R);
}
