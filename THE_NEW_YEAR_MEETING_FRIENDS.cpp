//THE NEW YEAR: MEETING FRIENDS

#include<iostream>
using namespace std;

int main()
{
	//hme nikaalni hai min total distance the friends need to travel
//	in order to meet together
/*  dekho agr mn aur mx shift krrye hai theek hai but agr mid bhi 
kr ra hai to waste hai 
md apni jagah rahega aur mn aur mx shift karenge
 think 3 6 24 dekho 3 se 24 distance cover honi hi hai kaise? aise ki 3 ko
 6 ke paas aana hai aur 24 ko bhi aise me 6 to agr hm jbrn hila rye hai to 
 bekar hi travel hoga aur 6 ka shift ko bekar ka hoga wo bhi add hojayega
*/
	int f1,f2,f3;
	cin>>f1>>f2>>f3;
	
	int mx = max(f1,max(f2,f3));
	int mn = min(f1,min(f2,f3));
	int md = f1 + f2 + f3 - mx - mn;
	
	int mx_shift = mx - md;//<--going left
	int mn_shift = md - mn;//going right-->
	
//	int ans = mx_shift + mn_shift;
	cout<< mx_shift + mn_shift;//itna hi bas
	
	return 0;
}
