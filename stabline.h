#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

typedef int point_Id;
typedef int LineID;
struct Point //  Point structure definition
{
	point_Id pId;  //point Id
	int x;
	int y;
};

struct Line // a line that has 2 end points
{
	LineID lId; // line Id
	point_Id p1; // 1st Point
	point_Id p2; // 2nd Point
};

void readPoints(ifstream& inputPoint, Point pointArray[], const int MaxPointSze, int& numOfPoints);

void readLine(ifstream& inputLine, Line lines_array[], const int MaxiLnSize, int NumofLines);

void PrintLineCoords(LineID lId, Line lines_array[], const int MaxiLnSize, Point pointsArray[], const int MaxPointSze);

void getStabline(const int xcoord, Line lines_array[], const int MaxiLnSize, const int NumofLines, Point pointArray[], const int MaxPointSze, Line stabbedLines[], const int MaxStbSize, int& NumbofStbLines);

