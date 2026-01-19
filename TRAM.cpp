//TRAM

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	int mx_capacity = 0 , depart, arrive;
	
	vector<int> arr(t);
	
	for(int i=0 ; i<t ; i++)
	{
		cin>>depart>>arrive;
		mx_capacity-=depart;
		mx_capacity+=arrive;
		arr[i] = mx_capacity;
	}
	cout<<*max_element(arr.begin(),arr.end());//this max is the
//	minimum possible capacity of the tram (0 is allowed).
}
