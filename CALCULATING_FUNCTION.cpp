//CALCULATING_FUNCTION

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	//calculate total sum?//extra var?
	
	//calculate num of odd numbers
//	long long k = (n + 1) / 2;//to calculate ceil value
	
//	long long odd_sum = 1LL*(k*k) ; //formula to calculate <--integer overflow
	//sum of first odd numbers!
	
//	cout<<(1LL*n*(n+1) / 2 ) - (2 * k * k);  <--long long bhi overflow hogya
	//2 * isiliye kiya as
//	f(4) =  - 1 + 2 - 3 + 4 = 2
// hmne jo -ve tha use bhi 1 to n sum me cnt krlia
//so 1st time subtraction to remove those
//second time to find the ans

	if(n % 2 == 0)
		cout<<n / 2;
	else	
		cout<<-(n+1) / 2 ; 
	return 0;
}
