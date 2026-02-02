//PETYA AND STRINGS;

#include<iostream>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	//both a and b are of same size
	//dono ko lowercase krdete hai
	for(int i=0 ; i<a.length() ; i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	//letters cases doesn't matter for this qs
	//compare lexicographically
	//simple meaning: dictionary or alphabetical order that's it
	if(a < b) cout<<-1;
	else if(a > b) cout<<1;
	else cout<<0;//both are equal
	
	return 0;
}
