#pragma once
#include "Actions/Action.h"
class ActionResize :
    public Action
{
public:
    ActionResize(ApplicationManager* AppMgr);
    void Execute();
};

