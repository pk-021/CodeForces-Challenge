#include <iostream>
using namespace std;

int main()
{
    int nTests, nVals, count = 0;
    unsigned long long int sum = 0, val, max=0;
    cin >> nTests;

    for (int i = 0; i < nTests; i++)
    {
        sum = 0;
        count = 0;
        max = 0;

        cin >> nVals;


        for (int i = 0; i < nVals; i++)
        {

            cin >> val;
            sum += val;
            if (val > max)
            {
                max = val;
            }

            if (sum - 2 * max == 0)
            {
                count += 1;
            }

        }

        cout << count << endl;
    }

    return 0;
}