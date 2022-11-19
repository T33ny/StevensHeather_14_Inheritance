//implementation file for Vehicle class
#include "Vehicle.h"
#include <iostream>
using namespace std;


Vehicle::Vehicle()		//Default constructor sets values to null
{
	manufacturer = "";
	year = 0;
}
 
Vehicle::Vehicle(string m, int y)		//Constructor with arguments
{
	manufacturer = m;
	year = y;
}

void Vehicle::setManufacturer(string m)	//manufacturer setter definition
{
	manufacturer = m;
}

void Vehicle::setYear(int y)	//year setter definition
{
	year = y;
}

string Vehicle::getManufacturer() const	//manufacturer getter definition
{
	return manufacturer;
}

int Vehicle::getYear() const	//year getter definition
{
	return year;
}

void Vehicle::displayInfo()	//Displays vehicle info function
{
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear() << endl;

}