#include <iostream>
using namespace std;

int main()
{
    int nTests, val, currentVal, count;

    cin >> nTests;
    while (nTests--)
    {
        cin >> val;

        if (val == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (val < 4)
        {
            cout << 2 << endl;
            continue;
        }

        currentVal = 4;
        count = 2;
        while (currentVal < val)
        {
            // cout << currentVal << " " << count << endl;

            currentVal = (currentVal + 1) * 2;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}