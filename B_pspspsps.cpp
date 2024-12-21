#include <iostream>
using namespace std;

int main()
{
    int nTests;
    int nVals;
    char ch;
    bool sFound;
    bool pFound;
    bool isValid;
    string inputStr;

    cin >> nTests;

    while (nTests--)
    {
        sFound = false;
        pFound = false;
        isValid = true;

        cin >> nVals;
        cin>>inputStr;

        for (int i = 0; i < nVals; i++)
        {

            if (inputStr[i] == 's')
            {
                if (pFound)
                {
                    isValid = false;
                    break;
                }
                sFound = true;
            }
            else if (inputStr[i] == 'p')
            {
                pFound = true;
            }
        }

        if (!isValid)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}