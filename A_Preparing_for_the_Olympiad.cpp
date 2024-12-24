#include <iostream>

using namespace std;

int main()
{
    int nTests;
    int nVals;
    long long int sum;

    cin >> nTests;
    while (nTests--)
    {
        cin >> nVals;
        sum = 0;
        int *valsA = new int[nVals]();
        int *valsB = new int[nVals]();
        for (int i = 0; i < nVals; i++)
        {
            cin >> valsA[i];
        }
        for (int i = 0; i < nVals; i++)
        {
            cin >> valsB[i];
        }

        for (int i = 0; i < nVals - 1; i++)
        {

            if (valsA[i] > valsB[i+1])
            {
                sum += valsA[i] -valsB[i+1];
            }
        }

        sum += valsA[nVals -1];
        cout << sum << endl;

        delete[] valsA;
        delete[] valsB;
    }

    return 0;
}