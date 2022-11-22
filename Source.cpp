//Heather Stevens
//CIS 1202
//Week 14 Inheritance
//due 11/27/2022

#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
using namespace std;

int main()
{
	string m;	//stores manufacturer
	int y;		//stores year built
	int d;		//stores number of doors on cars
	int t;		//stores towing capacity on trucks
	
	cout << "Vehicle Program\n\n";		
	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";	//prompts user for manufacturer
	getline(cin, m);		//manufacturer stored in m
	cout << "Enter the year built: ";	//prompts user for year built
	cin >> y;							//year built stored in y

	Vehicle v(m, y);	//creates vehicle object v with manufacturer and year built
	v.displayInfo();		//displays Vehicle v info 
	cout << endl << endl;

	cout << "Car:\n";
	cout << "Enter the manufacturer: ";	//prompts user for manufacturer
	cin.clear();		//clears and ignores the previous cin
	cin.ignore();
	getline(cin, m);		//manufacturer stored in m
	cout << "Enter the year built: ";	//prompts user for year built
	cin >> y;							//year built stored in y
	cout << "Enter the number of doors: ";	//prompt user for # of doors
	cin >> d;			//stores # of doors

	Car c(m, y, d);		//creates Car c with manufacturer, year, and # of doors
	c.displayInfo();	//displays car info
	cout << endl << endl;

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";	//prompts user for manufacturer
	cin.clear();		//clears and ignores the previous cin
	cin.ignore();
	getline(cin, m);		//manufacturer stored in m
	cout << "Enter the year built: ";	//prompts user for year built
	cin >> y;							//year built stored in y
	cout << "Enter the towing capacity: ";	//prompts user for towing capacity
	cin >> t;					//stores towing capacity

	Truck trck(m, y, t);	//creates Truck trck with manufacturer, year, and towing capacity
	trck.displayInfo();		//displays truck info
	cout << endl << endl;


	system("pause");
	return 0;
}
