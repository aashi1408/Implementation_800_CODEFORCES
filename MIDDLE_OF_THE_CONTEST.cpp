//MIDDLE OF THE CONTEST

#include<iostream>
using namespace std;

int main()
{
	/*guarantess we have:
	entire contest is held during a single day
	contest lasts at least two minutes
	there are even number of minutes*/
	int h1,m1,h2,m2;
	char op1,op2;//dono hi ':'
	
	cin>>h1>>op1>>m1;//starts at h1:m1
	cin>>h2>>op2>>m2;//ends at h2:m2
	
	int hrs = h2 - h1;
	int mins = m2 - m1;
	
	if(mins<0) mins+=60;//like George and sleep //edge case
	
	if(m1>m2 and hrs == 1)//m1>m2 edge case hmne phele galat likha tha
	{
		hrs = 0;//hrs ko tb touch when min>60   //edge case
		//case:10:02  11:02 me mins sambhalega
	}
	
	int total_mins = (hrs*60) + mins;
	
	int mid_mins = total_mins/2;
	
	int hrs_to_add = mid_mins/60;//hrs to add in the starting time
	int mins_to_add = mid_mins%60;//mins to add in the starting time
	
	int mid_hrs = h1 + hrs_to_add + (m1+mins_to_add)/60;
	int middle_mins = (m1 + mins_to_add)%60;
	//tumne display wala theek ni kiya if hrs or mins <10 to 01...09
	//display is the          --> edge case
	//
	if(mid_hrs<10)
		cout<<0<<mid_hrs<<":";
	else cout<<mid_hrs<<":";
	if(middle_mins<10)
		cout<<0<<middle_mins;
	else cout<<middle_mins;
//	cout<<mid_hrs<<":"<<middle_mins;
}









