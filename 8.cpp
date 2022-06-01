#include<iostream>
#include<string>
using namespace std;
class TellCall
{
    int phono,n;
    float amt;
    string sname;
    public:
    TellCall(int phono,int n,string sname)
    {
        this->phono = phono;
        this->n = n;
        this->sname = sname;
        Compute();
    }  
    void Compute();
    void display()
    {
        cout<<"\n\n\n\t\t\tPhone billing Reciept\n"<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"Subscriber Name   =   "<<sname<<endl;
        cout<<"No of calls       =   "<<n<<endl;
        cout<<"phono             =   "<<phono<<endl;
        cout<<"Amt               =   "<<amt<<endl;
        cout<<"---------------------------------------"<<endl;
    }
};
void TellCall::Compute()
{ 
    if(1<=n<=100)
    {
      //  amt = 500;
    }
    else if(n>=101 and n<=200)
    {
        amt = n*1+500;
    }
     else if(n>=201 and n<=300)
    {
        amt = n*1.20+500;
    }
      else if(n>300)
    {
        amt = n*1.50+500;
    }
     
}
int main()
{   int pno,no_of_calls;
    cout<<"\n\n\t\t\tPhone billing Reciept\n"<<endl;
     cout<<"---------------------------------------"<<endl;
    string s_name;
    cout<<"Enter Subscriber Name    =  ";
    cin>>s_name;
    cout<<"Enter the phone number   = ";
    cin>>pno;
    cout<<"Enter No of calls        = ";
    cin>>no_of_calls;
 
    TellCall a(pno,no_of_calls,s_name);
    a.display();
    

    return 0;
}