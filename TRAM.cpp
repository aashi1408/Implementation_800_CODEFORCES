//TRAM

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	int mn_capacity = 0 , depart, arrive;
	
	vector<int> arr(t);
	
	for(int i=0 ; i<t ; i++)
	{
		cin>>depart>>arrive;
		mn_capacity-=depart;
		mn_capacity+=arrive;
		arr[i] = mn_capacity;
	}
	cout<<*max_element(arr.begin(),arr.end());//this max is the
//	minimum possible capacity of the tram (0 is allowed).
}

