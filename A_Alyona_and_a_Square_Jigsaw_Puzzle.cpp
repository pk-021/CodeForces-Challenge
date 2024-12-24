#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

void solve()
{
    int nDays = 0;
    long long int sum = 0;
    int val = 0;
    int root;
    int happyDays = 0;

    cin >> nDays;

    for (int i = 0; i < nDays; i++)
    {
        cin >> val;
        sum += val;

        root = sqrt(sum);
        if(root*root != sum)
        {
            continue;
        }
        if(root&1)
        {
            happyDays++;
        }
    }
    cout << happyDays << endl;
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