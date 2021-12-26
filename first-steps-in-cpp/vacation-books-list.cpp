#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int pageCount;
	cin >> pageCount;

	int pagesPerHour;
	cin >> pagesPerHour;

	int days;
	cin >> days;

	int totalHours = pageCount / pagesPerHour;
	int hoursPerDay = totalHours / days;

	cout << hoursPerDay << endl;
	return 0;
}