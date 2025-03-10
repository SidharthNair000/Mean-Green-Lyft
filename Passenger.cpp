#include "Passenger.h"
#include <iostream>
#include <string>
using namespace std;
Passenger::Passenger() {
    passengerName = "none";
    passengerId = 0;
    paymentType = "none";
    handicap = false;
    ratingRequired = 0;
    hasPets = false;
}
Passenger::Passenger(string name, int id, string pay, bool hand, float rating, bool pets) {
    passengerName = name;
    passengerId = id;
    paymentType = pay;
    handicap = hand;
    ratingRequired = rating;
    hasPets = pets;
}
void Passenger::SetName(string name) {
    passengerName = name;
}
void Passenger::SetId(int id) {
    passengerId = id;
}
void Passenger::SetPay(string pay) {
    paymentType = pay;
}
void Passenger::SetHandicap(bool hand) {
    handicap = hand;
}
void Passenger::SetRating(float rate) {
    ratingRequired = rate;
}
void Passenger::SetHasPets(bool pets) {
    hasPets = pets;
}
string Passenger::GetName() {
    return passengerName;
}
int Passenger::GetId() {
    return passengerId;
}
string Passenger::GetPay() {
    return paymentType;
}
bool Passenger::GetHandicap() {
    return handicap;
}
float Passenger::GetRating() {
    return ratingRequired;
}
bool Passenger::GetHasPets() {
    return hasPets;
}
