//BORING APARTMENTS;

#include<iostream>
using namespace std;

int main()
{
	int t;//no. of tests
	cin>>t;
	
	int x;
	for(int i=1 ; i<=t ; i++)
	{
		cin>>x;
		int ans = 0;
		int num_of_digits = 0;
		int ld;
		
		while(x!=0)//for digit count and which digit
		{
			ld = x % 10;
			x /= 10;
			num_of_digits++;
		}
		ans = (ld-1)*10;//if 8 then 7 wi row tk poora call karega
		//character bhaiya
		//ab is live row me kitna?
		//itna:
		ans += num_of_digits*(num_of_digits + 1)/2;
		
		cout<<ans<<"\n";
	}
}
