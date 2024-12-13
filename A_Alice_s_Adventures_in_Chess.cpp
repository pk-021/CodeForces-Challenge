#include <iostream>
using namespace std;

int main()
{

    int nTests;
    cin >> nTests;

    int a, b, x, y, strLen;
    bool possible = false;

    for (int _ = 0; _ < nTests; _++)
    {
        x = 0;
        y = 0;
        possible = false;

        cin >> strLen;
        string moves;

        cin >> a;
        cin >> b;

        for (int i = 0; i < strLen; i++)
        {
            char c;
            cin >> c;
            moves += c;
        }

        if (a == 0 && b == 0)
        {
            cout << "YES";
            continue;
        }

        for (int k = 0; k < 100; k++)
        {

            for (int i = 0; i < moves.length(); i++)
            {

                if (moves[i] == 'N')
                {
                    y++;
                }
                else if (moves[i] == 'E')
                {
                    x++;
                }
                else if (moves[i] == 'S')
                {
                    y--;
                }
                else if (moves[i] == 'W')
                {
                    x--;
                }

                // cout<<x<<", "<<y<<endl;
                if (x == a && y == b)
                {
                    possible = true;
                    break;
                }
            }

            if (possible)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (!possible)
        {
            cout << "NO" << endl;
        }
    }
}
