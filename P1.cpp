#include <iostream>

using namespace std;

int main()
{
    int b; 
    char a;
    
 

    cout<<"Enter subscription package: "; cin >> a; 
    cout<<"Enter the number of hours spent: "; cin >> b; 
    
    switch (a)
    {
        case 'A':
            if (b > 10)
            cout << "The monthly bill is: $" << 995*(b-10)*20;
            else if (b <= 10)
           cout << "The monthly bill is: $" << 995;
            else 
             cout << "Invalid";
        break; 
        
        case 'B':
        if (b > 20)
            cout << "The monthly bill is: $" << 1495*(b-20)*10;
            else if (b <= 20)
           cout << "The monthly bill is: $" << 1495;
            else 
             cout << "Invalid";
        break; 
        
        case 'C':
        cout << "The monthly bill is: $1995";
        break; 
        
        default:
        cout << "Invalid";
    }
    
 
    return 0;
}

