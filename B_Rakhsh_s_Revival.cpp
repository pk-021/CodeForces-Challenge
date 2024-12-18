#include <vector>
#include <iostream>
#include <set>

using namespace std;

int main()
{

    int nTests;

    int n, m, k;
    int spellCount = 0;
    int zeroCount = 0;

    string input;

    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        spellCount = 0;
        zeroCount = 0;
        cin >> n >> m >> k;
        char *input = new char[n];

        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        for (int i = 0; i < n;)
        {

            if (input[i] == '0')
            {
                zeroCount++;
            }
            else if (input[i] == '1')
            {
                zeroCount = 0;
                i++;
                continue;
            }

            if (zeroCount == m)
            {
                i += k;
                spellCount += 1;
                zeroCount = 0;
                continue;
            }

            i++;
        }
        cout << spellCount << endl;
    }
    return 0;
}