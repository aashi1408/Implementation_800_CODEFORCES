//SOFT DRINKING

#include<iostream>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	
	int total_ml = k*l;
	
	int drink_servings = total_ml/nl;
	
	int slices = c*d;
	
	int salt_servings = p/np;
	
	int max_toast = min(slices,min(salt_servings,drink_servings));
	
	int toast_per_friend = max_toast/n;
	
	cout<<toast_per_friend;
}
