#include <iostream>
using namespace std;
const double degree2min = 60;
const double min2sec = 60;

int main() {
	int degree, min, sec;
	cout << "enter a latutude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees:";
	cin >> degree;
	cout << "Next, enter the seconds of arc:";
	cin >> min;
	cout << "Finally, enter the seconds of arc:";
	cin >> sec;

	double deg = degree + min / degree2min + sec / min2sec / degree2min;
	cout << degree << " degrees, " << min << " minutes, " << sec << "seconds = " << deg << " degrees." << endl;

	return 0;
}