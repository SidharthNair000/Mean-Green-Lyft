#ifndef BASICH
#define BASICH
#include "Driver.h"
#include <iostream>
using namespace std;

class Basic : public Driver {
private:
	int numberOfSeats;
	int cargoCapacity;

public:
	Basic();
	Basic(int seats, int cargo);
	void SetNumOfSeats(int numOfSeats);
	void SetCargoCapacity(int cargo);
	int GetNumOfSeats();
	int GetCargoCapacity();

};

#endif
