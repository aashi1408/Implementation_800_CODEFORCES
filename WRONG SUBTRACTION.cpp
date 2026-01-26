//WRONG SUBTRACTION

#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	for(int i=1 ; i<=k ; i++)
	{
		int ld = n % 10;
		
		if(ld == 0)
		{
			n/=10;
		}
		else//means ld is non zero
		{
			n-=1;
		}
	}
	cout<<n;
	//basic sa simple implementation qs 800
	
}
