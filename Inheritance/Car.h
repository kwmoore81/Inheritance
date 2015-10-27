#pragma once
#include <iostream>
#include "TransportVehicle.h"


class Car : public TransportVehicle
{	
protected:
	int doors;
	int wheels;

public:
	Car(float pow, int loco) : TransportVehicle(pow, loco)
	{
		 
	}
	void Car::honk();


};