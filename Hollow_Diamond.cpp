//Hollow Diamond Inscribed in a Rectangle
//Input: 5
//Output:
//**********
//****  ****
//***    ***
//**      **
//*        *
//**      **
//***    ***
//****  ****
//**********

#include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cin >> n;
    // for upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  // for upper left triangle
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j)  // for upper right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout <<endl;
    }
    // for bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // for bottom left triangle
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  // for bottom right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}