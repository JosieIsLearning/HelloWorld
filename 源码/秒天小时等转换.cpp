#include <iostream>
using namespace std;
const int hour_per_day = 24;
const int min_per_hour = 60;
const int sec_per_min = 60;
int main() {
	long long seconds;
	cout << "Enter the number of seconds:";
	cin >> seconds;
	int day = seconds / sec_per_min / min_per_hour / hour_per_day;
	int remain = seconds % (sec_per_min * min_per_hour * hour_per_day);
	int hour = remain / (sec_per_min * min_per_hour);
	remain = seconds % (sec_per_min * min_per_hour);
	int min = remain / sec_per_min;
	remain = remain % sec_per_min;
	/*
	int day, hour, min, remain;
	day = seconds / sec_per_min/ min_per_hour / hour_per_day;
	hour = seconds / sec_per_min / min_per_hour % hour_per_day;
	min = seconds / sec_per_min % min_per_hour;
	remain = seconds % sec_per_min;
	*/
	cout << seconds << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << remain << " seconds";
	return 0;
}