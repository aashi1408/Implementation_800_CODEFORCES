//KOKO AND THE TRANSFORMATION

#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int x;
	int a_sum = 0 , b_sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		cin>>x;
		a_sum += x;
	}
	for(int i=0 ; i<m ; i++)
	{
		cin>>x;
		b_sum += x;
	}
	if(a_sum == b_sum) cout<<"Yes";
	else cout<<"No";
	return 0;
}
