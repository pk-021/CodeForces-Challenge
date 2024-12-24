#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k, nTests;
    cin >> nTests;
    while (nTests--)
    {
        cin >> n >> k;
        vector<pair<int, int>> health(n);

        for (int i = 0; i < n; i++)
        {
            cin >> health[i].first;
            health[i].second = i + 1;

            health[i].first %= k;
            if (health[i].first == 0)
            {
                health[i].first = k;
            }
        }

        stable_sort(health.begin(), health.end(), [](const auto &a, const auto &b)
             { return a.first > b.first; });
             
        for (int i = 0; i < n; i++)
            cout << health[i].second << " ";
        cout << endl;
    }

    return 0;
}