#include "RideFunctions.h"
#include "Ride.h"
#include "Driver.h"
using namespace std;

void RideFunctions::AddRide(DriverFunctions& DriverF){      
   
    char menuOption, pets;
    Ride newRide;
    string pickupLocation, pickupTime, dropoffLocation, dropoffTime, status;
    bool includesPets;
    int sizeOfParty, id;
    float rating;
    srand(time(0));
    if ((DriverF.drivers.empty())) {
        cout << "\nERROR, PLEASE ADD A DRIVER FIRST\n" << endl;
    }
    else {


        // adds Ride
        cout << "------------Please Enter the following information--------------\n" << endl;
        id = 10000000 + (rand() % 100000000);
        cout << "Ride ID: " << id << endl;
        newRide.SetRideId(id);                          //Set ride id
        cout << "Pickup Location: ";
        cin.ignore();
        getline(cin, pickupLocation);                   //Set rpickup location
        newRide.SetPickupLocation(pickupLocation);
        cout << "Pickup Time: ";                        //Setpickup time
        getline(cin, pickupTime);
        newRide.SetPickupTime(pickupTime);
        cout << "Dropoff Location: ";                   //Set dropoff location
        getline(cin, dropoffLocation);
        newRide.SetDropoffLocation(dropoffLocation);
        cout << "Size of Party: ";                              //set size of party
        cin >> sizeOfParty;
        newRide.SetSizeOfParty(sizeOfParty);
        cout << "Does it includes Pets (y/n): ";                    //set pet inclusivity using char as condition in if statement
        cin >> pets;
        if (pets == 'y') {
            includesPets = true;
            newRide.SetIncludesPets(includesPets);                      //sets includes pets to true or yes
        }
        else if (pets == 'n') {
            includesPets = false;
            newRide.SetIncludesPets(includesPets);                          //sets includes pets to false or no
        }
        else {
            cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
        }
        cin.ignore();
        cout << "Dropoff Time: ";                                           //sets dropoff time
        getline(cin, dropoffTime);
        newRide.SetDropoffTime(dropoffTime);
        cout << "Customer Rating: ";                                                    //sets customer rating
        cin >> rating;
        newRide.SetCustomerRating(rating);
        cout << "Status (a - Active, c - Cancelled, m - Completed): ";                      //sets ride status(active, cancelled, or completed)
        cout << "Choose what you would like the status to be: ";
        cin >> menuOption;
        if (menuOption == 'a') {
            status = "Active";
            cout << "\nSUCCESSFULLY ADDED RIDE!!!\n" << endl;
            newRide.SetStatus(status);
        }
        else if (menuOption == 'c') {
            status = "Cancelled";
            cout << "\nSUCCESSFULLY ADDED RIDE!!!\n" << endl;
            newRide.SetStatus(status);
        }
        else if (menuOption == 'm') {
            status = "Completed";
            cout << "\nSUCCESSFULLY ADDED RIDE!!!\n" << endl;
            newRide.SetStatus(status);
        }
        else {
            cout << "ERROR, THAT IS NOT A OPTION!!!\n" << endl;
        }


        rides.push_back(newRide);                                           //adds the newRide object to the vector
        
    }
    
        
}
void RideFunctions::EditRide() {
    int element = FindRide();                               //use find ride to find ride to edit
    string p;
    if (element == -1) {                                    //return -1 if not found
        cout << "COULD NOT EDIT RIDE" << endl;
    }
    else {
        char option;
        cout << "What would you like to Edit?" << endl;
        cout << "a - Ride Id\nb - Pickup Location\nc - Dropoff Location\nd- Pickup Time\ne - Dropoff Time\nf - Size of Party\n";
        cout << "g - Includes Pets\nh - Status\ni - Customer Rating\nOption: ";
        cin >> option;
        switch (option) {
        case 'a':           //edit id
            int id;
            cout << "What is the new id you want to put (must be 8-digits): ";
            cin >> id;
            if (id >= 1000000 && id <= 100000000) {
                rides[element].SetRideId(id);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT 8 DIGITS, DISCARDING CHANGES!!\n" << endl;
            }
            break;
        case'b':                //edit pickup location
           
            cout << "What is the new pickup location you want to put: ";
            cin.ignore();
            getline(cin, p);
            rides[element].SetPickupLocation(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;

            break;
        case'c':                //edit dropoff location
            
            cout << "What is the new dropoff location you want to put: ";
            cin.ignore();
            getline(cin, p);
            rides[element].SetDropoffLocation(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;

            break;
        case'd':                //pickup Time
            cout << "What is the new pickup time you want to put: ";
            cin.ignore();
            getline(cin, p);
            rides[element].SetPickupTime(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'e':                //dropoff Time
            cout << "What is the new dropoff time you want to put: ";
            cin.ignore();
            getline(cin, p);
            rides[element].SetDropoffTime(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'f':                //size of party
            int s;
            cout << "What is the new size of party you want to put: ";
            cin >> s;
            rides[element].SetSizeOfParty(s);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;  
        case'g':                //includes pets
            char c;
            bool q;
            cout << "What is the new pet policy you want to put(y/n): ";
            cin >> c;
            if (c == 'y') {
                q == true;
            }
            else {
                q == false;
            }
            rides[element].SetDropoffTime(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'h':                //status
            cout << "What is the new status you want to put: ";
            cin.ignore();
            getline(cin, p);
            rides[element].SetStatus(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;
            break;
        case'i':                //customer rating
            float r;
            cout << "What is the Customer Rating you want to put (1-5): ";
            cin >> r;
            if (r >= 0 && r <= 5) {
                rides[element].SetCustomerRating(r);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nRATING NOT 1-5 DISCARDING CHANGES\n" << endl;
            }
            break;
        default:
            cout << "\nTHAT IS NOT AN OPTION!!\n" << endl;
            break;
        }
    }

}
void RideFunctions::DeleteRide() {
    int element = FindRide();                           //Uses FindRide() and returns -1 if not found, if found return element ride if found
    
    if (element == -1) {
        cout << "\nCOULD NOT DELETE RIDE\n" << endl;
    }
    else {
        rides.erase(rides.begin() + element);
        cout << "\nSUCCESSFULLY DELETED RIDE!!\n" << endl;
    }

}
int RideFunctions::FindRide() {
    int id;
    cout << "What is the Ride Id: ";
    cin >> id;
    if (rides.empty()) {                            //if there are no rides and vector is empty, displays error
        cout << "\nTHERE ARE NO RIDES ADDED!!\n";
        return -1;
    }
    else {
        for (size_t i = 0; i < rides.size(); i++) {
            if ((rides[i].GetRideId()) == id) {
                cout << "\nSuccessfully Found Ride!\n";
                return i;                               //return the element the ride is at in vector using the id as argument
            }
            else {
                cout << "\n ERROR, COULD NOT FIND RIDE!!!" << endl;
                return -1;
            }
        }
    }
    return 0;
}
void RideFunctions::PrintRides() {
    if (rides.empty()) {
        cout << "\nNO RIDES ADDED!!!!\n" << endl;

    }
    else {
        cout << "---------Rides----------\n" << endl;
        for (size_t i = 0; i < rides.size(); i++) {
            cout << "Ride " << i + 1 << ": \n" << endl;
            cout << "Ride ID: " << rides[i].GetRideId() << endl;
            cout << "Pickup Location: " << rides[i].GetPickupLocation() << endl;
            cout << "Pickup Time: " << rides[i].GetPickupTime() << endl;
            cout << "Dropoff Location: " << rides[i].GetDropoffLocation() << endl;
            cout << "Size of Party: " << rides[i].GetSizeOfParty() << endl;
            cout << "Includes pets: ";
            if (rides[i].GetIncludesPets() == true) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            cout << "Dropoff Time: " << rides[i].GetDropoffTime() << endl;
            cout << "Status: " << rides[i].GetStatus() << endl;
            cout << "Customer Rating: " << rides[i].GetCustomerRating() << endl;
            cout << endl;

        }
    }
}
void RideFunctions::PrintRidesPassenger(int i) {
    if (i == -1) {
        cout << "COULD NOT PRINT RIDE\n" << endl;
    }
    else {
        cout << "\nRide " << i + 1 << ": \n" << endl;
        cout << "Ride ID: " << rides[i].GetRideId() << endl;
        cout << "Pickup Location: " << rides[i].GetPickupLocation() << endl;
        cout << "Pickup Time: " << rides[i].GetPickupTime() << endl;
        cout << "Dropoff Location: " << rides[i].GetDropoffLocation() << endl;
        cout << "Size of Party: " << rides[i].GetSizeOfParty() << endl;
        cout << "Includes pets: ";
        if (rides[i].GetIncludesPets() == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        cout << "Dropoff Time: " << rides[i].GetDropoffTime() << endl;
        cout << "Status: " << rides[i].GetStatus() << endl;
        cout << "Customer Rating: " << rides[i].GetCustomerRating() << endl;
        cout << endl;
    }

}
void RideFunctions::PrintRide(int i) { //Print specific ride using findRide() function
    if (i == -1) {
        cout <<"COULD NOT PRINT RIDE\n" << endl;                                //uses find ride in function parameter when called
    }
    else {
        cout << "\nRide " << i + 1 << ": \n" << endl;
        cout << "Ride ID: " << rides[i].GetRideId() << endl;
        cout << "Pickup Location: " << rides[i].GetPickupLocation() << endl;        //prints in rides vector from the element return from find ride fucntion
        cout << "Pickup Time: " << rides[i].GetPickupTime() << endl;
        cout << "Dropoff Location: " << rides[i].GetDropoffLocation() << endl;
        cout << "Size of Party: " << rides[i].GetSizeOfParty() << endl;
        cout << "Includes pets: ";
        if (rides[i].GetIncludesPets() == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        cout << "Dropoff Time: " << rides[i].GetDropoffTime() << endl;
        cout << "Status: " << rides[i].GetStatus() << endl;
        cout << "Customer Rating: " << rides[i].GetCustomerRating() << endl;
        cout << endl;
    }

}
void RideFunctions::PrintRidesDriver(int i) {
    if (i == -1) {
        cout << "COULD NOT PRINT RIDE\n" << endl;
    }
    else {
        cout << "\nRide " << i + 1 << ": \n" << endl;
        cout << "Ride ID: " << rides[i].GetRideId() << endl;
        cout << "Pickup Location: " << rides[i].GetPickupLocation() << endl;
        cout << "Pickup Time: " << rides[i].GetPickupTime() << endl;
        cout << "Dropoff Location: " << rides[i].GetDropoffLocation() << endl;
        cout << "Size of Party: " << rides[i].GetSizeOfParty() << endl;
        cout << "Includes pets: ";
        if (rides[i].GetIncludesPets() == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        cout << "Dropoff Time: " << rides[i].GetDropoffTime() << endl;
        cout << "Status: " << rides[i].GetStatus() << endl;
        cout << "Customer Rating: " << rides[i].GetCustomerRating() << endl;
        cout << endl;
    }

}
void RideFunctions::PrintAllRidesStatus() {
    if (rides.empty()) {
        cout << "\nNO RIDES ADDED!!!!\n" << endl;

    }
    else {
        cout << "---------Rides STATUS----------\n" << endl;
        for (size_t i = 0; i < rides.size(); i++) {
            cout << "Ride " << i + 1 << ": \n" << endl;
            cout << "Ride ID: " << rides[i].GetRideId() << endl;         
            cout << "Status: " << rides[i].GetStatus() << endl;
            cout << endl;

        }
    }

}

void RideFunctions::DeleteRideCompleted() {
    for (size_t i = 0; i < rides.size(); i++) {
        if ((rides[i].GetStatus()) == "Completed") {
            rides.erase(rides.begin() + i);
            cout << "\nSUCCESSFULLY DELETED COMPLETED RIDE!!\n" << endl;                       //iterates through vector and deletes completed rides
        }
        if ((rides[i].GetStatus()) == "Cancelled") {
                rides.erase(rides.begin() + i);
                cout << "\nSUCCESSFULLY DELETED COMPLETED RIDE!!\n" << endl;                       ////iterates through vector and deletes cancelled rides
        }
        
        }
  
}
void RideFunctions::UpdateRideStatus() {

}
void RideFunctions::StoreRides() {
    ofstream file("Rides.dat");
    Ride ride;
    if (!file) {
        cerr << "Unable to open file" << endl;              //if file not found 
        return;
    }
    else {
        file << rides.size() << endl;               //if file found stores the size of vector
        for (auto& Ride : rides) {
            file << ride.GetRideId() << " " << ride.GetPickupLocation() << " " << ride.GetPickupTime() << " " << ride.GetDropoffLocation() << " ";
            file << ride.GetSizeOfParty() << " " << ride.GetIncludesPets() << " " << ride.GetDropoffTime() << " " << ride.GetStatus() << " " << ride.GetCustomerRating() << endl;
        }
    }
    file.close();
}
void RideFunctions::LoadRides() {
    ifstream file("Rides.dat");
    if (!file) {
        cerr << "Unable to open file" << endl;
        return;
    }
    int numRides;
    file >> numRides;
    for (int i = 0; i < numRides; ++i) {
        int id, sizeOfParty;
        bool pets;
        float rating;
        string pickupLocation, pickupTime, dropoffLocation, status, dropoffTime;
        file >> id >> pickupLocation >> pickupTime >> dropoffLocation >> sizeOfParty >> pets >> dropoffTime >> status >> rating;
        Ride newRide;
        newRide.SetRideId(id);
        newRide.SetPickupLocation(pickupLocation);
        newRide.SetPickupTime(pickupTime);
        newRide.SetDropoffTime(dropoffTime);
        newRide.SetDropoffLocation(dropoffLocation);
        newRide.SetSizeOfParty(sizeOfParty);
        newRide.SetIncludesPets(pets);
        newRide.SetStatus(status);
        newRide.SetCustomerRating(rating);

        rides.push_back(newRide);
    }
    file.close();
}
