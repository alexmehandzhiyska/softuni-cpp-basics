#include <iostream>

using namespace std;

int main()
{
	int length, width, height;
	double percent;

	cin >> length >> width >> height >> percent;

	double volume = length * width * height * 0.001;
	double final_volume = volume * (1 - percent * 0.01);

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << final_volume << endl;
	return 0;
}