#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int nTests;
    cin >> nTests;
    int n, m;
    char opr;
    int left;
    int right;
    long int val;

    for (int t = 0; t < nTests; t++)
    {
        vector<int> vals;
        cin >> n;
        cin >> m;

        long long int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if (val > max)
            {
                max = val;
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> opr >> left >> right;
            if (left <= max && max <= right)
            {
                if (opr == '+')
                {
                    max++;
                }
                else if (opr == '-' && left <= max && max <= right)
                {
                    max--;
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}