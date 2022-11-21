//implementation file for Truck class
#include "Vehicle.h"
#include "Truck.h"
#include<iostream>
using namespace std;

Truck::Truck() :Vehicle()		//Default constructor
{
	tow = 0;
}

Truck::Truck(string m, int y, int t) :Vehicle(m, y)	//constructor with arguments
{
	tow = t;
}

void Truck::setTow(int t)	//sets value of towing capacity
{
	tow = t;
}

int Truck::getTow() const	//gets value of towing capacity
{
	return tow;
}

void Truck::displayInfo()	//displays truck info
{
	Vehicle::displayInfo();	//calls vehicle displayInfo

	cout << "Towing Capacity: " << getTow() << endl;	//adds truck info to vehicle display
}