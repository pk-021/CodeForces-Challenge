#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int len;
    int val;
    int numTests = 0;

    cin >> numTests;
    for (int _ = 0; _ < numTests; _++)
    {
        int score = 0;
        unordered_map<int, int> countMap;

        cin >> len;
        for (int i = 0; i < len; i++)
        {
            cin >> val;
            countMap[val]++;
        }

        for (const auto &pair : countMap)
        {
            score += (pair.second / 2);
        }

        cout << score << endl;
    }

    return 0;
}