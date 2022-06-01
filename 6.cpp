//Write C++ program to reverse each word of string. 
// e.g. Input- I love my India
//      Output – I evol ym aidnI)

#include<iostream>
using namespace std;
int main()

{
    string s,t="";
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<"Inputed String : "<<s<<endl;
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' '&s[i]!='\0')
        {
            t = s[i]+t;
        }
        else
        {
            cout<<t<<" ";
            t = "";
        }
    }
    cout<<t;
    
    return 0;
}