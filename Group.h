#ifndef GROUPH
#define GROUPH
#include "Driver.h"
#include <iostream>
using namespace std;

class Group : public Driver {
private:
	int numberOfSeats;
	int cargoCapacity;

public:
	Group();
	Group(int seats, int cargo);
	void SetNumOfSeats(int numOfSeats);
	void SetCargoCapacity(int cargo);
	int GetNumOfSeats();
	int GetCargoCapacity();

};

#endif
