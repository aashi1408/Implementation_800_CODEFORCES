//HELPFUL MATHS

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int n = s.length();
	int p = (n+1)/2;//p-->no. of operands
	
	string new_s;
	new_s.resize(p);
	
	int j = 0;
	
	for(int i=0 ; i<n ; i++)
	{
		if(i%2 == 0)
		{
			new_s[j] = s[i];
			j++;
		}
	}
	//now sort 
	sort(new_s.begin(),new_s.end());
	
	int k = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(i % 2 == 0)
		{
			s[i] = new_s[k];
			k++;
		}
		else 
			s[i] = '+';
			//no need of this else loop as already hm usi input wali 
//			string ko hi sorted numbers assign krrye hai
			//to '+' to pehle se wahi hai
	}
	cout<<s;
	
}


















