#include "Basic.h"

Basic::Basic() {
	numberOfSeats = 1;
	cargoCapacity = 0;
}
Basic::Basic(int seats, int cargo) {
	numberOfSeats = seats;
	cargoCapacity = cargo;
}
void Basic::SetNumOfSeats(int seats) {
	numberOfSeats = seats;
}
void Basic::SetCargoCapacity(int cargo) {
	cargoCapacity = cargo;
}
int Basic::GetNumOfSeats() {
	return numberOfSeats;
}
int Basic::GetCargoCapacity() {
	return cargoCapacity;
}
