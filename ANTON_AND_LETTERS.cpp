//ANTON_AND_LETTERS

#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	int freq[26] = {0} ;
	//a b c --- z
	//0 1 2 --- 25
	for(int i=1 ; i<=s.length() - 2 ; i+=3)
	{
		freq[s[i] - 97] ++;
	}
	int distinct = 0 ; //letters
	
	for(int i=0 ; i<26 ; i++)
	{
		if(freq[i] != 0)
		{
			distinct ++;
		}
	}
	cout<<distinct;
	
	return 0;
}
