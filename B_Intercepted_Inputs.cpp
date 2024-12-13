#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int nVals;
    int val;
    int target;

    bool found = false;

    cin >> n;
    for (int _ = 0; _ < n; _++)
    {

        set<int> vals;
        found = false;
        cin >> nVals;
        target = nVals -2;
        for (int i = 0; i < nVals; i++)
        {
            cin >> val;
            vals.insert(val);
        };


        for (int i : vals)
        {
            // If i divides the target, check if target / i is also in the set
            if (target % i == 0 && vals.count(target / i))
            {
                cout << i << " " << target / i << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "1 " << target << endl;
        }
    }

    return 0;
}