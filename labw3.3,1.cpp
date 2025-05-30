#include<iostream>
using namespace std;
class diamond
{
public:
int id;
char name[50];
int staffqantity;
int revenue ;
char ceo[50]; 
int import;
int exports;


diamond()
{
	cout<<"enter id:";
	cin>>id;
	cout<<"name:";
	cin>>name;
	cout<<"staffqantity:";
	cin>>staffqantity;
	cout<<"revenue :";
	cin>>revenue ;
	cout<<"ceo:";
	cin>>ceo;
	cout<<"import:";
	cin>>import;
	cout<<"exports:";
	cin>>exports;
	cout<<endl;
}
void getdata()
{
	cout<<"enter id:"<<id<<endl
	<<"name:"<<name<<endl
	<<"staffqantity:"<<staffqantity<<endl
	<<"revenue:"<<revenue<<endl
	<<"ceo:"<<ceo<<endl
	<<"import:"<<import<<endl
	<<"exports:"<<exports<<endl;
	
	
	}	
	

};
int main()
{   
    int j,n;
    cout<<"enter no of info of companiess:";
    cin>>n;
	for(int i=1;i<=n;i++)
	{
     diamond  diamond[i];
        diamond[i].getdata();
			}
}