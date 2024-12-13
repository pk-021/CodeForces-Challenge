#include <iostream>
using namespace std;

int main()
{

    int nTests;
    int n,val;
    long long int result;
    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        result = 0;
        cin >> n;

        for (int i = 0; i < n - 2; i++)
        {
            cin >> val;
            result += val;
        }

        cin >> val;
        result = val - result;
        cin >> val;
        result = val - result;

        cout << result<<endl;
    }
    return 0;
}