// #include<iostream>
// using namespace std;
// class Compare
// {
//     int age;
//     public:
//     Compare(int age)
//     {
//         this->age = age;
//     }
//     void operator==(Compare);
// };
// void Compare::operator==(Compare ag)
// {
//     if(age==ag.age)
//     {
//         cout<<"Equal"<<endl;
//     }
//     else
//     {
//         cout<<"Not equal"<<endl;
//     }
// }
// int main()
// {
//     Compare a1(20),a2(20);
//     a1==a2;//a.operator==(b)
//     return 0;
// }
#include<iostream>
using namespace std;
class Compare
{
    int age;
    public:
    Compare(int age)
    {
        this->age = age;
    }
    friend void operator==(Compare a,Compare b);
};
void operator==(Compare a,Compare b)
{
    if(a.age == b.age)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not equal"<<endl;
    }
}
int main()
{
    Compare a1(20),a2(20);
    a1==a2;//a.operator==(b)
    return 0;
}