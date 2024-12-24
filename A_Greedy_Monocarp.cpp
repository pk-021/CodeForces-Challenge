#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve()
{
    int nVals, k;
    cin >> nVals >> k;

    vector<int> vals(nVals);
    long long int sum = 0;

    for (int i = 0; i < nVals; i++)
    {
        cin >> vals[i];
    }
    sort(vals.begin(), vals.end(), greater<int>());

    for (int val : vals)
    {
        sum += val;
        if (sum > k)
        {
            cout << k - (sum - val) << endl;
            return;
        }
        else if (sum == k)
        {
            cout<<0<<endl;
            return;
        }
    }
    cout << k - sum << endl;
}

int main()
{
    int nTests;
    cin >> nTests;

    while (nTests--)
    {
        solve();
    }

    return 0;
}