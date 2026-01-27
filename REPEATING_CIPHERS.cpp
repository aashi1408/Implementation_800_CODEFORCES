//REPEATING CIPHER

#include<iostream>
using namespace std;

int main()
{
	int n;//len of s;
	cin>>n;
	string s;//encrypted string
	cin>>s;
	
	string new_s = "";
	
	int k = 0;
	
	for(int i=0 ; i<n ; i += k)
	{
		new_s.push_back(s[i]);
		k++;
	}
	
	cout<<new_s;
	
	return 0;
}
