//BRAIN'S PHOTOS

#include<iostream>
using namespace std;

int main()
{
	int n,m;
	//he number of photo pixel matrix rows and columns respectively.
	cin>>n>>m;
	
	bool colored = false;
	
	char x;
	for(int i=0 ; i<n*m ; i++)
	{
		cin>>x;
		if(x == 'C' || x == 'M' or x == 'Y') colored = true;
	}
	
	if(colored) cout<<"#Color";
	else cout<<"#Black&White";
	
	return 0;
}
