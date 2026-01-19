//BEAUTIFUL MATRIX

#include<iostream>
using namespace std;

int main()
{
	int x;
//	int arr[25];no need of array
//	kya zero ka koi use hai
	//kya arr ki wakai jarurat hai?
	for(int i=1 ; i<=5 ; i++)
	{
		for(int k=1 ; k<=5 ; k++)
		{
			cin>>x;
			if(x == 1)
				cout<<abs(i-3) + abs(k-3);//THIS IS THE FORMULA
				//to know the no. of moves to reach the 3rd r and 3rd col
				//i is the current row and k is the current column
		}
	}
	return 0;
}
