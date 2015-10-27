#pragma once

class TransportVehicle
{
protected:
	float powerOutput;
	float topSpeed;
	float acceleration;
	int locomotionMechanics;

public:
	TransportVehicle() {}
	TransportVehicle(float pow, int loco);
	virtual void honk();
		
};