#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nTests, n, oCount, zCount;
    cin >> nTests;

    while (nTests--)
    {
        cin >> n;
        string vals;
        cin >> vals;

        zCount = 0;
        oCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (vals[i] == '1')
            {
                oCount++;
                continue;
            }
            else if (i == 0)
            {
                zCount++;
                continue;
            }
            else
            {
                if (vals[i - 1] == '0')
                {
                    continue;
                }
                zCount++;
            }
        }

        // cout << oCount << " " << zCount << endl;
        cout<<(oCount>zCount?"Yes":"No")<<endl;

    }

    return 0;
}