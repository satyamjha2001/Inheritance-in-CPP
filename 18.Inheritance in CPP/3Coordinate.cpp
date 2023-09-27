#include<iostream>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
     float x,y;
    public:
     void setData(float x,float y)
     {
        this->x=x;
        this->y=y;
     }
     void showCordinate() 
     { cout<<"\n("<<x<<","<<y<<")";}
     float getDistance()
     {
        return sqrt(pow(x,2)+pow(y,2));
     }
     float getDistance(Coordinate C)
     {
        return sqrt(pow((x-C.x),2)+pow((y-C.y),2));
     }
};
int main() {
Coordinate c1,c2;
c1.setData(4,5);
c2.setData(15,13);
cout<<endl<<"Distance from origin = "<<c1.getDistance();
cout<<endl<<"Distance between two coordinates = "<<c1.getDistance(c2);
return 0;
}