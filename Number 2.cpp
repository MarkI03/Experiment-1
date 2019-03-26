
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    	
 	double Mass;
    	double Volume;
    	double Density;

	cout << "What is the mass of the object in grams \n";
	cin >> Mass;

	cout<< "What is the density of the object in grams/cm^3 \n";
	cin>> Density;
	Volume=(Mass/Density)/4;
	
	cout<< setprecision(2)<<fixed;
	cout << "The Volume is:"<<Volume<<"cm^3"<<endl;
        getch();
        return 0;
    }
