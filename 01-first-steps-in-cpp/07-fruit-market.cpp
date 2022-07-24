#include <iostream>

using namespace std;

int main()
{
	double strawberryPrice, bananaKg, orangeKg, raspberryKg, strawberryKg;
	cin >> strawberryPrice >> bananaKg >> orangeKg >> raspberryKg >> strawberryKg;

	double raspberryPrice = strawberryPrice * 0.5;
	double orangePrice = raspberryPrice * 0.6;
	double bananaPrice = raspberryPrice * 0.2;
	
	double totalPrice = strawberryKg * strawberryPrice + raspberryKg * raspberryPrice + bananaKg * bananaPrice + orangeKg * orangePrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPrice << endl;
	return 0;
}
