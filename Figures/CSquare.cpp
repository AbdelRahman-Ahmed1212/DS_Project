#include "CSquare.h"

CSquare::CSquare(Point P1, int len, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	TopLeftCorner = P1;
	length = len;
}
	

void CSquare::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawSquare(TopLeftCorner, length, FigGfxInfo, Selected);
	

}
bool CSquare::PointsInside(int x, int y) const {
    // Calculate the coordinates of the bottom-right corner based on the top-left corner and side length
    int x2 = TopLeftCorner.x + length;
    int y2 = TopLeftCorner.y + length;

    // Check if the point (x, y) lies within the square's boundaries
    if (x >= TopLeftCorner.x && x <= x2 && y >= TopLeftCorner.y && y <= y2) {
        return true; // Point is inside the square
    }
    else {
        return false; // Point is outside the square
    }
}

