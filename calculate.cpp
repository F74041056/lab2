#include <iostream>
#include "calculate.h"
using namespace std;

void CalculateBMI::setHeight(int realHeight)
{
	height = ((float)realHeight/100)*((float)realHeight/100);
}

float CalculateBMI::getHeight()
{
	return height;
}

void CalculateBMI::setWeight(int realWeight)
{
	weight = realWeight;
}

int CalculateBMI::getWeight()
{
	return weight;
}

float CalculateBMI::BMI()
{
	BMIvalue = getWeight()/getHeight();
}

string CalculateBMI::displayBMIvalue()
{
	if(BMI()>=40)
		return "Obese Class III (Very severely obese)";
	else if(BMI()>=35)
			return "Obese Class II (Severely obese)";
	else if(BMI()>=30)
			return "Obese Class I (Moderately ovese)";
	else if(BMI()>=25)
			return "Overweight";
	else if(BMI()>=18.5)
			return "Normal";
	else if(BMI()>=16.0)
			return "Underweight";
	else if(BMI()>=15.0)
			return "Severely underweight";
	else
		return "Very severely underweight";
}
