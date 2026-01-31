//ANTON AND DANIK

#include<iostream>
using namespace std;

int main()
{
	int n;//no. of chess rounds
	cin>>n; 
	int A_cnt = 0 , D_cnt = 0;
	string chess_rounds ;
	cin>>chess_rounds;
	
	for(int k=0 ; k<n ; k++)
	{
		if(chess_rounds[k] == 'A')
			A_cnt++;
		else
			D_cnt++;
	}
	if(A_cnt > D_cnt)
		cout<<"Anton";
	else if(D_cnt > A_cnt)
		cout<<"Danik";
	else
		cout<<"Friendship";
		
	return 0;
}
