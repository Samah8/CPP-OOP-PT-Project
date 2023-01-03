#pragma once
#include "Action.h"

class ActionSelect :public Action
{
public:
    ActionSelect(ApplicationManager* pApp);

    void Execute();
};

