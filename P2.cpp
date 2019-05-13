#include <iostream>

using namespace std;

int main()
{
    int a,b,c; 

    
 

    
    
    cout<<"Enter the the meter readings this month (in gallons):  "; cin >> a; 
    cout<<"Enter the the meter readings from the previous month (in gallons):  "; cin >> b; 
    cout<<"enter your unpaid balance: $  "; cin >> c; 

    if (c > 0)
     cout << "The water bill is: P " << 35 + (a*1.10) + (b*1.10) + 20 + c; 
    else
    cout << "The water bill is: P " << 35 + (a*1.10) + (b*1.10);
    
 
    return 0;
}
