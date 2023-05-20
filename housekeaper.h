//
// Created by 20106 on 4/27/2023.
//

#ifndef UNTITLED_HOUSEKEAPER_H
#define UNTITLED_HOUSEKEAPER_H
#include<string>
#include<iostream>
using namespace std;

class housekeaper {
public:
int RoomNmber;
char IsRoomclean;


public:
    void setRoomNumber();
    int getRoomNumber();
    bool isRoomClean();
//    bool cleanroom();
    housekeaper();
    housekeaper(char c);
    void cleanROOM();

};


#endif //UNTITLED_HOUSEKEAPER_H
