//COLORFUL STONES ( SIMPLIFIED EDITION )

#include<iostream>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	
	int pos = 1 ;//as it's 1 based qs 
	//and it's mentioned that Squirrel Liss is standing on the first stone
	
	int j = 0;
	
	for(int i=0 ; i<t.length() ; i++)
	{
		if(s[j] == t[i])
		{
			pos++;
			j++;
		}
	}
	cout<<pos;
}
