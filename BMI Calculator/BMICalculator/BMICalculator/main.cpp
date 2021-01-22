#include <iostream>
#include <list>
using namespace std;


int main() {
	
	/*
	BMI Calculator
	weight(kg) / (height * height)(m)
	Underweight is < 18.5
	Normal weight is between 18.5-24.9
	Overweight is > 25
	*/

	float weight, height, bmi;
	cout << "Weight(kg), Height(m): ";
	cin >> weight >> height;
	bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi > 25)
		cout << "Overweight" << endl;
	else 
		cout << "Normal weight" << endl;

	cout << "Your bmi is " << bmi;

	system ("pause>0");
};
