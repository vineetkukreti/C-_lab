#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n = 5;
    int m = 10;
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cout<<setw(2)<<i<<" * "<<j<<" = "<<setw(2)<<i*j<<setw(2)<<" ";
        }
        cout<<"\n";
    }
}