#include<iostream>
using namespace std;
int main(){
    int survey[4][4],city_code,car_code;
    char choice='y';
    for(int i=0;i<4;i++){               //To set all value of matrix to 0 so that it can not consist garbage value
        for(int j=0;j<4;j++){
            survey[i][j]=0;
        }
    }
    while(choice!='n'){
        cout<<"----------Select From Main Menu----------";
        cout<<"\nEnter 0 for Delhi:\nEnter 1 for Dehradun:\nEnter 2 for Mumbai:\nEnter 3 for Bengluru: ";
        cin>>city_code;
        cout<<"\nEnter 0 for Merceedes:\nEnter 1 for Alto:\nEnter 2 for XUV:\nEnter 3 for RR: ";
        cin>>car_code;
        survey[city_code][car_code]++;
        cout<<"\nEnter any number to continue and n to exit:  ";
        cin>>choice;
    }
    cout<<"\tMerceedes    Alto     XUV      RR"<<endl;
    for(int i=0;i<4;i++){
        if(i==0)
            cout<<"Delhi     ";
        else if(i==1)
            cout<<"Dehradun  ";
        else if(i==2)
            cout<<"Mumbai    ";
        else
            cout<<"Bengluru  ";
        for(int j=0;j<4;j++){
            cout<<"\t"<<survey[i][j];
        }
        cout<<endl;
    }

}