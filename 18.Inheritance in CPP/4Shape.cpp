#include <iostream>
using namespace std;
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
int main()
{
    Shape s1;
    s1.setShapeName("circle");
    cout<<"Your shape name = "<<s1.getShapeName();
    return 0;
}