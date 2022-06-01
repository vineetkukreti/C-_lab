#include<iostream>
using namespace std;
class A
{
    public:
       
        int x = 10;
    protected:
        int y = 34;
    private:
        int z = 30;
};
//-------------> for public
class B:public A{
    public:
    void display()
    {   cout<<" \n\nFor public mode "<<endl;
        cout<<"Value of public member X :"<<x<<endl;
        cout<<"Value of protected member y :"<<y<<endl;
        cout<<"Value of private member z is not accessable\a\a\a\n\n";
    }
};
//------------> for protected
class C:protected A{
    public:
    void display()
    {   cout<<" \n\nFor protected mode "<<endl;
        cout<<"Value of public member X :"<<x<<endl;
         cout<<"Value of protected member y :"<<y<<endl;
        cout<<"Value of private member z is not accessable\a\a\a\n\n";
    }
};
//-------------> for private
class D:private A{

    public:
    void display()
    {   cout<<" \nFor private mode\n"<<endl;
        cout<<"\n\nValue of public member X :"<<x<<endl;
        cout<<"Value of protected member y :"<<y<<endl;
        cout<<"Value of private member z is not accessable\a\a\a\n\n";
    }
};

int main()
{
   
    A a();
    B obj;
    obj.display();
    C obj1;
    obj1.display();
    D obj2;
    obj2.display();
    return 0;
}