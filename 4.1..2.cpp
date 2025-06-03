#include <iostream>
using namespace std;


class P 
{

    
    
    public:
    	
    float celsius;
    void getCelsius() 
	{
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
};


class Q : public P 
{
    
    
    
    public:
    	
    float fahrenheit;
    void convertToFahrenheit() 
	{
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
    }
};


class R : public Q 
{

    
    
    public:
    	
    float kelvin;
    void convertToKelvin() 
	{
        kelvin = (5.0 / 9.0) * (fahrenheit - 32) + 273.15;
    }
    void display() {
        cout << "\nTemperature in Celsius: " << celsius << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
        cout << "Temperature in Kelvin: " << kelvin << endl;
    }
};

int main() {
    R tempConverter;
    tempConverter.getCelsius();      
    tempConverter.convertToFahrenheit(); 
    tempConverter.convertToKelvin();     
    tempConverter.display();         
    
}
/*
Enter temperature in Celsius: 10

Temperature in Celsius: 10
Temperature in Fahrenheit: 50
Temperature in Kelvin: 283.15

*/