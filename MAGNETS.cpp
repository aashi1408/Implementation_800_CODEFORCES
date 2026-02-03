//MAGNETS

#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int n;//number of magnets
	cin>>n;
	vector<string> magnets(n);
	
	for(int i=0 ; i<n ; i++)//take input of magnets
	{
		cin>>magnets[i];
	}
	int groups = 1;//atleast 1 magnet do exist
	
	for(int i=1 ; i<n ; i++)
	{
		if(magnets[i] != magnets[i-1])
		{
			groups++;
		}
	}
	cout<<groups;
}

