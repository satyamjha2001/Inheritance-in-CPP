#include<iostream>
#include<cmath>
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
class Shape
{
private:
    string shapeName;

public:
    void setShapeName(string n)
    {
        shapeName= n;
    }
    string getShapeName()
    {
        return shapeName;
    }
};
class StraightLine:public Shape
{
    private:
     Coordinate c1,c2;
    public:
     void setLine(Coordinate c1,Coordinate c2)
     {
        this->c1=c1;
        this->c2=c2;
     }
     double getDistance()
     {
        return c1.getDistance(c2);
     }
     void showLine()
     {
        c1.showCordinate();
        c2.showCordinate();
     }

};
int main() {
Coordinate c1,c2;
c1.setData(4,5);
c2.setData(10,12);
StraightLine s1;
s1.setLine(c1,c2);
cout<<endl<<"distance = "<<s1.getDistance()<<endl;
s1.showLine();
return 0;
}