#include<iostream>
using namespace std;
class Circle
{
    private:
     float radius;
    public:
     void setRadius(float r)
     {
        radius=r;
     }
     float getRadius()
     {
        return radius;
     }
     float getArea()
     {
        return 3.14*radius*radius;
     }
};
class ThickCircle:public Circle
{
    private:
     float thickness;
    public:
     void setThickness(float t)
     {
        thickness=t;
     }
     float getThickness()
     {
        return thickness;
     }
     float getArea()
     {
        return ((3.14*(getRadius()+thickness)*(getRadius()+thickness))-(Circle::getArea()));
     }

};
int main() {
ThickCircle t;
t.setRadius(5);
t.setThickness(1);
cout<<endl<<"Area of thick Circle"<<t.getArea();
cout<<endl<<"Area of Normal Circle"<<t.Circle::getArea();
return 0;
}