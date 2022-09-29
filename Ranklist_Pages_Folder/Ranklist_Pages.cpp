#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iNum;

        cin >> iNum;

        iNum = ((iNum - 1) / 25) + 1;

        cout << iNum << endl;
    }

    return 0;
}