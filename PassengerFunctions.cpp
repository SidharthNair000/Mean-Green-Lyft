#include "PassengerFunctions.h"

void PassengerFunctions::AddPassenger() {
    char boolean, pay;
    Passenger newPassenger;
    string name, payType;
    bool includesPets, hand;
    int  id;
    float rating;
    srand(time(0));

    cout << "------------Please Enter the following information--------------\n" << endl;
    id = 100000 + (rand() % 1000000);
    cout << "Passenger ID: " << id << endl;
    newPassenger.SetId(id); //Sets id

    cout << "Passenger Name: ";
    cin.ignore();
    getline(cin, name);
    newPassenger.SetName(name);  //Sets name

    cout << "Payment Type:\nc - credit\nd - debit\na - cash\n";
    cin >> pay;
    if (pay == 'c') {
        payType = "credit";
        newPassenger.SetPay(payType);  //Sets pay type to credit
    }
    else if (pay == 'd') {
        payType = "debit";
        newPassenger.SetPay(payType);  //Sets pay type to debit
    }
    else if (pay == 'a') {
        payType = "cash";
        newPassenger.SetPay(payType);  //Sets pay type to cash
    }
    else {
        cout << "\nERROR, NOT AN OPTION! DEFAULTING TO NONE!\n";        //Error message if option c,d, or a not chosen.defaults to none
    }

    cout << "Rating Required (0-5): ";
    cin >> rating;
    if (rating < 0 || rating >5) {
        cout << "ERROR, THAT IS NOT IN THE DOMAIN OF THE RATING (1-5)\n DEFAULTING RATING TO ZERO!!!\n" << endl;
    }
    else {
        newPassenger.SetRating(rating);    //Sets Rating
    }

    cout << "Does The Passenger have pets (y/n): ";
    cin >> boolean;
    if (boolean == 'y') {
        includesPets = true;
        newPassenger.SetHasPets(includesPets); //Sets if passenger has pets (yes)
    }
    else if (boolean == 'n') {
        includesPets = false;
        newPassenger.SetHasPets(includesPets); //Sets if passenger has pets (no)
    }
    else {
        cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
    }


    cout << "Is the Passenger Handicapped (y/n): ";
    cin >> boolean;
    if (boolean == 'y') {
        hand = true;
        newPassenger.SetHandicap(hand);   //Sets Passenger is handicapped
    }
    else if (boolean == 'n') {
        hand = false;                   //Sets Passenger is not handicapped
        newPassenger.SetHandicap(hand);
    }
    else {
        cout << "\n NOT AN OPTION, DEFAULTING TO NO!!!\n" << endl;
    }


    passengers.push_back(newPassenger); //Adds Driver
    cout << "\nSUCCESSFULLY ADDED PASSENGER!!!\n" << endl;

}
void PassengerFunctions::EditPassenger() {
    
    int element = FindPassenger();
    string p;
    if (element == -1) {
        cout << "COULD NOT EDIT PASSENGER" << endl;
    }
    else {
        char option;
        cout << "What would you like to Edit?" << endl;
        cout << "a - Passenger Id\nb - Passenger Name\nc - Payment Type\nd- Handicapped\ne - Rating Required\nf - Has Pets\n";
        cout << "Option: ";
        cin >> option;
        switch (option) {
        case 'a':           //edit id
            int id;
            cout << "What is the new id you want to put (must be 6-digits): ";
            cin >> id;
            if (id >= 1000000 && id <= 1000000) {
                passengers[element].SetId(id);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT 6 DIGITS, DISCARDING CHANGES!!\n" << endl;
            }
            break;
        case'b':                //edit Passenger name

            cout << "What is the new Passenger Name you want to put: ";
            cin.ignore();
            getline(cin, p);
            passengers[element].SetName(p);
            cout << "\nSUCCESSFULLY EDITED\n" << endl;

            break;
        case'c':                //edit PaymentType
            char pay;
            cout << "What is the new payment type want to put?\nc - credit\nd - debit\nm - cash\noption: ";
            cin >> pay;
            if (pay == 'c') {
                p = "credit";
                passengers[element].SetPay(p);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else if (pay == 'd') {
                p = "debit";
                passengers[element].SetPay(p);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else if (pay == 'm') {
                p = "cash";
                passengers[element].SetPay(p);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT AN OPTION, DISCARDING CHANGES!!\n" << endl;
            }
          
        

            break;
        case'd':                //edit handicap
            char c;
            bool q;
            cout << "Is this Passenger Handicapped? (y/n): ";
            cin >> c;
            if (c == 'y') {
                q = true;
                passengers[element].SetHandicap(q);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else if (c == 'n') {
                q = false;
                passengers[element].SetHandicap(q);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT AN OPTION, DISCARDING CHANGES!!\n" << endl;
            }
            
            break;
        case'e':                //edit Rating Required
            float r;
            cout << "What is the Rating Requirement you want to put (1-5): ";
            cin >> r;
            if (r >= 0 && r <= 5) {
                passengers[element].SetRating(r);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nRATING NOT 1-5 DISCARDING CHANGES\n" << endl;
            }
            break;
        case'f':                //edit If Passenger has Pets
            
            cout << "Does this passenger have pets? (y/n): ";
            cin >> c;
            if (c == 'y') {
                q = true;
                passengers[element].SetHasPets(q);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else if (c == 'n') {
                q = false;
                passengers[element].SetHasPets(q);
                cout << "\nSUCCESSFULLY EDITED\n" << endl;
            }
            else {
                cout << "\nERROR THAT IS NOT AN OPTION, DISCARDING CHANGES!!\n" << endl;
            }
            break;
        
        default:
            cout << "\nTHAT IS NOT AN OPTION!!\n" << endl;
            break;
        }
    }

}
void PassengerFunctions::DeletePassenger() {
    int element = FindPassenger();
    string p;
    if (element == -1) {
        cout << "\nCOULD NOT DELETE PASSENGER\n" << endl;
    }
    else {
        passengers.erase(passengers.begin() + element);
        cout << "\nSUCCESSFULLY DELETED PASSENGER!!\n" << endl;
    }

}
void PassengerFunctions::PrintAllPassengers() {
    if (passengers.empty()) {
        cout << "\nNO PASSENGERS ADDED!!!!\n" << endl;

    }
    else {
        cout << "---------Pasengers----------\n" << endl;
        for (size_t i = 0; i < passengers.size(); i++) {
            cout << "Passenger " << i + 1 << ": \n" << endl;
            cout << "Passenger ID: " << passengers[i].GetId() << endl;
            cout << "Passenger Name: " << passengers[i].GetName() << endl;
            cout << "Payment Type: " << passengers[i].GetPay() << endl;
            cout << "Is Handicapped: ";
            if (passengers[i].GetHandicap() == true) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            cout << "Rating Required: " << passengers[i].GetRating() << endl;
            cout << "Has Pets: ";
            if (passengers[i].GetHasPets()== true) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            cout << endl;

        }
    }

}
int PassengerFunctions::FindPassenger() {
    int id;
    cout << "What is the Passenger Id: ";
    cin >> id;
    if (passengers.empty()) {                            //if there are no passengers, displays error
        cout << "\nTHERE ARE NO PASSENGERS ADDED!!\n";
        return -1;
    }
    else {
        for (size_t i = 0; i < passengers.size(); i++) {
            if ((passengers[i].GetId()) == id) {
                cout << "\nSuccessfully Found Passenger!\n";
                return i;                               //return the element the passenger is at in vector using the id as argument
            }
            else {
                cout << "\n ERROR, COULD NOT FIND PASSENGER!!!" << endl;
                return -1;
            }
        }
    }
    return 0;

}
void PassengerFunctions::PrintPassenger(int i) {
    if (i == -1) {
        cout << "COULD NOT PRINT DRIVER\n" << endl;
    }
    else {
        cout << "Passenger " << i + 1 << ": \n" << endl;
        cout << "Passenger ID: " << passengers[i].GetId() << endl;
        cout << "Passenger Name: " << passengers[i].GetName() << endl;
        cout << "Payment Type: " << passengers[i].GetPay() << endl;
        cout << "Is Handicapped: ";
        if (passengers[i].GetHandicap() == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        cout << "Rating Required: " << passengers[i].GetRating() << endl;
        cout << "Has Pets: ";
        if (passengers[i].GetHasPets() == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        cout << endl;
    }
}
