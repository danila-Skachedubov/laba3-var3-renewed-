#include"transportvehicle.h"
#include"Plane.h"
using namespace std;
plane::plane():transportVehicle()
    {
        this->time=8;
    }
plane::plane(int number, int speed, int time):transportVehicle(number, speed)
    {
        set_time(time);
    }
bool plane::set_time(const int ptime)
    {
        if(ptime>0)
            {
                time=ptime;
                return true;
            }
        time=1;
    }
 int plane::get_time() const
    {
        return time;
    }
plane::plane(const plane& other)
    {
        this-> time=other.time;
    }
void plane::operator=(plane& obj)
    {
        time=obj.time;
        number=obj.number;
        speed=obj.speed;
    }
void plane::print()const
    {
        cout<<"Самолёт:"<<endl;
        cout<<"Количество мест: "<<number<<endl<<"Скорость:"<<speed<<endl<<"Время полеты:"<<time<<endl<<endl<<endl;
    }

