#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string color, int numDoors)
{
	this->color = color;
	this->numDoors = numDoors;
}

string Car::getColor() const
{
	return color;
}

int Car::getNumDoors() const
{
	return numDoors;
}