//
// Created by 20106 on 4/29/2023.
//

#include "Meeting.h"
#include<iostream>
#include"ConferenceRoom.h"

using namespace std;

void Meeting::setDateMeeting()
{

        int day, month, year;


            cout << "\n" << "Date for this meeting" << "\n" << "enter day of meeting" << "\t";
            cin >> day;
            while (day >= 31) {
                cout << "enter the correct number" << "\n";
                cin >> day;
            }
            cout << "\n" << "enter month of meeting" << "\t";

            cin >> month;
            while (month >= 12) {
                cout << "enter the correct month" << "\n";
                cin >> month;
            }


            cout << "\n" << "enter year of meeting" << "\t";
            cin >> year;
            while (year != 2023) {
                cout << "enter the correct year" << "\n";
                cin >> year;
            }
            cout <<"the date for this meeting is"<<"  "<< day << "-" << month << "-" << year;


        }



void Meeting::SetMeetingTime()
{
    cout<<"\n"<<"\n"<<"what is the time for this meeting"<<"\n";
    cin>>time;
}




string Meeting::GetMeetingTime()
{
    cout<<"the time for this meeting is"<<" ";
    return time;
}



string Meeting::NameOganization()
{
    cout<<"what is the name organization"<<"  ";
    cin>>NameOrganize;
    cout<<"\n"<<"the name of organization is"<<"  ";
    return NameOrganize;
}



void Meeting::Invintion() {

    cout <<"to discuss"<<"  "<<purpose<<"\n"<< "I hope this message finds you well. I'm writing to invite you to a meeting that I'm organizing .\n"
            "\n"
            "I believe that your presence at the meeting would be valuable and your input would be greatly appreciated.\n"
            "\n"
            " If you're unable to attend, please let me know and I'll send you a summary of the key points discussed.\n"
            "\n"
            "Please let me know if you're able to attend the meeting. I'm looking forward to your participation.\n"
            "\n"
            "Best regards," << "\n";


    for (int i = 0; i < 3; i++) {
        cout << "if you will attend meeting   enter your name" << " ";
        cin >> attendns[i];

    }
    cout<<"the name of people who was invited is";
    for (int i = 0; i < 3; i++) {
//        cout << "your name is" << " ";
        cout <<"\n"<<"  "<< attendns[i]<<"  ";
    }


}
void Meeting::getattends()
{
    string n;
    cout<<"\n"<<"if you approve to  invition enter your name"<<"\n";
    cin>>n;
    if(YourRoom<=25) {

        FloorNumber=1;
    }

    if((25<YourRoom)&&(YourRoom<=50)) {

        FloorNumber = 2;
//        if(n!=attendns[i]){cout<<"\n"<<"there is not meeting ";
//        break;}
    }

    for(int i = 0; i < 3; i++)
    {


        if(n==attendns[i]){cout<<"\n"<<"welcome"<<" "<<n<<"\n"<<"the room is ROOM "<<YourRoom<<" "<<"its in the  FLOOR"<<FloorNumber;break;
            }


    }


}


void Meeting::purpose_of_meeting()
{

    cout<<"\n"<<"\n"<<"what is the purpose for this meeting"<<"\n";
    cin>>purpose;
//    cout<<"\n"<<purpose<<"\n";
}




Meeting::Meeting() {
//    available_room();
//    add_room();
//    get_room();
//    get_floor_number();
//ConferenceRoom();

    set_capacity();
    get_capacity();
    setequipment();
    purpose_of_meeting();
    Invintion();
    getattends();


}