#include "stabline.h"

void readLine(ifstream& inputLine, Line lines_array[], const int MaxiLnSize, int NumofLines){

	int m,n,o;

	for(int i=0; i< NumofLines; i++){
		inputLine>>m>>n>>o;
		//lines_array[i] = {m,n,o};
	}


	inputLine.close();

}