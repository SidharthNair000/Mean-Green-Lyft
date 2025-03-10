#ifndef LUXURYH
#define LUXURYH
#include "Driver.h"
#include <iostream>
using namespace std;

class Luxury : public Driver {
private:
	int numberOfSeats;
	int cargoCapacity;
	string amenities;

public:
	Luxury();
	Luxury(int seats, int cargo, string amenities);
	void SetNumOfSeats(int numOfSeats);
	void SetCargoCapacity(int cargo);
	int GetNumOfSeats();
	int GetCargoCapacity();
	void SetAmenities(string amenities);
	string GetAmenities();

};

#endif
