#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iMoney, iBill;

        cin >> iMoney >> iBill;

        if(iMoney >= iBill)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}