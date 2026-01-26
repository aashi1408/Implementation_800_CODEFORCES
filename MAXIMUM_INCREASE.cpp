//MAXIMUM INCREASE

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
//	int arr(n);
	vector<int> v(n);
	for(int i=0 ; i<n ; i++ )
	{
		cin>>v[i];
	}
	int curr = 1 , ans = 1;
	
	for(int i=1 ; i<n ; i++)
	{
		if(v[i]>v[i-1])
		{
			curr++;
		}
		else curr = 1;
		
		ans = max(ans,curr);
	}
	cout<<ans;
}
