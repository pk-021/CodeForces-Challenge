#include <iostream>
using namespace std;

int main()
{

    int nTests;
    int n;
    cin>>nTests;

    for (int t = 0; t < nTests; t++)
    {
        cin >> n;
        cout << n - 1 << endl;
    }

    return 0;
}