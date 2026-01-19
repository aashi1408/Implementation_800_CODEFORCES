
//CHEWBACCA AND NUMBER

#include<iostream>
using namespace std;
/*Luke Skywalker gave Chewbacca an integer number x. 
Chewbacca isn't good at numbers but he loves inverting 
digits in them. Inverting digit t means replacing it 
with digit 9 - t.
Help Chewbacca to transform the initial number x
 to the minimum possible positive number by inverting
  some (possibly, zero) digits. The decimal representation
   of the final number shouldn't start with a zero.*/
int main()
{
	string n;
	cin>>n;
	/* if pehla digit:
	9 then no change
	agar digit 5 se 9 ki range me hai to definitely change as ye
	range digits ko choti banari hai
	and agar 1 se 4 hai to no change as 9-4 bada bana ra hai digits 
	ko ye range*/
	if(n[0] != '9' and n[0]>='5' and n[0]<='8') 
	{
		n[0] = char('9' - n[0]) + '0';
		//as char(2) is not '2' but ascii value 2 
		//so add either 48 then convert to char
		//or convert to char then add '0'
	}
	for(int i=1 ; i<n.size() ; i++)
	{
		if(n[i]>='5' and n[i]<='9')
			n[i] = char('9' - (n[i])) + '0';
	}
	cout<<n;//minimum possible positive number
}
