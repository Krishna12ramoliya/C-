#include<iostream>
using namespace std;

class x
{
	public:
		int a,b,c;
};

class y : public x
{
	public:
		void setdata()
		{
			cout<<"Enter value A:";
			cin>>a;
			
			cout<<"Enter value B:";
			cin>>b;
			
			cout<<"Enter value C:";
			cin>>c;
		}
		
		void getdata()
		{
			cout<<"Enter value A:"<<a<<endl
			    <<"Enter value B:"<<b<<endl
			    <<"Enter value C:"<<c<<endl;
		}
};

int main()
{
	y y1;
	
	y1.setdata();
	
	y1.getdata();	
	
	
}
/*
Enter value A:125
Enter value B:150
Enter value C:175
Enter value A:125
Enter value B:150
Enter value C:175
*/
