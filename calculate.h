#include <iostream>
#include <string>
using namespace std;

class CalculateBMI
{
	public:
		void setHeight(int);
		float getHeight();
		void setWeight(int);
		int getWeight();
		float BMI();
		string displayBMIvalue();
	private:
		float height;
		int weight;
		float BMIvalue;
};
