#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int survey[4][4];
    int car_code,citycode;
   for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            survey[i][j] = 0;
        }
    }
    cout<<"\n\n\t\tSUREVY OF 4 CAR IN 4 DIFFERENT CITIES"<<endl;
    for(int i = 0;i<4;i++)
    {
        if(i==0)
            cout<<"\n\nFor Delhi-->\n";
       else if(i==1)
            cout<<"\n\nFor Mumbai-->\n";
       else if(i==2)
            cout<<"\n\nFor chennai-->\n";
       else if(i==3)
            cout<<"\n\nFor Kolkata-->\n";

        for(int j = 0;j<4;j++)
        {
            if(j==0)
            cout<<"\nNo of Maruti-K10 = ";
            if(j==1)
                cout<<"No of Zen-Astelo = ";
            if(j==2)
                cout<<"No of Wagnor = ";
            if(j==3)
                cout<<"No of Maruti-SX4 = ";

            cin>>survey[i][j];
        }
    }
    cout<<"\n\n\n"<<endl;
    cout<<setw(23)<<"Maruti-K10\t"<<" Zen-Astelo\t"<<"Wagnor\t"<<"Maruti-SX4\t"<<endl;
     for(int i = 0;i<4;i++)
    {
        if(i==0)
            cout<<"Delhi    ";
        else if(i==1)
            cout<<"Mumbai   ";
        else if(i==2)
            cout<<"chennai  ";
        else if(i==3)
            cout<<"Kolkata  ";
        for(int j = 0;j<4;j++)
        {
            
           
            cout<<setw(10)<<survey[i][j]<<"  ";
        }
        cout<<endl;
    }
      cout<<"\n\n\n"<<endl;
    return 0;
}