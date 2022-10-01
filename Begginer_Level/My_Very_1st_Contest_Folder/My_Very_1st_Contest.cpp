#include <iostream>

using namespace std;

int main(void)
{
    int iNum1, iNum2, iNum3;

    cin >> iNum1 >> iNum2 >> iNum3;

    iNum1 -= iNum2;

    cout << iNum1 << endl;

    cout << iNum1 - iNum3 << endl;

    return 0;
}