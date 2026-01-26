//GENNADY AND A CARD GAME

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	string x;
	//hme string arr[5] banane ki koi avashyakta ni
	//kya krenge fAALTu store krke? haan?
	
	//check--> if you can play atleast one card so
//	hm break krjayenge desired card(string) milte hi
	// ya to suit match ya to rank match hojaye
	
	bool good_player = false;//ni pata khelpayenge ki ni
	
	for(int j=1 ; j<=5 ; j++)
	{
		cin>>x;
		if(x[0] == s[0] or x[1] == s[1])
		{
			good_player = true;//khel payenge
			break;
		}
	}
	if(good_player) cout<<"YES";
	else cout<<"NO";
}
