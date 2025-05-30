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
/*
id:101
name:krishna
age:19
city:surat
mobile num:9423467771
simcard_validity:5
telecom_brand_name:jio
id:102
name:sanvi
age:18
city:vadodra
mobile num:7896541234
simcard_validity:4
telecom_brand_name:airtel
id:103
name:karan
age:22
city:ahemdabad
mobile num:8140267837
simcard_validity:6
telecom_brand_name:vi
id:104
name:axil
age:20
city:surat
mobile num:6789013425
simcard_validity:5
telecom_brand_name:airtel
id:105
name:pari
age:19
city:mumbai
mobile num:2345167459
simcard_validity:5
telecom_brand_name:vi
id:101
name:krishna
age:19
city:surat
mobile num:9423467771
simcard_validity:5
telecom_brand_name:jio
id:102
name:sanvi
age:18
city:vadodra
mobile num:7896541234
simcard_validity:4
telecom_brand_name:airtel
id:103
name:karan
age:22
city:ahemdabad
mobile num:8140267837
simcard_validity:6
telecom_brand_name:vi
id:104
name:axil
age:20
city:surat
mobile num:6789013425
simcard_validity:5
telecom_brand_name:airtel
id:105
name:pari
age:19
city:mumbai
mobile num:2345167459
simcard_validity:5
telecom_brand_name:vi

--------------------------------
*/