#include <iostream>

using namespace std;

int main()
{
	int days;
	cin >> days;

	int confectionersCount;
	cin >> confectionersCount;

	int cakesCount;
	cin >> cakesCount;

	int wafflesCount;
	cin >> wafflesCount;

	int pancakesCount;
	cin >> pancakesCount;

	double cakePrice = 45;
	double wafflePrice = 5.8;
	double pancakePrice = 3.2;

	double pricePerDay = (cakesCount * cakePrice + wafflesCount * wafflePrice + pancakesCount * pancakePrice) * days;
	double totalPrice = pricePerDay * confectionersCount;

	double finalSum = totalPrice * 7 / 8;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << finalSum << endl;
	return 0;
}