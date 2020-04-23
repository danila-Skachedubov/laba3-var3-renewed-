#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED


using namespace std;
class plane: public transportVehicle
{
private:
int time;

public:
plane();
plane(int tnumber,int tspeed, int time);
bool set_time(const int ptime);
int get_time() const;
void operator=(plane& obj);
plane(const plane& others);
void print() const override;
};

#endif // PLANE_H_INCLUDED

