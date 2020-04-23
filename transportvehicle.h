#ifndef TRANSPORTVEHICLE_H_INCLUDED
#define TRANSPORTVEHICLE_H_INCLUDED
#include <iostream>
using namespace std;
class transportVehicle
{
protected:
    int number;
    int speed;

public:
    transportVehicle();
     transportVehicle(int number, int speed);
    bool set_number(const int tnumber);
    bool set_speed(const int tspeed);
    int get_number() const;
    int get_speed() const;
    transportVehicle(const transportVehicle& others);
    virtual void print() const =0;
     void operator=(transportVehicle& obj);

};


#endif // TRANSPORTVEHICLE_H_INCLUDED
