#include<iostream>
using namespace std;

class  test
{    public:
	
	void base(int a, int b)
	{
		cout<<"division:"<<a/b<<endl;
	}
	
	
	void base(int c,int d, int e)
	{
		cout<<"substraction:"<<c-d-e<<endl;
	}
	
	void base (int f,int g,int h,int i)
	{
		cout<<"multiplication:"<<f*g*h*i<<endl;
	}
	
	void base (int j,int k, int l,int m,int n)
	{
		cout<<"adition:"<<j+k+l+m+n<<endl;
	}
	
};

int main()
{
	test t1;
	
	t1.base(100,50);
	t1.base(5,8,9);
	t1.base(10,2,4,6);
    t1.base(10,12,14,16,18);
    
}
/*
division:2
substraction:-12
multiplication:480
adition:70
*/