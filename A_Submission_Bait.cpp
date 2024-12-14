#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    int nVals;
    int val;
    int max;
    int nTests;

    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        max = 0;
        unordered_map<int, int> valCounts;
        cin >> nVals;

        for (int i = 0; i < nVals; i++)
        {
            cin >> val;
            valCounts[val] += 1;
        }

        for (auto &pairs : valCounts)
        {

            if (pairs.second % 2 == 0)
            {
                // cout<<"deleted :"<<pairs.first<<endl;
                pairs.second = 0;
            }
            else if (pairs.first > max)
            {
                max = pairs.first;

            }
        }

        if (valCounts[max] % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
}

return 0;
}