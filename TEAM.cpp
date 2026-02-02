//TEAM

#include<iostream>
using namespace std;

int main()
{
	int n;//number of problems in the contest
	cin>>n;
	
	int prob_imple = 0;/* friends decided that they will implement a problem
	 if at least two of them are sure 
	about the solution. Otherwise, the friends won
	't write the problem's solution.*/
	
	while(n--)
	{
		int p,v,t;//petya, vanya, tonya
		cin>>p>>v>>t;
		
		int sure_cnt = 0 ; //  //count of surity of soln
		if(p == 1) sure_cnt++;
		if(v == 1) sure_cnt++;
		if(t == 1) sure_cnt++;
		
		if(sure_cnt >= 2) 
			++prob_imple; 
	}
	cout<<prob_imple;
}
