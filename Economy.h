#ifndef ECONOMYH
#define ECONOMYH
#include "Driver.h"
#include <iostream>
using namespace std;

class Economy : public Driver {
private:
	int numberOfSeats;
	int cargoCapacity;

public:
	Economy();
	Economy(int seats, int cargo);
	void SetNumOfSeats(int numOfSeats);
	void SetCargoCapacity(int cargo);
	int GetNumOfSeats();
	int GetCargoCapacity();

};

#endif
