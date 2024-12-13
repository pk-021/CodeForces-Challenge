#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    int nTests = 0;
    cin >> nTests;

    for (int k = 0; k < nTests; k++)
    {
        unordered_map<int, int> colors;
        int score = 0;
        int ones = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            colors[num]++;
        }

        for (auto &pair : colors)
        {
            if (pair.second == 1)
            {
                ones += 1;
            }
            else
            {
                score += 1;
            }
        }
        score += (ones / 2 + ones % 2) * 2;
        cout << score << endl;
    }
    return 0;
}