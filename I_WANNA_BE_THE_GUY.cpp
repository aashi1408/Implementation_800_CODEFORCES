//I_WANNA_BE_THE_GUY

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int p,q;
	int freq[101]= {0} ;
	cin>>p;
	while(p--)
	{
		int x;
		cin>>x;
		freq[x] ++;
	}
	
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		freq[x] ++;
	}
	for(int i=1 ; i<=n ; i++)
	{
		if(freq[i] == 0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}
