//
// Created by 20106 on 4/27/2023.
//

#include "housekeaper.h"
#include <iostream>

using namespace std;

void housekeaper::setRoomNumber()
{
    cout<<"dear customer what is your room number?"<<"\n";
    cin>>RoomNmber;
}

int housekeaper::getRoomNumber() {
    cout<<"your room "<<" ";
    return RoomNmber;
}







    bool housekeaper::isRoomClean() {
//            cout << "is your room is dirty enter f" << "\n";
//    cout << "is your room is clean enter y" << "\n";
////    cin>>IsRoomclean;
        while ((IsRoomclean == 'F')||(IsRoomclean == 'f'))  {
            return false;

        }
//        {
            return false;
      }




//bool housekeaper:: cleanroom() {
////    housekeaper(char opinion);
////    housekeaper(char opinion){
////        IsRoomclean='t';//
//
//    if ((IsRoomclean == 'F') || (IsRoomclean == 'f')) {
//        cout << "\n" << "room become clean" << " ";
//
//        return true;
//    }
//else
//
//    return false;
//
//}





housekeaper::housekeaper() {
    char check;
    cout<<"\n"<<"\n"<<"enter f or F  if your room derty but t or T if it clean ";
    cin>>check;


//    do
//
//    {
//        cout<<"\n"<<"i am sorry i will ask"<<"\n";
//        cin>>c;
//}
 while ((check=='F')||(check=='f')) {
//    cout<<"\n"<<"you are welcome";
     cout << "iam sorry  you will get your room cleaned"<<"\n"<<"how about your room now"<<"  ";
cin>>check;
 }
    cleanROOM();
cout<<"\n"<<"you are welcom";
//

    cout<<isRoomClean()<<"\n";
}
void housekeaper::cleanROOM()
{
    setRoomNumber();
    cout<<getRoomNumber()<<"\t"<<"become cleaned";
}







