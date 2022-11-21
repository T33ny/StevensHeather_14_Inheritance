#pragma once
#ifndef TRUCK_H
#define  TRUCK_H
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
private:
	int tow;

public:
	Truck();	//Default constructor
	Truck(string m, int y, int t);	//constructor with arguments

	void setTow(int t);		//tow setter

	int getTow() const;		//tow getter

	void displayInfo();		//displays truck info
};

#endif