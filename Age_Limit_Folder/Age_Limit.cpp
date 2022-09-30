#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iX, iY, iA;

        cin >> iX >> iY >> iA;

        if(iX <= iA && iY > iA)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}