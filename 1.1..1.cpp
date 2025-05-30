#include<iostream>
using namespace std;

int main()
{
	int i;
	cout<<"Enter array size:";
	cin>>i;
	
	int arr[i];
	
	cout<<"Enter the element of the array:"<<endl;
	for(int j=0;j<i;j++)
	{
	cin>>arr[j];
	}
	
	cout<<"Even number in the array are:";
	for(int j=0;j<i;j++)
	{
		if (arr[j]%2==0)
		{
			cout<<arr[j]<<" ";
		}
		
	}
	cout<<endl;
}
/*
Enter array size:5
Enter the element of the array:
12
42
15
55
26
Even number in the array are:12 42 26

--------------------------------
*/