
#ifndef PASSENGERH
#define PASSENGERH

#include <iostream>
#include <string>
using namespace std;

class Passenger {
private:
    string passengerName;
    int passengerId;
    string paymentType;
    bool handicap;
    float ratingRequired;
    bool hasPets;
public:
    Passenger();
    Passenger(string name, int id, string pay, bool handicap, float rating, bool hasPets);
    //Sets
    void SetName(string name);
    void SetId(int id);
    void SetPay(string pay);
    void SetHandicap(bool handicap);
    void SetRating(float rate);
    void SetHasPets(bool pets);
    //Gets
    string GetName();
    int GetId();
    string GetPay();
    bool GetHandicap();
    float GetRating();
    bool GetHasPets();
};


#endif
