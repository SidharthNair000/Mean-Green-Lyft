MeanGreenLyft: Driver.o Economy.o Basic.o Group.o Luxury.o Passenger.o Ride.o RideFunctions.o DriverFunctions.o PassengerFunctions.o main.o
	g++ -o MeanGreenLyft Driver.o Economy.o Basic.o Group.o Luxury.o DriverFunctions.o Passenger.o PassengerFunctions.o Ride.o RideFunctions.o main.o

main.o: main.cpp Passenger.h Ride.h Driver.h Economy.h Basic.h Group.h Luxury.h RideFunctions.h PassengerFunctions.h DriverFunctions.h
	g++ -c main.cpp
Passenger.o: Passenger.cpp Passenger.h 
	g++ -c Passenger.cpp

Driver.o: Driver.cpp Driver.h
	g++ -c Driver.cpp
Economy.o: Economy.cpp Economy.h
	g++ -c Economy.cpp
Basic.o: Basic.cpp Basic.h
	g++ -c Basic.cpp
Group.o: Group.cpp Group.h
	g++ -c Group.cpp
Luxury.o: Luxury.cpp Luxury.h
	g++ -c Luxury.cpp


Ride.o: Ride.cpp Ride.h
	g++ -c Ride.cpp
PassengerFunctions.o: PassengerFunctions.cpp Passenger.h PassengerFunctions.h
	g++ -c PassengerFunctions.cpp

RideFunctions.o: RideFunctions.cpp Ride.h RideFunctions.h 
	g++ -c RideFunctions.cpp

DriverFunctions.o: DriverFunctions.cpp Driver.h DriverFunctions.h
	g++ -c DriverFunctions.cpp
