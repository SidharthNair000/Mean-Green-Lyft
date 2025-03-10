#include "Ride.h"

Ride::Ride() {
    rideId = 0;
    pickupLocation = "none";
    pickupTime = "none";
    dropoffLocation = "none";
    dropoffTime = "none";
    sizeOfParty = 0;
    includesPets = false;
    status = "no status";
    customerRating = 0;
}
Ride::Ride(int id, string pickupLoc, string pTime, string dropoffLoc, string dTime, int party, bool pets, string stat, float rating) {
    rideId = id;
    pickupLocation = pickupLoc;
    pickupTime = pTime;
    dropoffLocation = dropoffLoc;
    dropoffTime = dTime;
    sizeOfParty = party;
    includesPets = pets;
    status = stat;
    customerRating = rating;

}
//Sets
void Ride::SetRideId(int id) {
    rideId = id;
}
void Ride::SetPickupLocation(string pLoc) {
    pickupLocation = pLoc;
}
void Ride::SetPickupTime(string pTime) {
    pickupTime = pTime;
}
void Ride::SetDropoffLocation(string dLoc) {
    dropoffLocation = dLoc;
}
void Ride::SetDropoffTime(string dTime) {
    dropoffTime = dTime;
}
void Ride::SetSizeOfParty(int party) {
    sizeOfParty = party;
}
void Ride::SetIncludesPets(bool pets) {
    includesPets = pets;
}
void Ride::SetStatus(string stat) {
    status = stat;
}
void Ride::SetCustomerRating(float rate) {
    customerRating = rate;
}
//Gets
int Ride::GetRideId() {
    return rideId;
}
string Ride::GetPickupLocation() {
    return pickupLocation;
}
string Ride::GetPickupTime() {
    return pickupTime;
}
string Ride::GetDropoffLocation() {
    return dropoffLocation;
}
string Ride::GetDropoffTime() {
    return dropoffTime;
}
int Ride::GetSizeOfParty() {
    return sizeOfParty;
}
bool Ride::GetIncludesPets() {
    return includesPets;
}
string Ride::GetStatus() {
    return status;
}
float Ride::GetCustomerRating() {
    return customerRating;
}


