#include <iostream>
using namespace std;
int main() {
	long long W_pop,US_pop;
	cout << "enter the world's population: ";
	cin >> W_pop;
	cout << "enter the population of the US: ";
	cin >> US_pop;
	double percent;
	percent =(double) US_pop / W_pop * 100;
	cout << "The population of the US is " << percent << "of the world population.";
	return 0;
}