#include<iostream>
using namespace std;

class Cricket 
{
      public:
      virtual void getTotalOvers() {
        cout << "Overs in a generic cricket match vary." << endl;
    }
};


class T20Match : public Cricket 
{
    public:
    void getTotalOvers() 
	 {
        cout << "Total Overs in a T20 Match: 20" << endl;
    }
};


class TestMatch : public Cricket
 {
    public:
    void getTotalOvers() 
	{
        cout << "Total Overs in a Test Match: 5 per day ." << endl;
    }
};


int main() 
{
    Cricket* match;

    T20Match t20;
    TestMatch test;

    match = &t20;
    match->getTotalOvers(); 

    match = &test;
    match->getTotalOvers(); 
    
}
/*
Total Overs in a T20 Match: 20
Total Overs in a Test Match: 5 per day .
*/
