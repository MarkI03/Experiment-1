#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
	int BoxSeat = 250;
	int SideLineSeat = 100;
	int PremiumSeat = 50;
	int GeneralAdmission = 25;
    const int a= 5750, b = 28000, c=35750, d=18750;    
   
    	int ticketprice;
    	int numberOfTicketsSold;
    	int total;
    
	cout << "The total sales in Box Seat: "<< BoxSeat*a <<" $"<<endl;

	cout<< "The total sales in Side Line Seat: "<<SideLineSeat*b<<" $"<<endl;
	cout << "The total sales in Premium Seat "<<PremiumSeat*c<<" $"<<endl;
	cout << "The total sales in General Admission "<<d*GeneralAdmission<<" $"<<endl;
	total=( BoxSeat*a)+(SideLineSeat*b)+(PremiumSeat*c)+(d*GeneralAdmission);
	cout << "The total price is:"<< total<<" $"<<endl;
        getch();
        return 0;
    }
