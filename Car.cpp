//implementation file for Car class
#include "Vehicle.h"
#include "Car.h"
#include<iostream>
using namespace std;

Car::Car():Vehicle()		//Default constructor
{
	doors = 0;
}

Car::Car(string m, int y, int d):Vehicle(m,y)	//constructor with arguments
{
	doors = d;
}

void Car::setDoors(int d)	//sets number of doors value
{
	doors = d;
}

int Car::getDoors() const	//gets number of doors value
{
	return doors;
}

void Car::displayInfo()	//displays car info
{
	Vehicle::displayInfo();	//calls vehicle displayInfo

	cout << "Doors: " << getDoors() << endl;	//adds car info to vehicle display
}