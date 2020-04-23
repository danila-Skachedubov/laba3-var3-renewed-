#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED
#include <iostream>
using namespace std;
class bus:public car
{
public:
bus();
bus(int number, int speed, string model);
void print()const override;
void operator=(bus& obj);
};


#endif // BUS_H_INCLUDED
