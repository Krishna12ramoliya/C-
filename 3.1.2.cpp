#include<iostream>
using namespace std;
#include<string.h>

class student
{  public:
	int id;
    char name[50];
    int age;
    char city[50];
    char mobilenumber[50];
   char simcardvalidity[50];
    char telecombrandname[50];
   
    
    
    void setdata()
    {
	
    cout<<"id:";
    cin>>id;
    cout<<"name:";
    cin>>name;
    cout<<"age:";
    cin>>age;
    cout<<"city:";
    cin>>city;
    cout<<"mobile num:";
    cin>>mobilenumber;
    cout<<"simcard_validity:";
    cin>>simcardvalidity;
    cout<<"telecom_brand_name:";
     cin>>telecombrandname;
    
    
    
}
    void getdata()
	{
    	cout<<"id:"<<id<<endl
    	<<"name:"<<name<<endl
    	<<"age:"<<age<<endl
    	<<"city:"<<city<<endl
    	<<"mobile num:"<<mobilenumber<<endl
    	<<"simcard_validity:"<<simcardvalidity<<endl
    	<<"telecom_brand_name:"<<telecombrandname<<endl;
	}
};


int main()
{
	student s1,s2,s3,s4,s5;
	
	
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	
	
	
	
}
