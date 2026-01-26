//BEAR AND BIG BROTHER

#include<iostream>
using namespace std;

int main()
{
	int a,b; 
//	Right now, Limak and 
//	Bob weigh a and b respectively.
//	 It's guaranteed that Limak's weight is 
//	 smaller than or equal to his brother's weight.
//	Limak eats a lot and his weight is tripled after
//	 every year, while Bob's weight is doubled after every year.
	cin>>a>>b;
	int years = 0;
	
	while(a<=b)//strictly chahta hai woh
	{
		a*=3;
		b*=2;
		years++;
	}
	cout<<years;
}
