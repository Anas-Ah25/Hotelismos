//
// Created by 20106 on 4/29/2023.
//

#ifndef UNTITLED_MEETING_H
#define UNTITLED_MEETING_H
#include<iostream>
#include"ConferenceRoom.h"
using namespace std;


class Meeting: public ConferenceRoom{
private:
string NameOrganize;
string time;
string date;
string name;
string purpose;
string attendns[3];


public:
void setDateMeeting();
void SetMeetingTime();
string GetMeetingTime();
string NameOganization();
void getattends();
void Invintion();
void purpose_of_meeting();
    Meeting();




};


#endif //UNTITLED_MEETING_H
