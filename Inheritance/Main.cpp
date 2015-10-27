#include <iostream>
#include "TransportVehicle.h"
#include "Car.h"
#include "Plane.h"
#include "Bicycle.h"


void main()
{
	TransportVehicle Bob;
	Car LeBob;

	

	TransportVehicle *ptr = &LeBob;

	TransportVehicle *vehicles[3];

	vehicles[0] = new Car;
	vehicles[1] = new Plane;
	vehicles[2] = new Bicycle;
	Bob.honk();
	LeBob.honk();

	system("Pause");

	

}