#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iA, iB;

        cin >> iA >> iB;

        cout << iA - iB << endl;
    }

    return 0;
}