#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int i, len;
  	int max = -1;
  	char result;
  	
  	int freq[256] = {0}; 
  	
	cout << "\nPlease Enter the String to Find Max Occur Char  =  ";
	getline(cin, str);
	
	len = str.length();
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	cout<< "\nThe Maximum Occurring Character in " << str <<" = " << result;
		
 	return 0;
}