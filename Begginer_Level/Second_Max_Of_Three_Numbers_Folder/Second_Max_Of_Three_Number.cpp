#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int iT;

    cin >> iT;

    while(iT--)
    {
        int iArr[3] = {};
        
        for(int i = 0; i < 3; i++)
            cin >> iArr[i];

        sort(iArr, iArr + 3);

        cout << iArr[1] << endl;
    }

    return 0;
}