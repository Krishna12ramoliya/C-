#include<iostream>
using namespace std;

class p
{
	public:
		float celcius,F,Far,K;

	
};

class q:public p
{
     public:
	 
	 float F;
	 F=celcius * 9/5 + 32 ;
	 cout<<F;
};


class r:public q
{
     public:
		
		cout<<"Enter the Far value:";
		cin>>Far;
		
		K = (F - 32) * 5/9 + 273.15
		cout<<K;
}; 
      
      


int main()
{
	r R;
	  cout<<"enter the value F:";
	cin<<F;
	    R.F;
	
	
	
}
