//
// Created by 20106 on 4/30/2023.
//

#ifndef UNTITLED_FLOOR_H
#define UNTITLED_FLOOR_H
using namespace std;
#include<iostream>

class Floor {
//private:
//int  YourRoom;
//    int FloorNumber;
//    int room[50];
//
//public:
//
//    virtual void add_room()=0;
//    void available_room();
//    void get_room();
//
//    Floor();
//    void get_floor_number();



private:



public:
    int  YourRoom;
    int FloorNumber;
    int room[50];

    virtual void add_room()=0;
    virtual void available_room()=0;
    virtual void get_room()=0;


    virtual void get_floor_number()=0;
};


#endif //UNTITLED_FLOOR_H
