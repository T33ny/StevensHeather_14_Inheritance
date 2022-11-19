#pragma once
#ifndef VEHICLE_H
#define  VEHICLE_H

#include<string>
using namespace std;

//Vehicle class declaration

class Vehicle 
{
	private:
		string manufacturer;	//holds manufacturer name
		int year;				//holds year vehicle was built
	public:
		Vehicle();				//default constructor
		Vehicle(string m, int y);	//constructor with arguments

		void setManufacturer(string m);

		void setYear(int y);

		string getManufacturer() const;	//manufacturer getter

		int getYear() const;	//year getter

		void displayInfo();

};


#endif

