//
// Created by 20106 on 4/27/2023.
//

#include "a.h"
#include<iostream>

using namespace std;
#include <string>






//"function date services"


void ExtraService::get_service_date() {

    int day, month, year;
    if (Extraservice == "not avaliable") {}
    else {
        cout << "\n" << "Date for this service" << "\n" << "enter day of service" << "\t";
        cin >> day;
        while (day >= 31) {
            cout << "enter the correct number" << "\n";
            cin >> day;
        }
        cout << "\n" << "enter month of service" << "\t";

        cin >> month;
        while (month >= 12) {
            cout << "enter the correct month" << "\n";
            cin >> month;
        }


        cout << "\n" << "enter year of service" << "\t";
        cin >> year;
        while (year != 2023) {
            cout << "enter the correct year" << "\n";
            cin >> year;
        }
        cout <<"the date of this service is:"<<"  "<< day << "-" << month << "-" << year<<"\n";


    }
}


 int ExtraService ::get_service_type()
{
    if(Extraservice == "not avaliable"){}
    else {
        int type;
        cout <<"\n"<< "there are [4stars,5stars]" << "\n";
        cin >> type;


        while ((type != 5) && (type != 4)) {
            cout << "there are only 4 stars and 5stars " << "\n" << "enter 4or5 stars" << "\n";
            cin >> type;
        }
       if( (type == 5) || (type == 4)){
           cout<<"thanks to choose type"<<"  ";
           return type;}
    }

     if(Extraservice == "not avaliable"){return 0;}
cout<<"type service is"<<"\t";
return type;

}



//








void ExtraService::AvailableService() {
//    string Extraservice;

    string service[] = {"Laundry", "Jacuzzi"};
    bool available = false;
    for (int i = 0; i < 2; i++) {
        cout <<" service "<< "  "<<service[i] <<" " <<" is avaliable"<<"\n";
    }


    cout << "\n" << "choose extra service if you need" << "\n";
    cin >> Extraservice;
//    int c=1;


    for (int i = 0; i < 2; i++) {
        if (Extraservice == service[i]) {
//            Extraservice == service[i];
            available = true;
            break;
        }

    }
    if (available) {

        cout << "we will add it to your room";
    } else
        Extraservice = "not avaliable";
}






//function tax



    int ExtraService::get_service_cost() {
        int tax = 0;
        string service[] = {"Laundry", "Jacuzzi"};
        if (Extraservice == "not avaliable") {
            cout<<"this service not avaliable"<<"\n";
        cout<<"\n"<<"tax ="<<" ";
            return tax;
        }
        else {
            for (int i = 0; i < 2; i++) {
                tax += 100;
            }

            cout << "\n" << "tax is" << " ";
            return tax;
        }

    }