#pragma once
#ifndef CAR_H
#define  CAR_H
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle
{
	private:
		int doors;

	public:
		Car();	//Default constructor
		Car(string m, int y, int d);	//constructor with arguments

		void setDoors(int d);		//doors setter

		int getDoors() const;		//doors getter

		void displayInfo();		//displays car info
};

#endif