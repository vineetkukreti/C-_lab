#include<iostream>
using namespace std;
class object
{
     int a;
    public:
    void setdata(int a)
    {
        this->a = a;
       
    }
    friend int operator==(object x,object y);
};
int operator==(object x,object y)
{
    return(x.a==y.a);
}
int main()
{
    object ob1,ob2;
    ob1.setdata(12);
    ob2.setdata(12);
    if(ob1==ob2)
    {
        cout<<"they are equal\n"<<endl;
    }
    else
    {
          cout<<"they are not equal\n"<<endl;
    }

    return 0;
}