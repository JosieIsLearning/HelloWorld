#include <iostream>
using namespace std;
const int inch_per_feet = 12;
const double pound_per_kg = 2.2;
const double m_per_inch = 0.0254;
int main()
{
	int h_inch, h_feet;//height
	double w_pound;//weight
	cout << "please enter your height:___\b\b\bfeet";
	cin >> h_feet;
	cout << "___\b\b\binch:";
	cin >> h_inch;
	cout << "please enter your weight:___\b\b\bpound:";
	cin >> w_pound;
	int h = h_feet * inch_per_feet + h_inch;//inch
	double h_m = h * m_per_inch;//m
	double w_kg = w_pound / pound_per_kg;
	double BMI = w_kg / (h_m * h_m);

	cout << "Your height is:" << h << "feet." << endl;
	cout << "Your height is:" << h_m << "m." << endl;
	cout << "Your weight is:" << w_kg << "kg." << endl;
	cout << "Your BMI is:" << BMI << "kg/m^2." << endl;	
	return 0;
}