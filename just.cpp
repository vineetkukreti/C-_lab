#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A()
    {
        cout<<"Constructor of base class"<<endl;
    }
    A(int x)
    {
        a = x;
        cout<<"Constructor of base class\n"<<endl;
    }
};
