#include <iostream>
using namespace std;

int main()
{

    int nTests;
    cin >> nTests;

    int nZeroes, val;

    int firstOne;
    int lastOne;
    bool firstZero = false;
    bool lastZero = false;
    int n;
    while (nTests--)
    {
        n = 0;
        nZeroes = 0;
        firstZero = false;
        lastZero = false;

        firstOne =-1;
        lastOne=-1;

        cin >> n;
        for (int i = 0; i < n; i++)
        {

            cin >> val;
            if (val == 0)
            {
                nZeroes++;
                if(i ==0)
                {
                    firstZero = true;
                }
                else if(i == n-1)
                {
                    lastZero = true;
                }
            }
            else
            {
                if(firstOne == -1)
                {
                    firstOne = i;
                }
                lastOne = i;
            }
        }


        if (nZeroes == n)
        {
            cout << 0 << endl;
            continue;
        }

        else if (nZeroes == 0 || nZeroes == n-1)
        {
            cout << 1 << endl;
            continue;
        }
        else if ((nZeroes == 1) && (firstZero || lastZero))
        {
            cout << 1 << endl;
            continue;
        }
        else if (nZeroes == (firstOne + n-lastOne -1))
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            cout << 2 << endl;
            continue;
        }
    }

    return 0;
}