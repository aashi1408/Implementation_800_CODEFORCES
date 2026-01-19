//BOY OR GIRL

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	char freq[123] = {0};//int kr skte hai
	//in future will change this way...
	//lowercases are from 97 to 122
	for(int i=0 ; i<s.length() ; i++)
	{
		freq[s[i]]++;
	}
	int distinct_cnt = 0;
	for(int j=97 ; j<=122 ; j++)
	{
		if(freq[j] >= 1)
			distinct_cnt++;
	}
	
	if(distinct_cnt % 2 ==0) 
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}









































