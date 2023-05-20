//
// Created by 20106 on 4/27/2023.
//

#ifndef UNTITLED_CONFERENCEROOM_H
#define UNTITLED_CONFERENCEROOM_H
#include "Floor.h"

using namespace std;
#include<iostream>
#include <list>
#include <string>

class ConferenceRoom: public Floor{
//private:
//    int RoomNumber,capacity;
//    string equ[4]={"air conditiong","Wi-Fi","audio visual equipment","Bathroom"};
//public:
//    void SetRoomNUMBER();
//    int getRoomNumber();
//
//    int  set_capacity();
//    int get_capacity();
//    void setequipment();
//    string getequipment();
//     void add_room();

private:
    int capacity;
    string equ[4]={"air conditiong","Wi-Fi","audio visual equipment","Bathroom"};
public:
    // void SetRoomNUMBER();
    // int getRoomNumber();

    void  set_capacity();
    int get_capacity();
    void setequipment();
    string getequipment();
    void available_room();
    void add_room();
    void get_room();
    void get_floor_number();
    ConferenceRoom();
};


#endif //UNTITLED_CONFERENCEROOM_H
