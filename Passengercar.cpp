#include <iostream>
#include"transportvehicle.h"
#include"Car.h"
#include"Passengercar.h"
using namespace std;
  passengercar::passengercar():car(){}
passengercar::passengercar(int number, int speed, string model):car(number, speed, model)
{}
void passengercar::operator=(passengercar& obj)
{
    number=obj.number;
    speed=obj.speed;
    model=obj.model;
}

void passengercar::print()const
{
cout<<"МАшина:"<<endl;
cout<<"Марка:"<<model<<endl<<"Скорость:"<<speed<<endl<<"Количество мест: "<<number<<endl<<endl<<endl;
}
