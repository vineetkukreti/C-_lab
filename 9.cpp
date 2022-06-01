# include<iostream>
# include<iomanip>
using namespace std;
class bank
	{
	string name;
	int acno;
	string actype;
	float balance;
	public:
	// Constuctor
	bank()
	{
		// cout<<"Constructor Invoked !";
		// acno = 0000;
		// balance = 0.0;
	}
    bank(long  Accno,string Name,string Actype)
{
    name = Name;
	acno = Accno;
	actype = Actype;
	

}
	void init();
	void deposit();
	void withdraw();
	void disp_det();
    void disp_dis();
	};

void bank :: disp_dis()
{
cout<<"------------------------------------------"<<endl;
cout<<" ========== Account Details ========== \n";
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Balance               : "<<balance<<endl;
cout<<"------------------------------------------"<<endl;
}
//member functions of bank class
void bank :: deposit()
{
float more;
cout <<"	Depositing";
cout<<"Enter the amount to deposit : ";
cin>>more;
balance+=more;
}
void bank :: withdraw()
{
float amt;
cout<<"	Withdrwal";
cout<<"Enter the amount to withdraw : ";
cin>>amt;
if(amt > balance)
    cout<<"Unsuccessful"<<endl;
else
    balance-=amt;
    cout<<"Withdrawal of "<<amt<<" Successful"<<endl;

}
void bank :: disp_det()
{
cout<<"------------------------------------------"<<endl;
cout<<" ========== Account Details ========== \n";
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Account Number        : "<<acno<<endl;
cout<<"Account Type          : "<<actype<<endl;
cout<<"Balance               : "<<balance<<endl;
cout<<"------------------------------------------"<<endl;
}
// main function , exectution starts here
int main()
{
long Accno,Balance;
string Name,Actype;

cout<<"New Account\n";
cout<<"Enter the Name of the depositor : ";
cin.sync();// it is used to clear buffer
getline(cin,Name);
cout<<"Enter the Account Number : ";
cin>>Accno;
cout<<"Enter the Account Type : (CURR/SAVG/FD/RD/DMAT) ";
cin>>Actype;
cout<<"Enter the Amount to Deposit : ";
cin >>Balance;
bank obj(Accno,Name,Actype);

int choice =1;


while (choice != 0 )
    {
        cout<<"\n\n\n========\tBank System\t========"<<endl;
        cout<<"\t::MAIN MENU::\n";
        cout<<setw(22)<<"Enter 0 to exit"<<endl;
        cout<<setw(20)<<"1. Deposit."<<endl;
        cout<<setw(20)<<"2. Withdraw"<<endl;
        cout<<setw(26)<<"3. See A/c Status"<<endl;
        cout<<setw(19)<<"4. display"<<endl;
        cout<<setw(20)<<"Enter your choice = ";
        cin>>choice;
        switch(choice)
        {
            case 0 :obj.disp_det();
                cout<<"EXITING PROGRAM.";
                break;
            case 1 : obj.deposit();
                break;
            case 2: obj.withdraw();
                break;
            case 3 : obj.disp_det();
                break;
            case 4: obj.disp_dis();
                break;
            default: cout<<"Illegal Option"<<endl;
            
        }
    }
return 0;
}