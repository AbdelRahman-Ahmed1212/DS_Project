#ifndef ACTION_ADD_SQUARE_H
#define ACTION_ADD_SQUARE_H

#include "Action.h"

//Add Square Action class
class ActionAddSquare: public Action
{
    Point P1, p2;
public:
	ActionAddSquare(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
    bool PointsInside(int x, int y);
};

#endif