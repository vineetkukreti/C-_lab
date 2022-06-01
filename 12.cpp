// 12 Create a class of Employ, in that considers their names, age, and employee code. In the same
// class, create a - (subtract) overloading operator to find the age gap of two employees?
// Example:
// [Employ is a Class in C++]
// Employ e1("Nitin", 30, "E001");
// Employ e2("Amit", 25, "E002");
// int diff = e1 - e2

#include<iostream>
#include<string>
using namespace std;
class Employ
{
    string name,empcode;
    int age;
    public:
    Employ(string name,string empcode,int age)
    {
        this->name = name;
        this->empcode = empcode;
        this->age = age;
    }
    int operator-(Employ);
};
int Employ::operator-(Employ e)
{
    int diff = age - e.age;
    return diff;
}
int main()
{
    Employ e1("Nitin","E001",30);
    Employ e2("Amit","E002",34);
    int diff = e1-e2;//e1.operator-(e2)
    cout<<"diff = "<<diff<<endl;

}