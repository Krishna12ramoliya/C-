#include <iostream>
using namespace std;


class RBI
 {

    float rate;
    public:
    float getROI() 
	{
       float rate;
    }
};


class SBI : public RBI
 {
    public:
    SBI() 
	{
         float rate = 8.4;
	}
        
};


class BOB : public RBI 
{
    public:
    BOB() 
	{
         float rate = 7.9; 
    }
};


class ICICI : public RBI 
{
    public:
    ICICI() 
	{
        float rate = 8.1; 
    }
};

int main() 
{
    SBI sbi;
    BOB bob;
    ICICI icici;

    cout << "SBI Rate of Interest: " << sbi.getROI() <<"%"<< endl;
    cout << "BOB Rate of Interest: " << bob.BOB() <<"%"<< endl;
    cout << "ICICI Rate of Interest: " <<icici.ICICI() <<"%"<< endl;


}
