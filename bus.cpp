#include <iostream>
#include"transportvehicle.h"
#include"Car.h"
#include"bus.h"
using namespace std;
bus::bus():car(){}

bus::bus(int number, int speed, string model):car(number, speed, model)
{}

void bus::operator=(bus& obj)
    {
        number=obj.number;
        speed=obj.speed;
        model=obj.model;
    }
void bus::print()const
    {
        cout<<"�������:"<<endl;
        cout<<"�����:"<<model<<endl<<"��������:"<<speed<<endl<<"���������� ����: "<<number<<endl<<endl<<endl;
    }
