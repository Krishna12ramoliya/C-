#include<iostream>
using namespace std;
class employee
{
	public:
int	id;
char name[50];
int age;
char role[50];
int salary;
char city[50];
int experience;
char companyname[50];
};

int main()
{
	int i;
	employee a[i];
	for(int i=0;i<5;i++)
	{
		printf("\n");
		cout<<"enter id:";
		cin>>a[i].id;
		
		cout<<"enter name:";
		cin>>a[i].name;
	    
		cout<<"enter age:";
	    cin>>a[i].age;
	     
		cout<<"enter role:";
	    cin>>a[i].role;
		
		cout<<"enter salary:";
	    cin>>a[i].salary; 
		
		cout<<"enter city:";
	    cin>>a[i]. city; 
		
		cout<<"enter experience:";
	    cin>>a[i].experience; 
		
		cout<<"enter companyname:";
	    cin>>a[i].companyname;
	    
	    printf("\n");
	  
	 
	    cout<<"enter id:"<<a[i].id<<"\nenter name:"<<a[i].name<<"\nenter age:"<<a[i].age<<"\nenter role:"<<a[i].role<<"\nenter salary:"<<a[i].salary<<"\nenter city:"<<a[i]. city<<"\nenter experience:"<<a[i].experience<<"\nenter companyname:"<<a[i].companyname<<endl;
	
}
}
/*output:
enter id:1
enter name:ram
enter age:23
enter role:manager
enter salary:560000
enter city:surat
enter experience:2
enter companyname:phonepe

enter id:1
enter name:ram
enter age:23
enter role:manager
enter salary:560000
enter city:surat
enter experience:2
enter companyname:phonepe

enter id:2
enter name:riya
enter age:24
enter role:ceo
enter salary:670000
enter city:vadodra
enter experience:4
enter companyname:apple

enter id:2
enter name:riya
enter age:24
enter role:ceo
enter salary:670000
enter city:vadodra
enter experience:4
enter companyname:apple

enter id:3
enter name:siya
enter age:24
enter role:productmanager
enter salary:300000
enter city:ahmedabad
enter experience:3
enter companyname:tata

enter id:3
enter name:siya
enter age:24
enter role:productmanager
enter salary:300000
enter city:ahmedabad
enter experience:3
enter companyname:tata

enter id:4
enter name:pookie
enter age:23
enter role:assistant
enter salary:50000
enter city:surat
enter experience:2
enter companyname:phonepe

enter id:4
enter name:pookie
enter age:23
enter role:assistant
enter salary:50000
enter city:surat
enter experience:2
enter companyname:phonepe

enter id:5
enter name:sita
enter age:23
enter role:watchmen
enter salary:20000
enter city:surat
enter experience:4
enter companyname:apple

enter id:5
enter name:sita
enter age:23
enter role:watchmen
enter salary:20000
enter city:surat
enter experience:4
enter companyname:apple

*/