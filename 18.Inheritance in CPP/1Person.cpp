#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
     char name[25];
     int age;
    protected:
     void setName(char n[])
     {
        strcpy(name,n);
     }
     void setAge(int a)
     {
        age=a;
     }
     char* getName()
     {
        return name;
     }
     int getAge()
     {
        return age;
     }
     
};
class Employee:public Person
{
   private:
     float salary;
   public:
    void setEmployee(char n[],int a,float s)
    {
        setName(n);
        setAge(a);
        salary=s;
    }
    void showEmployee()
    {
        cout<<endl<<getName()<<" "<<getAge()<<" "<<salary;
    }
};
int main() {
Employee e1;
char ch[]="Ansh";
e1.setEmployee(ch,20,100000000);
e1.showEmployee();
return 0;
}