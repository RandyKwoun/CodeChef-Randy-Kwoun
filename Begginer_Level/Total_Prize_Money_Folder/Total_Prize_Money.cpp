#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iT10, iOut10;

        cin >> iT10 >> iOut10;

        iT10 *= 10;
        iOut10 *= 90;

        cout << iT10 + iOut10 << endl;
    }

    return 0;
}