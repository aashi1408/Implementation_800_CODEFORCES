//ERASING ZEROES

#include<iostream>
using namespace std;

int main()
{
	//first aur last occurence ke beech ke zeroes jo rahenge hame
//	keval utne hi 0 remove krne hai
	//we only have to remove the 0 which are in b/w the 1's
	//not out of boundary of first_1 and last_1
	int t;//no. of tests;
	cin>>t;
	
	string x;
	for(int i=1 ; i<=t ; i++)
	{
		cin>>x;
		int n = x.length();
		bool one_occured = false;//if 1 not occured
//		to wo saare 0 gin ra hai
		//uninitialize bhi ni krskte first_1 aur last_1 ko
		//to bool se hi pooch liya
	//first we find the first ane last occurence of 1
//	as in test 01010 we don't have to remove first and last 0
// but only have to remove the 0 in b/w first and last 1
		int first_1 = 0 , last_1 = n-1;
	//initializing then as if in case of no 1
	//agr 1 hi present ni hai string me sirf 0 hi 0 hai to us
	//case me initiailize to krna padega
	//as garbage value is unsafe
	
		for(int j=0 ; j<n ; j++)//to find first_1
		{	
			if(x[j] == '1')
			{
				first_1 = j;//index of first occurence of 1
				one_occured = true;
				break;
			}
		}
		for(int j=n-1 ; j>=0 ; j--)//to find first_1
		{	
			if(x[j] == '1')
			{
				last_1 = j;//index of last occurence of 1
				break;
			}
		}
		int count_0 = 0;//count of 0 which are in b/w
		//aaju baju ke 0  matter ni krte
		if(one_occured)
		{
		for(int j=first_1 ; j<=last_1 ; j++)
		{
			if(x[j] == '0')
			{
				count_0++;
			}
		}
		}
		cout<<count_0<<"\n";
	}
	return 0;

}








































