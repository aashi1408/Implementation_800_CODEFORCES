//SMALLEST PAIR

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;//no. of tests
	cin>>t;
	
	while(t--)
	{
		int N;
		cin>>N;
		vector<int> v(N+1);//as we are neglecting the zeroth index
		v[0] = 0;
		for(int i=1 ; i<=N ; i++)
			cin>>v[i];
			
		int mn = INT_MAX;
		for(int i=1 ; i<N ; i++)
		{
			for(int j = i+1 ; j<=N ; j++)
			{
				int ans = v[i] + v[j] + j - i ;
				mn = min(mn , ans);
			}
		}
		cout<<mn<<endl;
	}
	return 0;
}
