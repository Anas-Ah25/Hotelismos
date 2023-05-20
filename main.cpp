#include "a.h"
#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <vector>
#include"Meeting.h"
#include"housekeaper.h"
#include"Floor.h"
#include "ConferenceRoom.h"














//call for ExtraService
//    ExtraService e1;
//    e1.AvailableService();
//    cout << e1.get_service_type();
//    cout << e1.get_service_cost();
//    e1.get_service_date();
//    cout<<"\n";



//
//    cout<<e1.get_service_type()<<"\n";
//
//    cin>>e1.Extraservice;
//    cout<<e1.get_service_details(e1.Extraservice)<<"\n";
//    e1.get_service_date();
//cout<<e1.get_service_cost();
//cout<<e1.get_service_cost(e1.tax);






//    Meeting m1;
//    cout<<"\n";



//    ConferenceRoom c1;
//    cout<<"\n";





//    Floor f1;
//    cout<<"\n";
//
//
//    ConferenceRoom r1;
//    int a;
//    r1.SetRoomNUMBER();
//    cout<<r1.getRoomNumber();
//
//    cout<<r1.set_capacity();
////    cout<<r1.getRoomNumber();
//r1.setequipment();
//cout<<r1.getequipment();






//
//call for class housekeaper
// housekeaper k1;




//Meeting m1;


//    مش محتاجين ده
//    m1.purpose_of_meeting();
//
//    m1.Invintion();
//
//
//    cout<<m1.NameOganization();
//    m1.setDateMeeting();
//    m1.SetMeetingTime();
//    cout<<m1.GetMeetingTime();








//        double paymentAmount;
//        string paymentMethod;
//        int paymentDate;
//        int guestID;
//
//        cout << "Enter payment amount: ";
//        cin >> paymentAmount;
//        cout << "Enter payment method: ";
//        cin >> paymentMethod;
//        cout << "Enter payment date : ";
//        cin >> paymentDate;
//        cout << "Enter guest ID: ";
//        cin >> guestID;
//
//        return 0;



//    Floor f1;



//==============================















//##


using namespace std;

class Room {
private:
    int roomNumber_;
    string roomType_;
    int maxGuests_;
    bool isOccupied_;
    double pricePerNight_;

public:
    Room(int roomNumber, string roomType, int maxGuests, double pricePerNight) {
        roomNumber_ = roomNumber;
        roomType_ = roomType;
        maxGuests_ = maxGuests;
        pricePerNight_ = pricePerNight;

        if (roomType == "Elite") {
            pricePerNight_ = 500;
        }

        isOccupied_ = false;
    }

    bool checkAvailability() const {
        if (roomType_ == "Standard" && maxGuests_ >= 3) {
            cout << "Sorry, there are no rooms available with this room type and guest number." << endl;
            return false;
        }

        if (isOccupied_) {
            cout << "Sorry, this room is already occupied." << endl;
            return false;
        }

        return true;
    }

    void bookRoom() {
        isOccupied_ = true;
        cout << "Room booked successfully." << endl;
    }

    int getRoomNumber() const {
        return roomNumber_;
    }

    string getRoomType() const {
        return roomType_;
    }

    int getMaxGuests() const {
        return maxGuests_;
    }

    double getPricePerNight() const {
        return pricePerNight_;
    }

    void setRoomNumber(int roomNumber) {
        roomNumber_ = roomNumber;
    }

    void setRoomType(string roomType) {
        roomType_ = roomType;
    }

    void setMaxGuests(int maxGuests) {
        maxGuests_ = maxGuests;
    }

    void setPricePerNight(double pricePerNight) {
        pricePerNight_ = pricePerNight;
    }
};

class Reception {
private:
    string name_;
    int id_;
    int phoneNumber_;

public:

    Reception() {
        cout << "Welcome to our hotel. Please provide the following information:" << endl;
    }

    void setName(string name) {
        name_ = name;
    }

    void setId(int id) {
        id_ = id;
    }

    void setPhoneNumber(int phoneNumber) {
        phoneNumber_ = phoneNumber;
    }

    string getName() const {
        return name_;
    }

    int getId() const {
        return id_;
    }

    int getPhoneNumber() const {
        return phoneNumber_;
    }
};

int main() {
    Meeting m1;
    int  x;
    cout<<"Enter 1 if you are guest and 2 if you are addmnestraion: ";
    cin>>x;
    if(x==1){
        char get;
        cout << "Enter 'u' if you want to book a room for a holiday, and 'm' if you want to book a room for a meeting: ";
        cin >> get;
        while ((get != 'u') && (get != 'm')) {
            cout << "Invalid input. Please enter either 'u' or 'm': ";
            cin >> get;
        }


        if(get=='u')
        {

            ofstream outfile;
            outfile.open("hotel_data.txt", ios::app);

            Reception reception;
            string name;
            cout << "Name: ";
            cin >> name;
            reception.setName(name);
            outfile << "Name: " << name << endl;

            int id;
            cout << "ID: ";
            while (!(cin >> id)) {
                cout << "Invalid input, please enter a number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            reception.setId(id);
            outfile << "ID: " << id << endl;

            int phoneNumber;
            cout << "Phone Number: ";
            while (!(cin >> phoneNumber)) {
                cout << "Invalid input, please enter a number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            reception.setPhoneNumber(phoneNumber);
            outfile << "Phone Number: " << phoneNumber << endl;

            ifstream infile;
            infile.open("hotel_data.txt");
            vector<int> roomNumbers;
            string line;
            while (getline(infile, line)) {
                if (line.find("Room Number: ") != string::npos) {
                    int roomNumber = stoi(line.substr(13));
                    roomNumbers.push_back(roomNumber);
                }
            }
            infile.close();

            int roomNumber;
            cout << endl << "Welcome, " << reception.getName() << ". Please select a room:" << endl;
            cout << "Room Number: ";
            while (!(cin >> roomNumber)) {
                bool roomNumberExists = false;
                for (int i = 0; i < roomNumbers.size(); i++) {
                    if (roomNumbers[i] == roomNumber) {
                        roomNumberExists = true;
                        break;
                    }
                }

                if (roomNumberExists) {
                    cout << "Sorry, this room number is already taken. Please enter a different room number: ";
                } else {
                    outfile << "Room Number: " << roomNumber << endl;
                    break;
                }
            }

            string roomType;
            cout << "Room Type (Standard, Elite): ";
            while (!(cin >> roomType) || (roomType != "Standard" && roomType != "Elite")) {
                cout << "Invalid input, please enter either 'Standard' or 'Elite': ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            outfile << "Room Type: " << roomType << endl;

            int guestNumber;
            cout << "Number of Guests: ";
            while (!(cin >> guestNumber) || guestNumber < 1) {
                cout << "Invalid input, please enter a positive integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            outfile << "Number of Guests: " << guestNumber << endl;

            Room room(roomNumber, roomType, guestNumber, 100.0);

            if (room.checkAvailability()) {
                room.bookRoom();
                outfile << "Room Booked: Yes" << endl;
            } else {
                outfile << "Room Booked: No" << endl;
            }

            outfile << endl;
            outfile.close();

            ExtraService e1;
            e1.AvailableService();
            cout << e1.get_service_type();
            cout << e1.get_service_cost();
            e1.get_service_date();
            cout << "\n";
            housekeaper k1;
        }
        if(get=='m')
        {
            Meeting m1;
            housekeaper k1;
        }

    }
    if(x==2){
        cout<<"Waleed";
    }
}