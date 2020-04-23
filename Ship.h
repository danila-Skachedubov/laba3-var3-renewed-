#ifndef SHIP_H_INCLUDED
#define SHIP_H_INCLUDED

using namespace std;
class ship: public transportVehicle
{
    private:
    int displacement;
    public:
ship();
ship(int number,int speed, int displacement);
bool set_displacement(const int pdisplacement);
 int get_displacement() const;
 void operator=(ship& obj);
 ship(const ship& others);
 void print() const override;
};
#endif // SHIP_H_INCLUDED

