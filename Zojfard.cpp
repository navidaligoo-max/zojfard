#include <iostream>
using namespace std;

int main()
{
    int number, menu;

    cout << "Enter Number:";
    cin >> number;

    cout << "1. Even\n2. Odd\n";
    cin >> menu;

    switch(menu)
    {
        case 1:
            for(int i=1; i<=number; i++)
            {
                if(i%2==0)
                    cout << i << endl;
            }
            break;

        case 2:
            for(int i=1; i<=number; i++)
            {
                if(i%2!=0)
                    cout << i << endl;
            }
            break;

        default:
            cout << "Try Again...";
    }

    return 0;
}
