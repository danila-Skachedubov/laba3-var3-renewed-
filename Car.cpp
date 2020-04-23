#include <iostream>
#include"transportvehicle.h"
#include"Car.h"
using namespace std;
car::car():transportVehicle()
    {
        this->model="Ford";
    }
car::car(int number, int speed, string model):transportVehicle(number, speed)
    {
        set_model(model);
    }
bool car::set_model(const string cmodel)
    {
            model=cmodel;
    }
string car::get_model() const
    {
        return model;
    }
car::car(const car& others)
    {
        this-> model=others.model;
    }
void car::operator=(car& obj)
    {
        model=obj.model;
        number=obj.number;
        speed=obj.speed;
    }
