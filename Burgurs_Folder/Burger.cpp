#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iNum1, iNum2;

        cin >> iNum1 >> iNum2;

        cout << min(iNum1, iNum2) << endl;
    }

    return 0;
}