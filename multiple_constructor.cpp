#include<iostream>
using namespace std;
class parent
{
    int a;
    public:
    parent()
    {
        cout<<"parent constuctor is running ....."<<endl;
    }
    parent(int x)
    {
        a = x;
    }
};
class parent1:public parent
{
    int b;
    public:
     parent1():parent()
    {
        cout<<"parent1 constuctor is running ....."<<endl;
    }
    parent1(int x,int y):parent(y)
    {
        b = x;
    }
};
class child:public parent1
{
int c;
public:
child():parent1()
{
    cout<<"child constuctor is running ....."<<endl;
}
child(int a,int b,int c):parent1(b,a)
{
    this->c  = c;
}
void display()
{
    
}
};
int main()
{

}