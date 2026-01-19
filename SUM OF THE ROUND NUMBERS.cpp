//SUM OF ROUND NUMBERS

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;//no. of tests
	cin>>n;
	
	int x;
	for(int i=1 ; i<=n ; i++)
	{
		cin>>x;
		int temp = x;
		int count = 0;//min ek cnt to hoga pr kiska?
		//non zero digit
		
		while(temp!=0)
		{
			int ld = temp%10;
			if(ld!=0)
				++count;
			temp/=10;
		}
		cout<<count<<"\n";
		
		int power = 0;
		/* accha power 0 kyun hai kyunki at the first last digit
		9 * 10 ki pow 0 means 1 that is 9 * 1 is right
		*/
		//temp2 ki avashyakta ni
		while(x!=0)
		{
			int ld = x%10;
			if(ld !=0)
			{
				cout<<ld*pow(10,power);
				cout<<" ";
//				power++;//hr iteration me ++ honi chiye
			}
			power++;
			x/=10;//ab aage to pohochna hi hai na
			//this is like i++
		}
		cout<<"\n";
	}
}





















