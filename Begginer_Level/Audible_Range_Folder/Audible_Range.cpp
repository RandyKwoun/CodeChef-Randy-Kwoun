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

        if(iNum >= 67 && iNum <= 45000)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}