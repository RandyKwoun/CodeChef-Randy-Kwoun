#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iNum1, iNum2, iNum3;
        int iTemp1, iTemp2, iAns;

        cin >> iNum1 >> iNum2 >> iNum3;

        iTemp1 = 2 * (180 + iNum1);
        iTemp2 = iNum2 + iNum3;
        iAns = iTemp1 - iTemp2;

        cout << iAns << endl;
    }

    return 0;
}