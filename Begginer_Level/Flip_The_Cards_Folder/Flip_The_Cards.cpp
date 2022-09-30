#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iN, iX;

        cin >> iN >> iX;

        if((iN - iX) >= iX)
            cout << iX << endl;

        else    
            cout << (iN - iX) << endl;
    }

    return 0;
}