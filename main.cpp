#include <iostream>
#include"transportvehicle.h"
#include"Car.h"
#include"Passengercar.h"
#include"Plane.h"
#include"Ship.h"
#include"bus.h"
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
transportVehicle*pointer;
char x;
cout<<"Выберите вид транспорта, о котором хотите узнать информацию: 1)Легковая машина 2)Автобус 3)Самолёт 4)Корабль "<<endl<<endl;
//while (x!=8)
//{
   cin>>x;
    switch(x)
        {
        //case 0:
           // return 0;
        case '1': pointer = new passengercar(5, 100, "Kia");
        break;
        case '2': pointer = new bus (30, 50, "Vaz");
        break;
        case '3': pointer = new plane (80, 400, 5);
        break;
        case '4': pointer = new ship (200, 45, 5000);
        break;
        default: pointer = 0;
        }
        if(pointer)
        {
            pointer->print();
        }
//}
return 0;
}
