//SOLDIER AND BANANAS

#include<iostream>
using namespace std;

int main()
{
	double k,n,w;
	//k-->price of the first banana
	//n-->amount soldier has right know
	//w-->no. of bananas he wants
	
	//hm pehle w dekhenge
//	price ki series ko kahan tk lejana hai
	cin>>k>>n>>w;
	///k*(1+2+....+W)
	long long required_money = 1LL*k*(w*(w+1)/2);
	//1LL as taaki poora expr longlong me evaluate ho
	//varna int me multiply hoke toot skta hai
	
//	k * w = 1000 * 1000 = 1,000,000
//1,000,000 * 1001 = 1,001,000,000   (˜ 1e9)

//	double required_money =(w/2) * (k + w * k);
	////////if int 3/2 is 1 but not 1.5
	long long borrow_money = required_money - n;
	//n is the current money
	if(borrow_money<0) cout<<0;
	else cout<<borrow_money;
}
