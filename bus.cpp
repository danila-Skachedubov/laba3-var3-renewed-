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
        cout<<"Автобус:"<<endl;
        cout<<"Марка:"<<model<<endl<<"Скорость:"<<speed<<endl<<"Количество мест: "<<number<<endl<<endl<<endl;
    }
