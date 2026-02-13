 //C+=

#include<iostream>
using namespace std;

int main()
{
	int t;//no. of tests
	cin>>t;
	
	int a,b,n;
	
	while(t--)
	{
		cin>>a>>b>>n;
		int mn = min(a,b);
		int mx = max(a,b);
		int count = 0;
		bool flagie = false;
		
		while(mn <= n and mx <= n)//strictly greater than
		{
			if(mn <= n)
			{
				mn += mx;
				count++;
			}
			if(mn > n or mx > n) 
			{
				break;
			}
			if(mx <= n)
			{
				mx += mn;
				count++;
			}
		}
		cout<<count<<endl;
	}
}

