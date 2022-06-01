#include <bits/stdc++.h> 
using namespace std; 
  
void revWords(string str){ 
    string s;
    
    for(int i = 0; i < str.length(); ++i){ 
        if(str[i] != ' '){ 
            s = str[i]+s;
        }
  
        else{ 
            cout << s <<" "; 
            s = "";
        } 
    } 
  
    cout << s;
}  
  
int main(){ 
    string s;
    getline(cin,s);
    
    revWords(s); 
    
    return 0; 
}
