#include<iostream>
using namespace std;

class employee
{
	public:
		int id;
		char name[50];
		int age;
		int salary;
		
		void setdata()
		{
			cout<<"Enter id:";
			cin>>id;
			
			cout<<"Enter name:";
			cin>>name;
			
			cout<<"Enter age:";
			cin>>age;
			
			cout<<"Enter salary:";
			cin>>salary;
			
			
		}
		
		
		void getdata()
		{
			cout<<"Enter id:"<<id<<endl
			    <<"Enter name:"<<name<<endl
			    <<"Enter age:"<<age<<endl
			    <<"Enter salary:"<<salary<<endl;
			    
		}
		
};


class derived :public employee
{
	
	
};