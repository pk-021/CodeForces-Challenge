#include <iostream>

using namespace std;

int main()
{
    int nTests;
    int nVals;
    int k;

    int firstNum;
    int lastNum;
    int firstNumCount;
    int lastNumCount;
    bool isValid;

    cin >> nTests;

    while (nTests--)
    {
        cin >> nVals;
        cin >> k;
        isValid = false;

        int *vals = new int[nVals]();
        for (int i = 0; i < nVals; i++)
        {
            cin >> vals[i];
        }

        firstNum = vals[0];
        lastNum = vals[nVals - 1];
        firstNumCount = 0;
        lastNumCount = 0;

        for (int i = 0; i < nVals; i++)
        {

            if (firstNumCount < k && (vals[i] == firstNum))
            {
                firstNumCount++;
                if ((firstNumCount == k) && (firstNum == lastNum))
                {
                    isValid = true;
                    break;
                }
                continue;
            }

            if ( (firstNumCount>= k) && (vals[i] == lastNum))
            {
                lastNumCount++;
            }
            
            if(lastNumCount >= k)
            {
                isValid= true;
                break;
            }
        }

        if (isValid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        delete[] vals;
    }

    return 0;
}