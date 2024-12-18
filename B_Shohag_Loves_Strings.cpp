#include <iostream>
#include <string>
using namespace std;

int main()
{

    string initial;
    bool found;
    int nTests;
    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {

        cin >> initial;
        // check if has two repeated characters or 3 unrepeated characters
        int a = 0, b = 1, c = 2;

        if (initial.length() < 2)
        {
            cout << "-1" << endl;
            continue;
        }

        else if (initial.length() == 2)
        {
            if (initial[0] == initial[1])
            {
                cout << initial[0] << initial[0] << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
            continue;
        }

        found = false;
        for (int i = 0; i < initial.length() -2 ; i++)
        {
            a = i;
            b=i+1;
            c = i+2;

            if (initial[a] == initial[b])
            {
                cout << initial[a] << initial[a] << endl;
                found = true;
                break;
            }
            else if (initial[b] == initial[c])
            {
                cout << initial[b] << initial[b] << endl;
                found = true;
                break;
            }
            else if (initial[a] != initial[c])
            {
                cout << initial[a] << initial[b] << initial[c] << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}