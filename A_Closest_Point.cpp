#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int nVals;
    cin >> nVals;
    vector<int> vals(nVals);
    for (int i = 0; i < nVals; i++)
    {
        cin >> vals[i];
    }

    if (nVals > 2)
    {
        cout << "NO" << endl;
        return;
    }

    else if (nVals == 1)
    {
        cout << "YES" << endl;
        return;
    }

    cout << ((abs(vals[0] - vals[1]) > 1) ? "YES" : "NO") << endl;
    return;
}

int main()
{
    int nTests;
    cin >> nTests;
    while (nTests--)
        solve();
    return 0;
}