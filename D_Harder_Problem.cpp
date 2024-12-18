#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    int nTests;
    int nVals;
    int val;
    cin >> nTests;
    int popped;
    for (int t = 0; t < nTests; t++)
    {

        vector<int> in;
        vector<int> remaining;
        unordered_map<int, int> valCounts;

        nVals = 0;
        cin >> nVals;

        for (int i = 0; i < nVals; i++)
        {
            cin >> val;
            in.push_back(val);
            valCounts[val]++;
        }

        for (int i = 0; i < nVals; i++)
        {
            if (valCounts[i + 1] == 0)
            {
                remaining.push_back(i + 1);
            }

            if (valCounts[in[i]] != 0 && valCounts[in[i]] != -1)
            {
                valCounts[in[i]] = -1;
                continue;
            }

            else
            {
                in[i] = -1;
            }
        }

        popped = 0;
        for (int x : in)
        {
            if (x == -1)
            {
                popped = remaining.back();
                remaining.pop_back();
                cout << popped << " ";
            }
            else
            {

                cout << x << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}