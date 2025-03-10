#include "Group.h"

Group::Group() {
	numberOfSeats = 1;
	cargoCapacity = 0;
}
Group::Group(int seats, int cargo) {
	numberOfSeats = seats;
	cargoCapacity = cargo;
}
void Group::SetNumOfSeats(int seats) {
	numberOfSeats = seats;
}
void Group::SetCargoCapacity(int cargo) {
	cargoCapacity = cargo;
}
int Group::GetNumOfSeats() {
	return numberOfSeats;
}
int Group::GetCargoCapacity() {
	return cargoCapacity;
}
