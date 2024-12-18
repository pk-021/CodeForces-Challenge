#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> first;
    vector<int> second;
    vector<int> third;

    first.reserve(1000);
    second.reserve(1000);
    third.reserve(1000);

    int n, m, k;
    int nTetsts;
    cin>>nTetsts;

    for (int i = 0; i < nTetsts; i++)
    {   
        first.clear();
        second.clear();
        third.clear();

        cin >> n >> m >> k;

        for (int i = 1; i <= n; i++)
        {
            if (i >= k)
            {
                first.push_back(i);
                continue;
            }

            else if (i > m)
            {
                second.push_back(i);
                continue;
            }
            else
            {
                third.push_back(i);
                continue;
            }
        }

        for (int i = first.size() - 1; i >= 0; i--)
        {
            cout << first[i] << " ";
        }

        for (int i = 0; i < second.size(); i++)
        {
            cout << second[i] << " ";
        }

        for (int i = 0; i < third.size(); i++)
        {
            cout << third[i] << " ";
        }

        cout << endl;
    }

    return 0;
}