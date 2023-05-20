//
// Created by 20106 on 4/27/2023.
//

#ifndef UNTITLED_A_H
#define UNTITLED_A_H

#include<string>
#include<iostream>


using namespace std;
class ExtraService{
private:
    string name;

    int day,month,year,type, tax;
    string Extraservice;
public:
    int cost=2000;




    void set_service_cost();
    int get_service_cost();
    void get_service_date();
    void AvailableService();
    string getAvailableService();
    int get_service_type();
    int claculate_TotalPayment(int x);




};
class billing:public ExtraService
{};


#endif //UNTITLED_A_H
