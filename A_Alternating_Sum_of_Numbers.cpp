#include <iostream>

using namespace std;

void solve()
{
    int nVals;
    int val;
    long long int sum=0;

    cin>>nVals;
    for (int i = 0; i < nVals; i++)
    {
        cin>>val;
        if (i & 1)
        {
            sum -= val;
        }
        else
        {
            sum += val;
        }
    }
    cout<<sum<<endl;
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