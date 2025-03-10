#ifndef DRIVERFUNCTIONSH
#define DRIVERFUNCTIONSH
#include "Driver.h"
#include "Economy.h"
#include "Basic.h"
#include "Group.h"
#include "Luxury.h"
#include <vector>
#include <iostream>
using namespace std;
class DriverFunctions {
private:

	
public:
	vector<Driver> drivers;
	vector<Economy> econDrivers;
	vector<Basic> basicDrivers;
	vector<Group> groupDrivers;
	vector<Luxury> luxuryDrivers;
	void AddDriver();
	void EditDriver();
	void DeleteDriver();
	int FindDriver();
	void PrintAllDrivers();
	void PrintDriver(int element);
	
	vector<Driver> &GetDrivers();
	
};

#endif
