#include<iostream>
using namespace std;

int main()
{
	int a,b,i;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the first number:";
	cin>>b;
	
	for(int i=a;i<b;i++)
	{
		cout<<i<<endl;
	}
	
	cout<<"leap year:";
	for(int i=a;i<b;i++)
	{
		if(i%4==0)
		{
			cout<<i<<" ";
			
		}
	}
}
/*
Enter the first number:2020
Enter the first number:2040
2020
2021
2022
2023
2024
2025
2026
2027
2028
2029
2030
2031
2032
2033
2034
2035
2036
2037
2038
2039
leap year:2020 2024 2028 2032 2036
--------------------------------
*/
	