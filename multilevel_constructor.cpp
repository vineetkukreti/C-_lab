#include<iostream>
using namespace std;
class parent1
{
    protected:
    int a;
    public:
    parent1()
    {  a = 0;
        cout<<"Constructor of parent1 class"<<endl;
    }
    parent1(int x)
    {
        a = x;
      
    }
};
class parent2
{
     protected:
    int b;
    public:
    parent2()
    {
        b = 0;
        cout<<"Constructor of parent2 class"<<endl;
    }
    parent2(int x)
    {
        b = x;
      
    }
};
class child:public parent1,public parent2
{
    protected:
    int c;
    public:
    child():parent1(),parent2()
    {
        c= 0;
        cout<<"Constructor of child"<<endl;
    }
    child(int a,int b,int c):parent1(a),parent2(b)
    {
      this->c= c;    
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
    
};
int main()
{
   // child obj;
   child  obj1 = child(12,34,01);
      obj1.display();
     obj1 = child();
   obj1.display();
    return 0;
}