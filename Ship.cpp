#include"transportvehicle.h"
#include"Ship.h"
using namespace std;
ship::ship():transportVehicle()
{
    this->displacement=555;
}
ship::ship(int number, int speed, int displacement):transportVehicle(number, speed)
{
set_displacement(displacement);
}
bool ship::set_displacement(const int pdisplacement)
{
    if(pdisplacement>0)
    {displacement=pdisplacement;
    return true;
    }
    displacement=1000;
}
 int ship::get_displacement() const
{
    return displacement;
}
ship::ship(const ship& other)
    {
        this-> displacement=other.displacement;
    }
void ship::operator=(ship& obj)
{
    displacement=obj.displacement;
    number=obj.number;
    speed=obj.speed;
}
void ship::print()const
{
cout<<"Корабль:"<<endl;
cout<<"Количество мест: "<<number<<endl<<"Скорость:"<<speed<<endl<<"Водоизмещение:"<<displacement<<endl<<endl<<endl;
}

