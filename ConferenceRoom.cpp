//
// Created by 20106 on 4/27/2023.
//
#include "ConferenceRoom.h"
#include<iostream>
#include "Floor.h"

using namespace std;



////int ConferenceRoom :: SetRoomNUMBER() {
////    int numberOfInventedPepole;
////    cout << "enter numberOfInventedPepole";
////    cin >> numberOfInventedPepole;
////    if (numberOfInventedPepole <= 400) {
////        cout << "for number<=400" << "the meeting room is in" << " G";
////
////        return 16;
////
////    } else if (400 < numberOfInventedPepole << 700) {
////        cout << "for more than 400" << "\t meating in G";
////
////        return 13;
////    }
////}
//void ConferenceRoom::SetRoomNUMBER()
//{
//    cout<<" number of room for conferance room"<<"\n";
//    cin>>RoomNumber;
//
//}
//int n;
//int numberofpeople =0;
//
//int ConferenceRoom:: getRoomNumber()
//{
//    cout<<"\n"<<" room is"<<" "<<"";
////    n=RoomNumber;
//    return RoomNumber;
//}
//
//
//int ConferenceRoom:: set_capacity()
//{
//    int capacity=0;
////    SetRoomNUMBER();
//
//    for(int i=1;i<=RoomNumber+1;i++)
//    {
//        capacity+=20;
//
//    }
//cout<<"\n"<<"the capcity of this room is"<<" ";
//    return capacity;
//}
//
//
//int ConferenceRoom::get_capacity()
//{
//    return capacity;
//}
//
//
//
//
//
//void ConferenceRoom::setequipment()
//{
//    string equ[4]={"air conditiong","Wi-Fi","audio visual equipment","Bathroom"};
//
//    for(int i=0;i<4;i++)
//    {
//        cout<<equ[i]<<"\n";
//    }
//}
//
//string ConferenceRoom::getequipment()
//{
//    string x;
//    for(int i=0;i<4;i++)
//    {
////        string x;
////        x=equ[i];
//        return equ[i];
//
//    }
//
//}
//=====================================
void ConferenceRoom::available_room() {
    cout<<"room which avaliable is"<<"\n";
    for (int i = 1; i < 50; i++)
        room[i] = i;


    for (int i = 1; i <50; i++) {
        cout <<" " << "room number" << " " << " ";
        cout << room[i]<<"  ";

    }
}



void ConferenceRoom::add_room()
{
    cout<<"\n"<<"choose room which you prefer"<<" ";
    cin>>YourRoom;


//        for (int i = 1; i < 50; i++)
//        {
//            if(YourRoom==room[i]) {
//                cout << "thank your room is avaliable";
//            }
//
//        }
//
}



void ConferenceRoom::get_room()
{
    cout<<"\n";
    for (int i = 1; i < 50; i++)
    {
        if(YourRoom==room[i]) {
            cout << "thank your room "<<" "<<YourRoom<<" "<<"is avaliable";
        }

    }

}




void ConferenceRoom::get_floor_number()
{
//    for (int i = 1; i < 50; i++)
    if(YourRoom<=25) {
        cout << "\n" << "your  room in the first floor";
        FloorNumber=1;
    }

    if((25<YourRoom)&&(YourRoom<=50)) {
        cout << "\n" << "your  room in the second floor";
        FloorNumber=2;
    }
}



ConferenceRoom::ConferenceRoom()
{
    available_room();
    add_room();
    get_room();
    get_floor_number();

    set_capacity();
    get_capacity();
    setequipment();
    //  getequipment();
}



void ConferenceRoom:: set_capacity()
{
    int capacity=0;
//    SetRoomNUMBER();

    for(int i=1;i<= YourRoom+1;i++)
    {
        capacity+=20;

    }
    cout<<"\n"<<"the capcity of this room is"<<" "<<capacity;

}


int ConferenceRoom::get_capacity()
{
    return capacity;
}





void ConferenceRoom::setequipment()
{
    string equ[4]={"air conditiong","Wi-Fi","audio visual equipment","Bathroom"};
    cout<<"\n"<<"the equipment which avaliable in this roon is:"<<"\t";
    for(int i=0;i<4;i++)
    {
        cout<<equ[i]<<"\n";
    }
}

// string ConferenceRoom::getequipment()
// {
//     string x;
//     for(int i=0;i<4;i++)
//     {
// //        string x;
// //        x=equ[i];
//         return equ[i];

//     }

// }






