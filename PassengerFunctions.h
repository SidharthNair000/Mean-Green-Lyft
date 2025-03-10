
#ifndef PASSENGERFUNCTIONSH
#define PASSENGERFUNCTIONSH
#include <iostream>
#include <vector>
#include "Passenger.h"
using namespace std;

class PassengerFunctions {
private:
	vector<Passenger> passengers;
public:
	void AddPassenger();
	void EditPassenger();
	void DeletePassenger();
	void PrintAllPassengers();
	int FindPassenger();
	void PrintPassenger(int element);
	
};
#endif
