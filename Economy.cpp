#include "Economy.h"

Economy::Economy() {
	numberOfSeats = 1;
	cargoCapacity = 0;
}
Economy::Economy(int seats, int cargo) {
	numberOfSeats = seats;
	cargoCapacity = cargo;
}
void Economy::SetNumOfSeats(int seats) {
	numberOfSeats = seats;
}
void Economy::SetCargoCapacity(int cargo) {
	cargoCapacity = cargo;
}
int Economy::GetNumOfSeats() {
	return numberOfSeats;
}
int Economy::GetCargoCapacity() {
	return cargoCapacity;
}
