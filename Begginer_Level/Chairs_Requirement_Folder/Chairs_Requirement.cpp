#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iNum1, iNum2;

        cin >> iNum1 >> iNum2;

        if(iNum1 > iNum2)
            cout << iNum1 - iNum2 << endl;

        else
            cout << 0 << endl;
    }

    return 0;
}