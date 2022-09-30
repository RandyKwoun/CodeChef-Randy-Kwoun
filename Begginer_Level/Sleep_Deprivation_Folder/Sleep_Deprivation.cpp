#include <iostream>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iHour;

        cin >> iHour;

        if(iHour < 7)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}