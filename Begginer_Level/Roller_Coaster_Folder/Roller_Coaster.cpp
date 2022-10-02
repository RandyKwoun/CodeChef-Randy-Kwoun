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

        if(iNum1 >= iNum2)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}