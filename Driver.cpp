#include "Driver.h"
Driver::Driver() {
    driverId = 0;
    driverName = "none";
    capacity = 0;
    handicap = false;
    carType = "none";
    rating = 0;
    available = false;
    petsAllowed = false;
    notes = "none";
}
Driver::Driver(int id, string name, int cap, bool hand, string type, float rate, bool avail, bool pets, string note) {
    driverId = id;
    driverName = name;
    capacity = cap;
    handicap = hand;
    carType = type;
    rating = rate;
    available = avail;
    petsAllowed = pets;
    notes = note;
}
//Sets
void Driver::SetDriverId(int id){
    driverId = id;
}
void Driver::SetDriverName(string name) {
    driverName = name;
}
void Driver::SetCapacity(int cap) {
    capacity = cap;
}
void Driver::SetHandicap(bool hand) {
    handicap = hand;
}
void Driver::SetCarType(string type) {
    carType = type;
}
void Driver::SetRating(float rate) {
    rating = rate;
}
void Driver::SetAvailable(bool avail) {
    available = avail;
}
void Driver::SetPetsAllowed(bool pets) {
    petsAllowed = pets;
}
void Driver::SetNotes(string note) {
    notes = note;
}
//Gets
int const Driver::GetDriverId() {
    return driverId;
}
string Driver::GetDriverName() {
    return driverName;
}
int Driver::GetCapacity() {
    return capacity;
}
bool Driver::GetHandicap() {
    return handicap;
}
string Driver::GetCarType() {
    return carType;
}
float Driver::GetRating() {
    return rating;
}
bool Driver::GetAvailable() {
    return available;
}
bool Driver::GetPetsAllowed() {
    return petsAllowed;
}
string Driver::GetNotes() {
    return notes;
}
