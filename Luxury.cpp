#include "Luxury.h"

Luxury::Luxury() {
	numberOfSeats = 1;
	cargoCapacity = 0;
	amenities = "none";
}
Luxury::Luxury(int seats, int cargo ,string a) {
	numberOfSeats = seats;
	cargoCapacity = cargo;
	amenities = a;
}
void Luxury::SetNumOfSeats(int seats) {
	numberOfSeats = seats;
}
void Luxury::SetCargoCapacity(int cargo) {
	cargoCapacity = cargo;
}
int Luxury::GetNumOfSeats() {
	return numberOfSeats;
}
int Luxury::GetCargoCapacity() {
	return cargoCapacity;
}
void Luxury::SetAmenities(string amen) {
	amenities = amen;
}
string Luxury::GetAmenities() {
	return amenities;
}
