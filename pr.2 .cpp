#include<iostream>
using namespace std;

class design
{   

    public:
	int trainnumber;
    char trainname[50];
    char source[50];
    char destination[50];
    char traintime[10];
    static int traincount;
    


void setdata()


{

cout<<"enter train number:";
 cin>>trainnumber ;

cout<<"enter train name:";
cin>>trainname;

cout<<"enter train source:";
cin>>source;

cout<<"enter train destination:";
cin>>destination;

cout<<"enter traintime:";
cin>>traintime;

cout<<"enter train count:";
cin>>traincount;


}


void getdata()
{
	cout<<"enter train num:"<<trainnumber<<endl
	    <<"enter train name:"<<trainname<<endl
	    <<"enter train source:"<<source<<endl
	    <<"enter train destination:"<<destination<<endl
	    <<"enter train time:"<<traintime<<endl
	    <<"enter train count:"<<traincount<<endl;
	    
}

class RailwaySystem

 {
 public:
 int totaltrains;

    void addTrain() 
	
	{
        if(totaltrains < 100) 
		{
            [totaltrains].setdata();
            totalTrains++;
        } else 
		{
            cout << "Maximum limit reached!" << endl;
        }
    }
    void displayAllTrains()
	 {
        if(totalTrains == 0) 
		{
            cout << "No trains available!" << endl;
            return;
        }
        cout << "\nAll Train Records:" << endl;
        for(int i = 0; i < totalTrains; i++) {
            trains[i].displayTrainDetails();
        }
    }
    void TrainByNumber(int number) 
	{
      
        for(int i = 0; i < totalTrains; i++)
		 {
            if(trains[i].getdata() == number) 
			{
                cout << "Train found:" << endl;
                trains[i].displayTrainDetails();
                
                break;
            }
        }
        if(!found) 
		{
            cout << "Train with number " << number << " not found!" << endl;
        }
    }
};
};
int design :: traincount=3;
    
    
    void searchTrainByNumber(int number) {
        bool found = false;
        for(int i = 0; i < totalTrains; i++) {
            if(trains[i].getTrainNumber() == number) {
                cout << "Train found:" << endl;
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "Train with number " << number << " not found!" << endl;
        }
    }
    // Function to add sample trains
    void addSampleTrains() {
        Train t1(123, "Express", "Mumbai", "Delhi", "08:30");
        Train t2(456, "Superfast", "Chennai", "Bangalore", "10:00");
        Train t3(789, "Local", "Kolkata", "Hyderabad", "12:45");
        trains[0] = t1;
        trains[1] = t2;
        trains[2] = t3;
        totalTrains = 3;
    }
};

 void addSampleTrains() {
        Train t1(123, "Express", "Mumbai", "Delhi", "08:30");
        Train t2(456, "Superfast", "Chennai", "Bangalore", "10:00");
        Train t3(789, "Local", "Kolkata", "Hyderabad", "12:45");
        trains[0] = t1;
        trains[1] = t2;
        trains[2] = t3;
        totalTrains = 3;
    }
};

    
    int main()
    {
    	int main() 
		{
    RailwaySystem rs;
    int choice, num;

   
    rs.addSampleTrains();

    do {
        cout << "\nRailway System Menu" << endl;
        cout << "1. Add Train" << endl;
        cout << "2. Display All Trains" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
		 {
            case 1:
                rs.addTrain();
                break;
            case 2:
                rs.displayAllTrains();
                break;
            case 3:
                cout << "Enter train number to search: ";
                cin >> num;
                rs.searchTrainByNumber(num);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 4);

    
}
	}





