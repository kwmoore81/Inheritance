#include "TransportVehicle.h"
#include <iostream>

TransportVehicle::TransportVehicle(float pow, int loco)
{
	powerOutput = pow;
	locomotionMechanics = loco;
	topSpeed = powerOutput * locomotionMechanics;
	acceleration = locomotionMechanics / topSpeed;
}

void TransportVehicle::honk()
{
	std::cout << "HONK!" << std::endl;
}
