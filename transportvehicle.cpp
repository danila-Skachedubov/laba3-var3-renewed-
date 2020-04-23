#include <iostream>
#include"transportvehicle.h"
using namespace std;

transportVehicle::transportVehicle()
    {
    number=10;
    speed=100;
    }
transportVehicle::transportVehicle(int number, int speed)//:transportVehicle()
    {
    set_number(number);
    set_speed(speed);
    }
bool transportVehicle::set_number(const int tnumber)
    {
        if (tnumber>0)
            {
                number=tnumber;
                return true;
            }
        number=5;
        return false;
    }
int transportVehicle::get_number() const
    {
        return number;
    }
bool transportVehicle::set_speed(const int tspeed)
    {
        if (tspeed>0)
            {
                speed=tspeed;
                return true;
            }
        speed=90;
        return false;
    }
int transportVehicle::get_speed() const
    {
        return speed;
    }
transportVehicle::transportVehicle(const transportVehicle& others)
    {
        this-> number=others.number;
        this->speed=others.speed;
    }
void transportVehicle::operator=(transportVehicle& obj)
    {
        number=obj.number;
        speed=obj.speed;
    }

