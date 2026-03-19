//TRANSLATION

#include<iostream>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;//
	
	int j = 0;//start of s
	int i = t.length() - 1 ; //end of t
	
	//for larger size of input we can also check 
	//if s.length() != t.length() and can stop and there only
	if(s.length() != t.length())
	{
		cout<<"NO";
		return 0;
	}	
	
//	while(j != t.length() - 1 && i != 0)//or? ||<-- skipping the last cdn
	while(j <= t.length() - 1  && i >= 0)
	{
		if(s[j] != t[i])
		{
			cout<<"NO";
			return 0;
		}
		j ++ , i -- ;//
	}
	cout<<"YES";
	return 0;
}
