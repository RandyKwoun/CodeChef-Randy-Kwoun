#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iTotal, iScore;

        cin >> iTotal >> iScore;

        iTotal /= 10;

        cout << iTotal * iScore << endl;
    }

    return 0;
}