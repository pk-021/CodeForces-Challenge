#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int nVals, m, len = 0;
    bool valid = true;
    cin >> nVals;
    cin >> m;
    string istr;

    for (int i = 0; i < nVals; i++)
    {
        cin >> istr;
        len += istr.length();
        // cout << istr << endl;
        // cout << "length:" << len << endl;

        if (valid)
        {
            if (len > m)
            {
                cout << i << endl;
                valid = false;
            }
            else if (len == m)
            {
                cout << i + 1 << endl;
                valid = false;
            }
        }
    }
    if (valid)
    {
        cout<<nVals<<endl;
    }
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