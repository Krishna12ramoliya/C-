#include<iostream>
using namespace std;


class student
{  public:
	int id;
    char name[50];
     int age;
    char course[50];
    char city[50];
    char email[50];
    char college[50];
    
    
    void setdata()
    {
	
    cout<<"id:";
    cin>>id;
    cout<<"name:";
    cin>>name;
    cout<<"age:";
    cin>>age;
    cout<<"course:";
    cin>>course;
    cout<<"city:";
    cin>>city;
    cout<<"email:";
    cin>>email;
    cout<<"college:";
    cin>>college;
    
    
}
    void getdata()
	{
    	cout<<"id:"<<id<<endl
    	<<"name:"<<name<<endl
    	<<"age:"<<age<<endl
    	<<"course:"<<course<<endl
    	<<"city:"<<city<<endl
    	<<"email:"<<email<<endl
    	<<"collage:"<<college<<endl;
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
name:john
age:21
course:c
city:surat
email:john2gmail.com
college:ppsu
id:102
name:peter
age:20
course:c++
city:surat
email:peter@gmail.com
college:nirmauniversity
id:103
name:jolly
age:24
course:java
city:ahemdabad
email:jolly@gmail.com
college:paruluniversity
id:104
name:siya
age:23
course:python
city:surat
email:siya@gmail.com
college:sahjanaduniversity
id:105
name:sanvi
age:20
course:dart
city:surat
email:sanvi@gmail.com
college:m.v.m
id:101
name:john
age:21
course:c
city:surat
email:john2gmail.com
collage:ppsu
id:102
name:peter
age:20
course:c++
city:surat
email:peter@gmail.com
collage:nirmauniversity
id:103
name:jolly
age:24
course:java
city:ahemdabad
email:jolly@gmail.com
collage:paruluniversity
id:104
name:siya
age:23
course:python
city:surat
email:siya@gmail.com
collage:sahjanaduniversity
id:105
name:sanvi
age:20
course:dart
city:surat
email:sanvi@gmail.com
collage:m.v.m

*/