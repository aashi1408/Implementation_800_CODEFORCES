//IN SEARCH OF AN EASY PROBLEM

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool hard = false;//hard ni hai 0
	int arr[100];
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
		if(arr[i] == 1)
			hard = true;//hard nikla 1
	}
	(hard) ? cout<<"Hard" : cout<<"Easy";
}
