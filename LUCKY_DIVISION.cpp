//LUCKY DIVISION

#include<iostream>
#include<vector>
using namespace std;
//making a fn to check lucky number or not
bool lucky_num(int m)
{
	while(m != 0)
	{
		int ld = m % 10;
		if(ld == 4 or ld == 7 )
			m /= 10;
		else
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=n ; i>=1 ; i--)//n to 1
	{
		if(n % i == 0)
			v.push_back(i);//pushing all divisors of n into v 
	}
	
	for(int i=0 ; i<v.size() ; i++)
	{
		if(lucky_num(v[i]))
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}

















