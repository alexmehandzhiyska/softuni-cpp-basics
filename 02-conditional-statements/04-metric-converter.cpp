#include <iostream>

using namespace std;

int main()
{
	double num;
	string initialMetric, finalMetric;
	cin >> num >> initialMetric >> finalMetric;

	if (initialMetric == "mm")
	{
		num /= 1000;
	}
	else if (initialMetric == "cm")
	{
		num /= 100;
	}

	if (finalMetric == "mm")
	{
		num *= 1000;
	}
	else if (finalMetric == "cm")
	{
		num *= 100;
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << num << endl;
	return 0;
}