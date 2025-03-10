
#ifndef RIDEFUNCTIONSH
#define RIDEFUNCTIONSH
#include "Ride.h"
#include "Passenger.h"
#include "Driver.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "DriverFunctions.h"
#include "PassengerFunctions.h"

using namespace std;

class RideFunctions {
private:
	vector<Ride> rides;	
	vector<Driver> drivers;
	DriverFunctions driverFunc;
	PassengerFunctions passenger;
	Ride ride;
	Driver dr;
	Ride assign;
	
	



public:
	
	void AddRide(DriverFunctions& DriverF);
	void EditRide();
	void DeleteRide();
	int FindRide();
	void PrintRides();
	void PrintRidesPassenger(int i);
	void PrintRidesDriver(int i);
	void PrintAllRidesStatus();
	void PrintRide(int element);
	void DeleteRideCompleted();
	void UpdateRideStatus();
	void StoreRides();
	void LoadRides();
	int AssignDriver(int rideid, int driverid);
	void AssignPassenger(int rideid, int passid);
};
#endif