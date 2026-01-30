//ASSIGNING TO CLASSES

/*When i read the question i thought of go to gpt to ask greedy 
as i don't know ki kaise krte greedy se and ofcourse agr bilkul ni
pata to jao logic puchne then suddenly soln just clicked in our mind
that was:
sort krlo a[n] se a[n-1] ko subtract krdo that's it
ye array banane ko force ni krra ye qs just asking the min possible
absolute diff as jb hm array ko sort krrenge to beech ke jo do ele hai
unka diff hi sbse min hoga!
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;//no. of tests
	cin>>t;
	
	for(int i=1 ; i<=t ; i++)
	{
		int n;//no. of ele in a array
		//or no. of ele in the ti array
		cin>>n;
		vector<int> v(2*n);//NOT 2n
		//2n isliye bhi diya hai ki odd+odd = even
		for(int j=0 ; j<2*n ; j++)
		{
			cin>>v[j];
		}
		sort(v.begin(),v.end());
		
		cout<<v[n]-v[n-1]<<"\n";
		
	}
	return 0;
}













































