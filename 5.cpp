#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   
    int temperature[5][10];
    int min,max,daymin,daymax;
    string minC,maxC;
    string cities[] = {"Delhi","Mumbai","Chennai","Kolkata","Dehradun"};
     for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<10;j++)
        {
            temperature[i][j] = 0;
        }
    }

    cout<<"\n\n\t\tSUREVY OF 4 CAR IN 4 DIFFERENT CITIES"<<endl;
    for(int i = 0;i<5;i++)
    {
        if(i==0)
            cout<<"\n\nFor Delhi-->\n";
       else if(i==1)
            cout<<"\n\nFor Mumbai-->\n";
       else if(i==2)
            cout<<"\n\nFor chennai-->\n";
       else if(i==3)
            cout<<"\n\nFor Kolkata-->\n";
        else if(i==4)
            cout<<"\n\nFor Dehradun-->\n";

        for(int j = 0;j<10;j++)
        {
            cout<<"Temperature at Day "<<j+1<<"= ";

            cin>>temperature[i][j];
        }
    }
    cout<<"\n\n"<<endl;
    cout<<"---------------------Temperature Records---------------------"<<endl;
    cout<<setw(17)<<"Delhi"<<setw(8)<<"Mumbai"<<setw(10)<<"Chennai"<<setw(10)<<"Kolkata"<<setw(10)<<" Dehradun"<<endl;
    for(int i = 0;i<10;i++)
    {
        cout<<"Day "<<i+1<<" ";
        for(int j=0;j<5;j++)
        {
            cout<<setw(8)<<temperature[j][i]<<" ";
        }
        cout<<endl;
    }
    max =  temperature[0][0];
    for(int i = 0;i<5;i++)
    {
      
        for(int j=0;j<10;j++)
        {
           if(max < temperature[i][j])
           {
               max = temperature[i][j];
               maxC = cities[i];
               daymax = j+1;
           }
           if(min > temperature[i][j])
           {
               min = temperature[i][j];
               minC = cities[i];
               daymin = j+1;
           }
        }
        
    }
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<"\nThe highest Temperature was Recorded in day "<<daymax<<" is "<<max<<" Celsius in "<<maxC<<" city"<<endl;
    cout<<"The Lowest Temperature was Recorded in "<<daymin<<" is "<<min<<" in "<<minC<<" city"<<endl;
    return 0;
}