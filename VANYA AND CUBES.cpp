//VANYA AND CUBES

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int k = 1;//k ko hm 1 krrahen hai taki jb hm pehle
	//summation ka formula lagayen to 1 se start ho
	int sum = 0;
	int count = 0;//count 0 isliye taaki jb sum hora ho
	//tb hi count badhe
	while(sum<=n)//as we dont know count
	{
		if((k*(k+1)/2)+sum <= n)
		{
			sum+= k*(k+1)/2;
			k++;
			count++;
		}
		else break;//bada aara hai sum koi jarurat ni
	}
	cout<<count;
//	cout<<"COUNT: "<<count<<"\n";
//	cout<<"K: "<<k;
}
