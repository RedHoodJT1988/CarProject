#include <iostream>
#include <string>
#include "Car.h"
#include <memory>
using namespace std;

int main()
{
	auto myCarPtr = make_unique<Car>("Red", 4);

	cout << myCarPtr->getColor() << endl;
	cout << myCarPtr->getNumDoors() << endl;

	return 0;
}