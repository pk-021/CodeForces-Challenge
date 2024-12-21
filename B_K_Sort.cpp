#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nTests, currentVal, count, n;
    unsigned long long int coins;
    unsigned long long int max;
    unsigned long long int offset;
    int diffLen;
    long int val;
    int nDiff;
    cin >> nTests;



    while (nTests--)
    {
        max = 0;
        nDiff =0;

        cin >> n;

        long long int *diffs = new long long int[n]();

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if (val >= max)
            {
                max = val;
            }
            else
            {
                diffs[nDiff] = max - val;
                nDiff++;
            }
        }

        sort(diffs, diffs + nDiff);
        
        coins = 0;
        offset = 0;
        for (int i = 0; i < nDiff; i++)
        {
            coins += (nDiff-i+1)*(diffs[i]-offset);
            offset += (diffs[i]- offset);
        }

        cout <<coins<< endl;

        delete[] diffs;
    }

    return 0;
}