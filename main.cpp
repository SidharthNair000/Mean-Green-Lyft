/*
Sidharth Nair sidharthnair@my.unt.edu
This program is intended to simulate a Mean Green Lyft and uses 6 different classes and 7 .cpp files including the main.cpp
*/

#include <iostream>
#include <iomanip>
#include "Ride.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include "RideFunctions.h"
#include "PassengerFunctions.h"
#include "DriverFunctions.h"
#include <fstream>
using namespace std;

int main() {
    char option, menuOption, printOption;
    srand(time(0));
    RideFunctions rideFunc;
    DriverFunctions driveFunc;
    PassengerFunctions passFunc;
    int temp = 0;
    
    time_t currentTime = time(0);  // Get current time
    tm* timeInfo = localtime(&currentTime);

    char buffer[80];  // Buffer for storing the  time
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", timeInfo);
    cout << "Current time: " << buffer << endl;
    
    cout << "Sidharth Nair " << endl;
    cout << "CSCE 1040 section 2" << endl;
    cout << "Professor David Keathley\n" << endl;
    //load file
    rideFunc.LoadRides();
    cout << "WELCOME TO THE MEAN GREEN LYFT!" << endl;
    do {
        cout << "\n---------------MENU--------------" << endl;
        cout << "a - add" << endl;
        cout << "e - edit" << endl;
        cout << "d - delete" << endl;
        cout << "s - search/find" << endl;
        cout << "p - print" << endl;
        cout << "q - exit" << endl;
        cout << "---------------------------------" << endl;
        cout << "CHOOSE OPTION: ";
        cin >> option;
        cout << endl;

      
        switch (option) {   //Main switch case for main menu
        case 'a':    //Add function for all entities
            do{
                cout << "\nWhat would you add? \nr - ride\nd - driver\np - passenger\nq - quit and go to main menu\nChoose An Option: ";
                cin >> menuOption;
                cout << endl;
                switch (menuOption) {
                case 'r':
                    rideFunc.AddRide(driveFunc); //adds ride
                    rideFunc.DeleteRideCompleted();
                    break;
                case 'd':
                    driveFunc.AddDriver();
                    break;
                case 'p':
                    passFunc.AddPassenger();
                    break;
                case 'q':
                    break;
                default:
                    cout << "\nTHAT IS NOT AN OPTION!!\nPLEASE SELECT AN OPTION BELOW\n" << endl;
                }

            }while (menuOption != 'q');

            break;
        case 'e':   //edit function for all entities
            do {
                cout << "\nWhat would you edit? \nr - ride\nd - driver\np - passenger\nq - quit and go to main menu\nChoose An Option: ";
                cin >> menuOption;
                cout << endl;
                switch (menuOption) {
                case 'r':
                    rideFunc.EditRide();
                    rideFunc.DeleteRideCompleted();
                    break;
                case 'd':
                    driveFunc.EditDriver();
                    break;
                case 'p':
                    passFunc.EditPassenger();
                    break;
                case 'q':
                    break;
                default:
                    cout << "\nTHAT IS NOT AN OPTION!!\nPLEASE SELECT AN OPTION BELOW\n" << endl;
                }

            } while (menuOption != 'q');
            break;
        case 'd':   //delete function for all entities
            do {
                cout << "\nWhat would you delete? \nr - ride\nd - driver\np - passenger\nq - quit and go to main menu\nChoose An Option: ";
                cin >> menuOption;
                cout << endl;
                switch (menuOption) {
                case 'r':
                    rideFunc.DeleteRide();
                    break;
                case 'd':
                    driveFunc.DeleteDriver();
                    break;
                case 'p':
                    passFunc.DeletePassenger();
                    break;
                case 'q':
                    break;
                default:
                    cout << "\nTHAT IS NOT AN OPTION!!\nPLEASE SELECT AN OPTION BELOW\n" << endl;
                }

            } while (menuOption != 'q');
            break;
        case 's':      //find function for all entities
            do {
                cout << "\nWhat would you like to Find? \nr - ride\nd - driver\np - passenger\nq - quit and go to main menu\nChoose An Option: ";
                cin >> menuOption;
                cout << endl;
                switch (menuOption) {
                case 'r':
                  
                    rideFunc.PrintRide(rideFunc.FindRide());
                    break;
                case 'd':
                    driveFunc.PrintDriver(driveFunc.FindDriver());
                    break;
                case 'p':
                    passFunc.PrintPassenger(passFunc.FindPassenger());
                    break;
                case 'q':
                    break;
                default:
                    cout << "\nTHAT IS NOT AN OPTION!!\nPLEASE SELECT AN OPTION BELOW\n" << endl;
                }

            } while (menuOption != 'q');
            break;
        case 'p':      // print functions for all entities
            do {
                cout << "What would you Like to Print?" << endl;
                cout << "a - Print All Rides" << endl;
                cout << "b - Print All Rides With A Specific Passenger\n";
                cout << "c - Print All Rides With A Specific Driver\n";
                cout << "d - Print Status of All Rides\n";
                cout << "e - Print A Specific Ride\n";
                cout << "f - Print All Drivers\n";
                cout << "g - Print All Passengers\n";
                cout << "q - exit to main menu\n" << endl;
                cout << "Choose An Option: ";
                cin >> printOption;
                switch (printOption) {
                case 'a': //Print All Rides
                    rideFunc.PrintRides();
                    break;
                case 'b': //Print All rides with a specific passenger
                    rideFunc.PrintRidesPassenger(passFunc.FindPassenger());
                    break;
                case'c': //Print all rides with a specific driver
                    rideFunc.PrintRidesDriver(driveFunc.FindDriver());
                    break;
                case'd': //print status of all rides
                    rideFunc.PrintAllRidesStatus();
                    break;
                case'e': // print a specific ride
                    rideFunc.PrintRide(rideFunc.FindRide());
                    break;
                case'f': //print all drivers
                    driveFunc.PrintAllDrivers();
                    break;
                case'g': //print all passengers
                    passFunc.PrintAllPassengers();
                    break;
                case'q': //quit to main menu, exits out the nested switch case
                    break;
                default:
                    cout << "ERROR, THAT IS NOT AN OPTION! PLEASE TYPE AN OPTION DISPLAYED\n" << endl;
                }

            } while (printOption != 'q');
            

            break;
        case 'q':       //quits from do while loop and exits program
            break;
        default:
            cout << "ERROR, THAT IS NOT A OPTION!!!\n" << endl;
            break;
        }
    }while(option != 'q');
    cout << "THANK YOU FOR CHOOSING MEAN GREEN LYFT!!!";
    //save file
    rideFunc.StoreRides();

        return 0;
    }


