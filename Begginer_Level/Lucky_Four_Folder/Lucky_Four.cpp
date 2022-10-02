#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iNum, iAns = 0, iTemp;

        cin >> iNum;

        while(iNum > 0)
        {
            iTemp = iNum % 10;

            if(iTemp == 4)
                iAns++;

            iNum /= 10;
        }

        cout << iAns << endl;
    }

    return 0;
}