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
cout<<"������:"<<endl;
cout<<"�����:"<<model<<endl<<"��������:"<<speed<<endl<<"���������� ����: "<<number<<endl<<endl<<endl;
}
