#include <iostream>
using namespace std;

int main()
{
    int nTests;
    cin >> nTests;

    while (nTests--)
    {
        int a, b;
        cin >> a >> b;

        int currentB = b;

        while (true)
        {
            currentB += b;
            if (currentB % a != 0)
                continue;

            bool isValid = true;
            for (int multiple = 2 * a; multiple <b; multiple += a)
            {
                if (currentB % multiple == 0)
                {
                    isValid = false;
                    break;
                }
            }

            if (isValid)
            {
                cout << currentB << endl;
                break;
            }
        }
    }

    return 0;
}
