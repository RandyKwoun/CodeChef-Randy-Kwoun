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

        if(iNum1 > iNum2)
            cout << "A" << endl;

        else
            cout << "B" << endl;
    }

    return 0;
}