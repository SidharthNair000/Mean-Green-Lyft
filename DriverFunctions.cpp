#include "DriverFunctions.h"

void DriverFunctions::AddDriver() {
    char boolean, carClass;
    Driver newDriver;
    Economy econDriver;
    Basic basicDriver;
    Group groupDriver;
    Luxury luxuryDriver;
    string name, carType, notes, amenities;
    bool includesPets, available;
    int sizeOfParty, id, numOfSeats, cargoCapacity;
    int x = 0;
    float rating;
    srand(time(0));

    cout << "------------Please Enter the following information--------------\n" << endl;
    do {
        cout << "What Class Is the Driver?\n" << "E - Economy\nB - Basic\nG - Group\nL - Luxury\nClass: ";
        cin >> carClass;
        switch (carClass) {
        case 'E':
            // Economy
            id = 100000 + (rand() % 1000000);
            cout << "Driver ID: " << id << endl;
            econDriver.SetDriverId(id); //Sets id

            cout << "Driver Name: ";
            cin.ignore();
            getline(cin, name);
            econDriver.SetDriverName(name);  //Sets name

            cout << "Type of Car: ";
            getline(cin, carType);
            econDriver.SetCarType(carType);  //Sets car type

            cout << "Rating (0-5): ";
            cin >> rating;
            if (rating < 0 || rating >5) {
                cout << "ERROR, THAT IS NOT IN THE DOMAIN OF THE RATING (1-5)\n DEFAULTING RATING TO ZERO!!!\n" << endl;
            }
            else {
                econDriver.SetRating(rating);    //Sets Rating
            }

            cout << "Total Capacity in Car: ";
            cin >> sizeOfParty;
            econDriver.SetCapacity(sizeOfParty); //Sets total capacity of drivers car

            cout << "Does The Driver Allow Pets (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                econDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;
                econDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cout << "Is the Driver Available (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                available = true;
                econDriver.SetAvailable(available); //Sets if driver is available (yes)
            }
            else if (boolean == 'n') {
                available = false;
                econDriver.SetAvailable(available); //Sets if driver is available (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }


            cout << "Does The Driver accomodate for handicap persons (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
               econDriver.SetHandicap(includesPets);   //Sets if the accomodate for handicap persons (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;                   //Sets if the accomodate for handicap persons (no)
                econDriver.SetHandicap(includesPets);
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cin.ignore();
            cout << "Notes: ";
            getline(cin, notes);
            econDriver.SetNotes(notes);  //Sets notes about driver

            cout << "Number of Passenger Seats (1 or 2) : ";
            cin >> numOfSeats;
            if (numOfSeats < 1 || numOfSeats > 2) {
                cout << "Not in the range of Economy Class! Defaulting to one";
                numOfSeats = 1;
            }
            econDriver.SetNumOfSeats(numOfSeats);

            cout << "Cargo Capacity: ";
            cin >> cargoCapacity;
            econDriver.SetCargoCapacity(cargoCapacity);

            econDrivers.push_back(econDriver); //Adds Driver
            cout << "\nSUCCESSFULLY ADDED DRIVER!!!\n" << endl;

            if (econDrivers.empty()) {
                cout << "THIS VECTOR IS EMPTY!!!!!!!!!!!!!!" << endl;
            }
            //Economy
            x = 1;
            break;
        case 'B':
            //Basic
            id = 100000 + (rand() % 1000000);
            cout << "Driver ID: " << id << endl;
            basicDriver.SetDriverId(id); //Sets id

            cout << "Driver Name: ";
            cin.ignore();
            getline(cin, name);
            basicDriver.SetDriverName(name);  //Sets name

            cout << "Type of Car: ";
            getline(cin, carType);
            basicDriver.SetCarType(carType);  //Sets car type

            cout << "Rating (0-5): ";
            cin >> rating;
            if (rating < 0 || rating >5) {
                cout << "ERROR, THAT IS NOT IN THE DOMAIN OF THE RATING (1-5)\n DEFAULTING RATING TO ZERO!!!\n" << endl;
            }
            else {
                basicDriver.SetRating(rating);    //Sets Rating
            }

            cout << "Total Capacity in Car: ";
            cin >> sizeOfParty;
            basicDriver.SetCapacity(sizeOfParty); //Sets total capacity of drivers car

            cout << "Does The Driver Allow Pets (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                basicDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;
                basicDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cout << "Is the Driver Available (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                available = true;
                basicDriver.SetAvailable(available); //Sets if driver is available (yes)
            }
            else if (boolean == 'n') {
                available = false;
                basicDriver.SetAvailable(available); //Sets if driver is available (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }


            cout << "Does The Driver accomodate for handicap persons (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                basicDriver.SetHandicap(includesPets);   //Sets if the accomodate for handicap persons (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;                   //Sets if the accomodate for handicap persons (no)
                basicDriver.SetHandicap(includesPets);
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cin.ignore();
            cout << "Notes: ";
            getline(cin, notes);
            basicDriver.SetNotes(notes);  //Sets notes about driver

            cout << "Number of Passenger Seats (2-4) : ";
            cin >> numOfSeats;
            if (numOfSeats < 2 || numOfSeats > 4) {
                cout << "Not in the range of Basic Class! Defaulting to two";
                numOfSeats = 2;
            }
            basicDriver.SetNumOfSeats(numOfSeats);

            cout << "Cargo Capacity: ";
            cin >> cargoCapacity;
            basicDriver.SetCargoCapacity(cargoCapacity);

            basicDrivers.push_back(basicDriver); //Adds Driver
            cout << "\nSUCCESSFULLY ADDED DRIVER!!!\n" << endl;

            if (basicDrivers.empty()) {
                cout << "THIS VECTOR IS EMPTY!!!!!!!!!!!!!!" << endl;
            }
            //basic
            x = 1;
            break;
        case 'G':
            //Group
            id = 100000 + (rand() % 1000000);
            cout << "Driver ID: " << id << endl;
            groupDriver.SetDriverId(id); //Sets id

            cout << "Driver Name: ";
            cin.ignore();
            getline(cin, name);
            groupDriver.SetDriverName(name);  //Sets name

            cout << "Type of Car: ";
            getline(cin, carType);
            groupDriver.SetCarType(carType);  //Sets car type

            cout << "Rating (0-5): ";
            cin >> rating;
            if (rating < 0 || rating >5) {
                cout << "ERROR, THAT IS NOT IN THE DOMAIN OF THE RATING (1-5)\n DEFAULTING RATING TO ZERO!!!\n" << endl;
            }
            else {
                groupDriver.SetRating(rating);    //Sets Rating
            }

            cout << "Total Capacity in Car: ";
            cin >> sizeOfParty;
            groupDriver.SetCapacity(sizeOfParty); //Sets total capacity of drivers car

            cout << "Does The Driver Allow Pets (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                groupDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;
                groupDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cout << "Is the Driver Available (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                available = true;
                groupDriver.SetAvailable(available); //Sets if driver is available (yes)
            }
            else if (boolean == 'n') {
                available = false;
                groupDriver.SetAvailable(available); //Sets if driver is available (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }


            cout << "Does The Driver accomodate for handicap persons (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                groupDriver.SetHandicap(includesPets);   //Sets if the accomodate for handicap persons (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;                   //Sets if the accomodate for handicap persons (no)
                groupDriver.SetHandicap(includesPets);
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cin.ignore();
            cout << "Notes: ";
            getline(cin, notes);
            groupDriver.SetNotes(notes);  //Sets notes about driver

            cout << "Number of Passenger Seats (5-7) : ";
            cin >> numOfSeats;
            if (numOfSeats < 5 || numOfSeats > 7) {
                cout << "Not in the range of Group Class! Defaulting to five";
                numOfSeats = 5;
            }
            groupDriver.SetNumOfSeats(numOfSeats);

            cout << "Cargo Capacity: ";
            cin >> cargoCapacity;
            groupDriver.SetCargoCapacity(cargoCapacity);

            groupDrivers.push_back(groupDriver); //Adds Driver
            cout << "\nSUCCESSFULLY ADDED DRIVER!!!\n" << endl;

            if (groupDrivers.empty()) {
                cout << "THIS VECTOR IS EMPTY!!!!!!!!!!!!!!" << endl;
            }
            //Group
            x = 1;
            break;
        case 'L': //Luxury
            id = 100000 + (rand() % 1000000);
            cout << "Driver ID: " << id << endl;
            luxuryDriver.SetDriverId(id); //Sets id

            cout << "Driver Name: ";
            cin.ignore();
            getline(cin, name);
            luxuryDriver.SetDriverName(name);  //Sets name

            cout << "Type of Car: ";
            getline(cin, carType);
            luxuryDriver.SetCarType(carType);  //Sets car type

            cout << "Rating (0-5): ";
            cin >> rating;
            if (rating < 0 || rating >5) {
                cout << "ERROR, THAT IS NOT IN THE DOMAIN OF THE RATING (1-5)\n DEFAULTING RATING TO ZERO!!!\n" << endl;
            }
            else {
                luxuryDriver.SetRating(rating);    //Sets Rating
            }

            cout << "Total Capacity in Car: ";
            cin >> sizeOfParty;
            luxuryDriver.SetCapacity(sizeOfParty); //Sets total capacity of drivers car

            cout << "Does The Driver Allow Pets (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                luxuryDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;
                luxuryDriver.SetPetsAllowed(includesPets); //Sets if pets are allowed (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cout << "Is the Driver Available (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                available = true;
                luxuryDriver.SetAvailable(available); //Sets if driver is available (yes)
            }
            else if (boolean == 'n') {
                available = false;
                luxuryDriver.SetAvailable(available); //Sets if driver is available (no)
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }


            cout << "Does The Driver accomodate for handicap persons (y/n): ";
            cin >> boolean;
            if (boolean == 'y') {
                includesPets = true;
                luxuryDriver.SetHandicap(includesPets);   //Sets if the accomodate for handicap persons (yes)
            }
            else if (boolean == 'n') {
                includesPets = false;                   //Sets if the accomodate for handicap persons (no)
                luxuryDriver.SetHandicap(includesPets);
            }
            else {
                cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
            }

            cin.ignore();
            cout << "Notes: ";
            getline(cin, notes);
            luxuryDriver.SetNotes(notes);  //Sets notes about driver

            cout << "Number of Passenger Seats (1 or 2) : ";
            cin >> numOfSeats;
            if (numOfSeats < 1 || numOfSeats > 2) {
                cout << "Not in the range of Luxury Class! Defaulting to 1";
                numOfSeats = 1;
            }
            luxuryDriver.SetNumOfSeats(numOfSeats);

            cout << "Cargo Capacity: ";
            cin >> cargoCapacity;
            luxuryDriver.SetCargoCapacity(cargoCapacity);

            cin.ignore();
            cout << "Amenities: ";
            getline(cin, amenities);
            luxuryDriver.SetAmenities(amenities);

            luxuryDrivers.push_back(luxuryDriver); //Adds Driver
            cout << "\nSUCCESSFULLY ADDED DRIVER!!!\n" << endl;

            if (luxuryDrivers.empty()) {
                cout << "THIS VECTOR IS EMPTY!!!!!!!!!!!!!!" << endl;
            }
            x = 1;
            break;
        default:
            cout << "\nPlease select the letter corresponding with the listed options\n" << endl;
        }
    }while (x!=1);
   
}
void DriverFunctions::EditDriver() {
    
    int element = FindDriver();
    string p;
    if (element == -1) {
        cout << "COULD NOT EDIT DRIVER" << endl;
    }
    else {
        char option;
        cout << "What would you like to Edit?" << endl;
        cout << "a - Driver Id\nb - Driver Name\nc - Capacity\nd- Accomodates for Handicap Persons\ne - Car Type\nf - Rating\n";
        cout << "g - Availability\nh - Allowes Pets\ni - Notes\nOption: ";
        cin >> option;
        switch (option) {
        case 'a':           //edit id
            int id;
            cout << "What is the new id you want to put (must be 6-digits): ";
            cin >> id;
            if (id >= 1000000 && id <= 1000000) {
                drivers[element].SetDriverId(id);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT 6 DIGITS, DISCARDING CHANGES!!\n" << endl;
            }
            break;
        case'b':                //edit Driver name

            cout << "What is the new Driver Name you want to put: ";
            cin.ignore();
            getline(cin, p);
            drivers[element].SetDriverName(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;

            break;
        case'c':                //edit Capacity
            int i;
            cout << "What is the new capacity of the car you want to put: ";
            cin >> i;
            drivers[element].SetCapacity(i);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;

            break;
        case'd':                //edit handicap
            char c;
            bool q;
            cout << "Does this Driver acommodate or doesn't for handicap persons (y/n): ";
            cin >> c;
            if (c == 'y') {
                q = true;
            }
            else {
                q = false;
            }
            drivers[element].SetHandicap(q);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'e':                //edit car type
            cout << "What is the new car type you want to put: ";
            cin.ignore();
            getline(cin, p);
            drivers[element].SetCarType(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'f':                //edit Rating
            float r;
            cout << "What is the Rating you want to put (1-5): ";
            cin >> r;
            if (r >= 0 && r <= 5) {
                drivers[element].SetRating(r);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nRATING NOT 1-5 DISCARDING CHANGES\n" << endl;
            }
            break;
        case'g':                //edit availability
            char x;
            bool z;
            cout << "Is this Driver Available? (y/n): ";
            cin >> x;
            if (c == 'y') {
                z = true;
            }
            else {
                z = false;
            }
            drivers[element].SetAvailable(z);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'h':                //edit allows pets
            char v;
            bool b;
            cout << "What is the new pet policy you want to put(y/n): ";
            cin >> v;
            if (v == 'y') {
                b = true;
            }
            else {
                b = false;
            }
            drivers[element].SetPetsAllowed(b);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'i':                //Edit notes
            cout << "What are the new notes you want to put about the Driver: ";
            cin.ignore();
            getline(cin, p);
            drivers[element].SetNotes(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        default:
            cout << "\nTHAT IS NOT AN OPTION!!\n" << endl;
            break;
        }
    }


}
void DriverFunctions::DeleteDriver() {
    int element = FindDriver();
    string p;
    if (element == -1) {
        cout << "\nCOULD NOT DELETE DRIVER\n" << endl;
    }
    else {
        drivers.erase(drivers.begin() + element);
        cout << "\nSUCCESSFULLY DELETED DRIVER!!\n" << endl;
    }

}
int  DriverFunctions::FindDriver() {
    int id;
    cout << "What is the Driver Id: ";
    cin >> id;
    if (drivers.empty()) {                            //if there are no drivers, displays error
        cout << "\nTHERE ARE NO DRIVERS ADDED!!\n";
        return -1;
    }
    else {
        for (size_t i = 0; i < drivers.size(); i++) {
            if ((drivers[i].GetDriverId()) == id) {
                cout << "\nSuccessfully Found Driver!\n";
                return i;                               //return the element the driver is at in vector using the id as argument
            }
            else {
                cout << "\n ERROR, COULD NOT FIND Driver!!!" << endl;
                return -1;
            }
        }
    }
    return 0;
}
void DriverFunctions::PrintAllDrivers() {
    if (econDrivers.empty()) {
        cout << "\nNO ECONOMY DRIVERS ADDED!!!!\n" << endl;

    }
    else {
        cout << "\n---------ECONOMY DRIVERS----------\n" << endl;
        for (size_t i = 0; i < econDrivers.size(); i++) {
            cout << "Driver " << i + 1 << ": \n" << endl;
            cout << "Driver ID: " << econDrivers[i].GetDriverId() << endl;
            cout << "Capacity: " << econDrivers[i].GetCapacity() << endl;
            cout << "Accomodates Handicap Persons: " << econDrivers[i].GetHandicap() << endl;
            cout << "Car Type: " << econDrivers[i].GetCarType() << endl;
            cout << "Driver Rating: " << econDrivers[i].GetRating() << endl;
            cout << "Availability: " << econDrivers[i].GetAvailable() << endl;
            cout << "Allows Pets: " << econDrivers[i].GetPetsAllowed() << endl;
            cout << "Notes: " << econDrivers[i].GetNotes() << endl;
            cout << "Number of Passenger Seats: " << econDrivers[i].GetNumOfSeats() << endl;
            cout << "Cargo Capicity: " << econDrivers[i].GetCargoCapacity() << endl;
            cout << endl;

        }
    }
    if (basicDrivers.empty()) {
        cout << "\nNO BASIC DRIVERS ADDED!!!!\n" << endl;

    }
    else {
        cout << "\n---------BASIC DRIVERS----------\n" << endl;
        for (size_t i = 0; i < basicDrivers.size(); i++) {
            cout << "Driver " << i + 1 << ": \n" << endl;
            cout << "Driver ID: " << basicDrivers[i].GetDriverId() << endl;
            cout << "Capacity: " << basicDrivers[i].GetCapacity() << endl;
            cout << "Accomodates Handicap Persons: " << basicDrivers[i].GetHandicap() << endl;
            cout << "Car Type: " << basicDrivers[i].GetCarType() << endl;
            cout << "Driver Rating: " << basicDrivers[i].GetRating() << endl;
            cout << "Availability: " << basicDrivers[i].GetAvailable() << endl;
            cout << "Allows Pets: " << basicDrivers[i].GetPetsAllowed() << endl;
            cout << "Notes: " << basicDrivers[i].GetNotes() << endl;
            cout << "Number of Passenger Seats: " << basicDrivers[i].GetNumOfSeats() << endl;
            cout << "Cargo Capicity: " << basicDrivers[i].GetCargoCapacity() << endl;
            cout << endl;

        }
    }
    //Group Drivers
    if (groupDrivers.empty()) {
        cout << "\nNO GROUP DRIVERS ADDED!!!!\n" << endl;

    }
    else {
        cout << "\n---------GROUP DRIVERS----------\n" << endl;
        for (size_t i = 0; i < groupDrivers.size(); i++) {
            cout << "Group Driver " << i + 1 << ": \n" << endl;
            cout << "Driver ID: " << groupDrivers[i].GetDriverId() << endl;
            cout << "Capacity: " << groupDrivers[i].GetCapacity() << endl;
            cout << "Accomodates Handicap Persons: " << groupDrivers[i].GetHandicap() << endl;
            cout << "Car Type: " << groupDrivers[i].GetCarType() << endl;
            cout << "Driver Rating: " << groupDrivers[i].GetRating() << endl;
            cout << "Availability: " << groupDrivers[i].GetAvailable() << endl;
            cout << "Allows Pets: " << groupDrivers[i].GetPetsAllowed() << endl;
            cout << "Notes: " << groupDrivers[i].GetNotes() << endl;
            cout << "Number of Passenger Seats: " << groupDrivers[i].GetNumOfSeats() << endl;
            cout << "Cargo Capicity: " << groupDrivers[i].GetCargoCapacity() << endl;
            cout << endl;

        }
    }
    //Luxury drivers
    if (luxuryDrivers.empty()) {
        cout << "\nNO LUXURY DRIVERS ADDED!!!!\n" << endl;

    }
    else {
        cout << "\n---------LUXURY DRIVERS----------\n" << endl;
        for (size_t i = 0; i < luxuryDrivers.size(); i++) {
            cout << "Luxury Driver " << i + 1 << ": \n" << endl;
            cout << "Driver ID: " << luxuryDrivers[i].GetDriverId() << endl;
            cout << "Capacity: " << luxuryDrivers[i].GetCapacity() << endl;
            cout << "Accomodates Handicap Persons: " << luxuryDrivers[i].GetHandicap() << endl;
            cout << "Car Type: " << luxuryDrivers[i].GetCarType() << endl;
            cout << "Driver Rating: " << luxuryDrivers[i].GetRating() << endl;
            cout << "Availability: " << luxuryDrivers[i].GetAvailable() << endl;
            cout << "Allows Pets: " << luxuryDrivers[i].GetPetsAllowed() << endl;
            cout << "Notes: " << luxuryDrivers[i].GetNotes() << endl;
            cout << "Number of Passenger Seats: " << luxuryDrivers[i].GetNumOfSeats() << endl;
            cout << "Cargo Capicity: " << luxuryDrivers[i].GetCargoCapacity() << endl;
            cout << "Amenities: " << luxuryDrivers[i].GetAmenities() << endl;
            cout << endl;

        }
    }

}
void DriverFunctions::PrintDriver(int i) {
    if (i == -1) {
        cout << "COULD NOT PRINT DRIVER\n" << endl;
    }
    else {
        cout << "Driver " << i + 1 << ": \n" << endl;
        cout << "Driver ID: " << drivers[i].GetDriverId() << endl;
        cout << "Capacity: " << drivers[i].GetCapacity() << endl;
        cout << "Accomodates Handicap Persons: " << drivers[i].GetHandicap() << endl;
        cout << "Car Type: " << drivers[i].GetCarType() << endl;
        cout << "Driver Rating: " << drivers[i].GetRating() << endl;
        cout << "Availability: " << drivers[i].GetAvailable() << endl;
        cout << "Allows Pets: " << drivers[i].GetPetsAllowed() << endl;
        cout << "Notes: " << drivers[i].GetNotes() << endl;
        cout << endl;
    }

}
