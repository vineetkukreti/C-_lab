#include<iostream>
using namespace std;
#define size 10
class Subscript
{
    int a[size];
    public:
    Subscript()
    {
        static int i;
        for(i=0;i<size;i++)
        {
            a[i] = i;
        }
    }
int operator[](int);

};
int Subscript:: operator[](int i )
{
    if(i>size)
    {
        cout<<"Index out of bound\n\n"<<endl;
        return -1;
    }
    return a[i];
}
int main()
{
    Subscript a;
    cout<<"Value of A[2] = "<<a[2]<<endl;//a.operatpr[](2)
    cout<<"Value of A[2] = "<<a[1]<<endl;
    cout<<"Value of A[2] = "<<a[11]<<endl;
}