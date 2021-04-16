#include "stabline.h"

void PrintLineCoords(LineID lId, Line lines_array[], const int MaxiLnSize, Point pointsArray[], const int MaxPointSze){

	Line selectedLine = lines_array[lId];
	
	int x1, y1, x2, y2;

	Point cp1 = pointsArray[selectedLine.p1];
	Point cp2 = pointsArray[selectedLine.p2];

	x1 = cp1.x;
	y1 = cp1.y;

	x2 = cp2.x;
	y2 = cp2.y;

	cout << "Selected Line: " << lId << "\nPoint IDs: " << cp1.pId << "  " <<cp2.pId << "\nCoordinates: ("<< x1<< "," <<y1 << ") , (" << x2 << "," << y2 << ") \n";


}