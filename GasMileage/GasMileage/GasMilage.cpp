//written by Ryley Danielson

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	// variables
	double galoGas = 0;
	double milesDriven = 0;
	double gasMileage = 0;

	//input
	cout << "What is the maximum capacity of your gas tank in gallons: ";
	cout << setprecision(2) << fixed;
	cin >> galoGas;
	cout << "How many miles can you drive on a full tank of gas : ";
	cin >> milesDriven;

	//processing
	gasMileage = (milesDriven / galoGas);

	//output
	cout << "The gas mileage of your car is: " << gasMileage << " mpg." << endl;
	cout << "Press ENTER to continue...";

	cin.get();
	cin.get();

	return 0;
}

