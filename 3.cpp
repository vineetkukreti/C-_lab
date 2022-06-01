//Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all
//0s first, then all 1s and all 2s in last.

#include<iostream>
using namespace std;
int main()
{
    int a[7] = {1,1,0,2,2,1,1};
    for(int i = 0;i<7-1;i++)
    {
        for(int j = i+1;j<7;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
}
