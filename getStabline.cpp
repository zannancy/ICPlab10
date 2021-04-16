#include "stabline.h"

void getStabline(const int xcoord, Line lines_array[], const int MaxiLnSize, const int NumofLines, Point pointArray[], const int MaxPointSze, Line stabbedLines[], const int MaxStbSize, int& NumbofStbLines){

	int temp = 0;

	for(int i = 0; i< NumofLines; i++){
		if(pointArray[lines_array[i].p2]. x >= xcoord){
			if(pointArray[lines_array[i].p1]. x <= xcoord){
				stabbedLines[temp] = lines_array[i];
				temp++;
				NumbofStbLines++;
			}
		}
	}

		cout<<" Number of Stabbed Lines: "<<temp<<endl;
		for (int i = 0; i < NumbofStbLines; i++){
			PrintLineCoords(stabbedLines[i].lId, lines_array, 600, pointArray, 600);
		}
}