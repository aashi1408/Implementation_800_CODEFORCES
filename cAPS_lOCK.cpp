//cAPS lOCK

#include<iostream>
using namespace std;
/*Let's consider that a word has been typed with the 
Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.
*/
//misunderstood the qs 2nd time
int main()
{
	string s;
	cin>>s;
	
	string s1,s2;//poora upper case or all letters upper except first resp
	s1.resize(s.length());
	s2.resize(s.length());
	
	for(int i=0 ; i<s.length() ; i++)
	{
		s1[i] = toupper(s[i]);
//		s2[i] = tolower(s[i]);//misunderstood qs
	}
	s2 = s1;
	s2[0] += 32;
	if(s1 == s or s2 == s)//originally s is fullt uppercase or lowercase
	{
		for( int j=0 ; j<s.length() ; j++)
		{
			if(s[j] >= 'A' and s[j] <= 'Z')
			{
				s[j] += 32;
			}
			else//lower hai!
			{
				s[j] -= 32;
			}
		}
	}
//	else//HM jo lowercase me hai poora uske first letter ko
//	//upper krdenge bs aur hogya!!
//	{
//		cout<<s;     no need of else
//	}
	cout<<s;
	return 0;
}
