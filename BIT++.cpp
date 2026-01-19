//BIT++

#include<iostream>
#include<string>
//#include<vector>
using namespace std;

int main()
{
	int n;//number of statements
	cin>>n;//operators hi hai kitne honge
	
	int value = 0;//initial value is 0
//	vector<string> op; vector banana hi kyun hai
	string s;
	for(int i=0 ; i<n ;i++)
	{
//		cin>>op[i];//aur agar banana bhi hai to uske paas 
//		pehle se indices ni hai garbage push back hora hai
//		op.push_back(op[i]);ni (s) karo;
		cin>>s;
		
//		if(op[i][1] == '-')//X-- or --X op[i][1] - hi hai
//		aisa ni krna//vector ke paas indices tb hote hai jb size hota hai
//		vector does not have indices before hand
		if(s[1] == '-')
			value--;
		else //x++ or ++x op[i][1] - ni to + hi hai
			value++;
	}
	cout<<value;
}
