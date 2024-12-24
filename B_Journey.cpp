#include <iostream>

using namespace std;

int main()
{
    int nTests;
    cin >> nTests;

    int n, a, b, c;
    int km3, day, remaining;

    while (nTests--)
    {
        km3 = 0;
        day = 0;
        remaining = 0;

        cin >> n >> a >> b >> c;

        km3 = (a + b + c);
        day = n / (km3) * 3;
        remaining = n % km3;

        if (remaining == 0)
        {
            cout << day << endl;
            continue;
        }

        if (a >= remaining)
        {
            day += 1;
        }
        else if (a + b >= remaining)
        {
            day += 2;
        }
        else
        {
            day += 3;
        }
        cout << day << endl;
    }

    return 0;
}