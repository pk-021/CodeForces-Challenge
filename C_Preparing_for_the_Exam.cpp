#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int nTests;
    int n, m, k;
    int kval;
    bool canSolve;

    cin >> nTests;

    while (nTests--)
    {
        cin >> n >> m >> k;
        vector<int> mVals(m);

        unordered_set<int> solvable;
        unordered_set<int> unsolvable;

        for (int i = 0; i < m; i++)
        {

            cin >> mVals[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> kval;
            solvable.insert(kval);
        }

        if (n - k > 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "0";
            }
            cout << endl;
            continue;
            ;
        }

        if (n == k)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "1";
            }
            cout << endl;
            continue;
            ;
        }

        for (int i = 1; i <= n; i++)
        {
            if (solvable.count(i) == 0)
            {
                unsolvable.insert(i);
            }
        }

        for (int i = 0; i < m; i++)
        {
            canSolve = false;
            if (unsolvable.count(mVals[i]))
            {
                canSolve = true;
            }

            if (canSolve)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}