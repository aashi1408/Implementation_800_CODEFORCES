//ANTON AND POLYHEDRONS

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	
	int sum = 0;//no. of total faces of Polyhedrons Anton have
	for(int h=1 ; h<=n ; h++ )
	{
		cin>>s;
		if(s[0] == 'T')
			sum += 4;
		else if(s[0] =='C')
			sum+=6;
		else if(s[0] == 'O')
			sum+=8;
		else if(s[0] == 'D')
			sum+=12;
		else//I
			sum+=20;
	}
	cout<<sum;
}
