#include<iostream>
using namespace std;
class A
{
    public:
    int x = 12;
       void display()
    {   
        cout<<"display function of A class"<<endl;
    }
     
};
//-------------> for public
class B:public A{
    public:
    int x;
    void display()
    {   A::display();
    cout<<A::x;
       // cout<<"display function of B class"<<endl;
    }
};


int main()
{
   
    A a();
    B obj;
    obj.display();
   
    return 0;
}