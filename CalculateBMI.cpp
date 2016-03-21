#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "calculate.h"
using namespace std;

int main()
{
	ifstream inFile("file.in", ios::in);

	if(!inFile)
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	int height, weight;

	ofstream outFile("file.out", ios::out);

	while(inFile >> height >> weight)
	{  
		if(!outFile)
		{
			cerr << "File could not be opened" << endl;
			exit(1);
		}

		CalculateBMI toCalculateBMI;
		if(height!=0 && weight!=0)
		{
			toCalculateBMI.setHeight(height);
			toCalculateBMI.setWeight(weight);
			outFile << left << setw(5) << setprecision(4) << toCalculateBMI.BMI() << "  "<< toCalculateBMI.displayBMIvalue() << endl;
		}
	}
}
