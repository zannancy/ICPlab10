#include "stabline.h"


int main(){

	ifstream inputPoint("inputPoint.txt");
	ifstream inputLine("inputLine.txt");
	Point pointArray[8];
	Line lines_array[5];
	Line Stabline[5];
	int numOfPoints = 8;
	int NumofLines = 5;
	int lId = 0;
	int NumbofStbLines = 0;
	int xcoord = 8;
	const int MaxiLnSize = 5;
	const int MaxPointSze = 8;

	readPoints(inputPoint, pointArray, 600, numOfPoints);
	readLine(inputLine, lines_array, 600, NumofLines);

	PrintLineCoords(lId,lines_array,MaxiLnSize,pointArray,MaxPointSze);
	getStabline(xcoord, lines_array, 600, 8, pointArray, 600, Stabline, 600, NumbofStbLines);

}