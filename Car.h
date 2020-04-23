#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
using namespace std;
class car: public transportVehicle
{
protected:
string model;

public:
car();
car(int number,int speed,string model);
bool set_model(const string cmodel);
string get_model()const;
void operator=(car& obj);
car(const car& others);
};


#endif // CAR_H_INCLUDED
