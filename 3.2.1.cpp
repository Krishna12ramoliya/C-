#include<iostream>
using namespace std;
class hotel
{
	public:
    int	id;
    char name[50];
    char hoteltype[50];
    int  rating ;
    char hotellocation [50];
    int hotelestablishyear;
    int hotelstaffquantity;
    int  hotelroomquantity;
    
    void setdata()
    {
    	cout<<"id:";
    cin>>id;
    cout<<"name:";
    cin>>name;
    cout<<"hoteltype:";
    cin>>hoteltype;
    cout<<"rating:";
    cin>>rating;
    cout<<"hotellocation:";
    cin>>hotellocation;
    cout<<"hotelestablishyear:";
    cin>>hotelestablishyear;
    cout<<"hotelstaffquantity:";
    cin>>hotelstaffquantity;
    cout<<"hotelroomquantity:";
    cin>>hotelroomquantity;
		
}

void getdata()
{
	cout<<"id:"<<id<<endl
	    <<"name:"<<name<<endl
	    <<"hoteltype:"<<hoteltype<<endl
	    <<"rating:"<<rating<<endl
	    <<"hotellocation:"<<hotellocation<<endl
	    <<"hotelestablishyear:"<<hotelestablishyear<<endl
	    <<"hotelstaffquantity:"<<hotelstaffquantity<<endl
	    <<"hotelroomquantity:"<<hotelroomquantity<<endl;
}
    
    

};

int main()
{
	int j,k;
	cout<<"enter no of infomation of hotel:";
	cin>>k;
	hotel a[j];
	for(int i=0;i<k;i++)
	
	{
	
		a[i].setdata();
		a[i].getdata();
		
}

}