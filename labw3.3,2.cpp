#include<iostream>
using namespace std;
class cafe
{
public:
int id;
char name[50];
char type [50];
int rating ;
char location[50]; 
int establishyear;
int staffquantity;


cafe()
{
	cout<<"enter id:";
	cin>>id;
	cout<<"name:";
	cin>>name;
	cout<<"type:";
	cin>>type;
	cout<<"rating :";
	cin>>rating ;
	cout<<"location:";
	cin>>location;
	cout<<"establish year:";
	cin>>establishyear;
	cout<<"staff quantity:";
	cin>>staffquantity;
	cout<<endl;
}
void getdata()
{
	cout<<"enter id:"<<id<<endl
	<<"name:"<<name<<endl
	<<" type:"<<type<<endl
	<<"rating:"<<rating<<endl
	<<"location:"<<location<<endl
	<<"establish year:"<<establishyear<<endl
	<<"staff quantity:"<<staffquantity<<endl;
	
		}	
	

};
int main()
{  
     cafe c1;
     cafe c2;
     cafe c3;
     cafe c4;
     cafe c5;
     cout<<endl;
     
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c4.getdata();
    c5.getdata();
   
}
/*output:
enter id:1
name:zero
type:5star
rating :5
location:vesu
establish year:2020
staff quantity:23

enter id:2
name:dero
type:4star
rating :4
location:vesu
establish year:2020
staff quantity:23

enter id:3
name:nomads
type:4star
rating :4
location:vesu
establish year:2023
staff quantity:23

enter id:4
name:cafebeats
type:4star
rating :4
location:vesu
establish year:2024
staff quantity:34

enter id:5
name:goodstuff
type:5star
rating :5
location:vesu
establish year:2020
staff quantity:12

enter id:1
name:zero
type:5star
rating:5
location:vesu
establish year:2020
staff quantity:23

enter id:2
name:dero
type:4star
rating:4
location:vesu
establish year:2020
staff quantity:23

enter id:3
name:nomads
type:4star
rating:4
location:vesu
establish year:2023
staff quantity:23

enter id:4
name:cafebeats
type:4star
rating:4
location:vesu
establish year:2024
staff quantity:34

enter id:5
name:goodstuff
type:5star
rating:5
location:vesu
establish year:2020
staff quantity:12
*/
