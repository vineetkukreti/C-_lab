#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"\n\nThis is a vehicle"<<endl;
    }
    ~vehicle()
    {
    cout<<"This is a vehicle destructor"<<endl;
    }
};
class four_wheeler
{
    public:
    four_wheeler()
    {
        cout<<"This is a four_wheeler"<<endl;
    }
    ~four_wheeler()
    {
    cout<<"This is a four_wheeler destructor"<<endl;
    }
};
class car :public vehicle,public  four_wheeler
{
    public:
    car()
    {
        cout<<"This is a car"<<endl;
    }
    ~car()
    {
    cout<<"\n\nThis is a car destructor"<<endl;
    }
};
int main()
{
    car obj;
    
}
