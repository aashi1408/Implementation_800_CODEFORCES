//GAMES

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of teams part in the national championship
	cin>>n;
	vector<int> home_u(n);//color of home uniform
	vector<int> guest_u(n);//color of guest uniform
	/*The only exception to that rule is: when the home
	 uniform color of the host team matches the guests' uniform, the 
	 host team puts on its guest uniform as well.
	  For each team the color
	 of the home and guest uniform is different.*/
	for(int i=0 ; i<n ; i++)
	{
		cin>>home_u[i];
		cin>>guest_u[i];
	}
//	to find : number of games where the host team is going
//	  to play in the guest uniform.
	int change_u = 0;//change uniform as it matched the guest's uniform
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(home_u[i] == guest_u[j])
			{
				change_u++;
			}
		}
	}
	cout<<change_u;
	return 0;
}











