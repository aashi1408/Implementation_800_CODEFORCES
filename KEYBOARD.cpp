//KEYBOARD

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;
	string s;
	cin>>s;
	
	string left = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string right= "wertyuiop[sdfghjkl;'xcvbnm,./?";
	
	for(int i=0 ; i<s.length() ; i++)
	{
		if(ch == 'L')//we have given left shifted by one
		//print the original message by shifting right by one
		{
			for(int j=0 ; j<left.length() ; j++)
			{
				if(left[j] == s[i])
				{
					cout<<right[j];
				}
			}
		}
		else//ch = R
		{
			for(int j=0 ; j<right.length() ; j++)
			{
				if(right[j] == s[i])
				{
					cout<<left[j];
				}
			}
		}
	}
	
}


















