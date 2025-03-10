
#ifndef DRIVERH
#define DRIVERH
#include <iostream>
#include <string>
using namespace std;

class Driver {
private:
    int driverId;
    string driverName;
    int capacity;
    bool handicap;
    string carType;
    float rating;
    bool available;
    bool petsAllowed;
    string notes;

public:
    //Constructors
    Driver();
    Driver(int id, string name, int cap, bool hand, string type, float rate, bool available, bool pets, string notes);
    //Set Functions
    void SetDriverId(int driverID);
    void SetDriverName(string driverName);
    void SetCapacity(int capacity);
    void SetHandicap(bool handicap);
    void SetCarType(string carType);
    void SetRating(float rating);
    void SetAvailable(bool available);
    void SetPetsAllowed(bool petsAllowed);
    void SetNotes(string notes);
    //Get Functions
    int const GetDriverId();
    string GetDriverName();
    int GetCapacity();
    bool GetHandicap();
    string GetCarType();
    float GetRating();
    bool GetAvailable();
    bool GetPetsAllowed();
    string GetNotes();
};
#endif
