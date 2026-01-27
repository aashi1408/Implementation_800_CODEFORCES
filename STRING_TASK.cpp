//STRING TASK

/*THERE ARE THREE TASKS FOR PETYA
deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
*/

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	//we'll first perform 1st and 3rd task in a single loop
	//ab ye string s ke uper ki wo apne len ko dynamically update krle
	//as we are gonna perform deleting aka erasing , inserting operations
	//so we can't do int n = len of s
//	for( int i= ; i<s.length() ; i++)
	/*MISTAKE : erase krne ke baad ++ krdiya char miskrdia
	abae , a is erased now s is bae i is 0 after ++ i becomes 1 
	b is now missed
	SOLN: peeche se erase krna start kro!!*/
	//will delete all vowels and replace upper case consonants to lowercases
	for(int i=s.length()-1 ; i>=0 ; i--)
	{ 
		if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'
		 or s[i]=='Y'  or s[i]=='a' or s[i]=='e' or s[i]=='i' 
		 or s[i]=='o' or s[i]=='u' or s[i]=='y')//vowel removal procedure
		 {
		 	s.erase(i,1);//removes 1 char starting from index i
		 }
	}
	for(int i=0 ; i<s.length() ; i++)
	{
	 	if(s[i]>=65 and s[i]<=90 ) //ab ye to consonant hi hoga but
//		 uppercase ko hi change krna hai
		//lower case me
		{
			s[i] += 32;//32 is the diff b/w A and a	
		}
	}
	for(int i=0 ; i<s.length() ; i+=2)
	{
//		s.insert(i,1,'.');
		s.insert(i,".");
	}
	cout<<s;
}
