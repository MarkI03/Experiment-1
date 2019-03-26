#include <iostream>
#include <conio.h>
#include<iomanip>
#include <math.h>
using namespace std;

    int main()
    {
   
    double AverageDailyBalance;
    double Interest;
    double d1;
    double d2;
    double netbalance;
    float payment;
    float interest;
   
    cout << "Amount of bill to be paid \n";
    cin >> netbalance;
    cout << "Type the number of days in the billing cycle \n";
    cin >> d1;
    cout << "What is payment mode of the customer \n";
    cin >> payment;
    cout << "Type the number of days before the cycle ends \n";
    cin >> d2;
    
  AverageDailyBalance= (netbalance*d1-payment*d2)/d1;
  cout<< setprecision(2)<<fixed;
  cout << "Your balance is:"<<AverageDailyBalance<<" pesos"<<endl;
  
  interest=AverageDailyBalance*0.0152;
  cout<< "Your interest is:"<<interest<<endl;
    getch();
    return 0;
    }
