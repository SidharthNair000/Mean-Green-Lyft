#ifndef RIDEH
#define RIDEH
#include <iostream>
#include <string>
#include "Passenger.h"
#include "Driver.h"
#include "DriverFunctions.h"
using namespace std;

class Ride {
private:
    int rideId;
    string pickupLocation;
    string pickupTime;
    string dropoffLocation;
    string dropoffTime;
    int sizeOfParty;
    bool includesPets;
    string status;
    float customerRating;
    int assignedDriverid;
    DriverFunctions driverAssigned;
    //Driver* pointerObj;
public:
    Ride();
    Ride(int id, string pickupLoc, string pickupTime, string dropoffLoc, string dropoffTime, int party, bool pets, string status, float rating);
    //Sets
    void SetRideId(int id);
    void SetPickupLocation(string loc);
    void SetPickupTime(string time);
    void SetDropoffLocation(string dropLoc);
    void SetDropoffTime(string dropTime);
    void SetSizeOfParty(int party);
    void SetIncludesPets(bool includesPets);
    void SetStatus(string status);
    void SetCustomerRating(float rating);
    //Gets
    int GetRideId();
    string GetPickupLocation();
    string GetPickupTime();
    string GetDropoffLocation();
    string GetDropoffTime();
    int GetSizeOfParty();
    bool GetIncludesPets();
    string GetStatus();
    float GetCustomerRating();

    void SetDriverAssigned(DriverFunctions assign);
    DriverFunctions GetDriverAssigned();
    Driver *assignedDriver;
};

#endif

