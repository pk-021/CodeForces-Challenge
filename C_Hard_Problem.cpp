#include <iostream>
using namespace std;

int main()
{
    int a, b, c, m;
    int nTests;
    long int full = 0;
    long int empty = 0;

    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        cin >> m >> a >> b >> c;
        empty =0;
        full =0;

        if (a >= m)
        {
            full += m;
        }

        else
        {
            full += a;
            empty += m - a;
        }

        if (b >= m)
        {
            full += m;
        }

        else
        {
            full += b;
            empty += m - b;
        }

        if (c >= empty)
        {
            full += empty;
        }
        else
        {
            full += c;
        }
        cout << full << endl;
    }
    return 0;
}