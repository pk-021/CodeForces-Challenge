#include <iostream>
using namespace std;

int main()
{
    char word[100];
    bool isValid = true;
    char c;

    cin >> word[0];
    for (int i = 1; i < 100; i++)
    {
        c = cin.get();
        if (c == ' ' || c == '\n')
        {
            word[i] = '\n';
            break;
        }

        else
        {
            word[i] = c;
            if (islower(c))
            {
                isValid = false;
            }
        }
    }
    if (!isValid)
    {
        for (int i = 0; i < 100; i++)
        {
            if (word[i] == '\n')
            {
                break;
            }

            else
            {
                cout << word[i];
            }
        }
        return 0;
    }

    if (isupper(word[0]))
    {
        cout << (char)tolower(word[0]);
    }
    else
    {
        cout << (char)toupper(word[0]);
    }
    
    for (int i = 1; i < 100; i++)
    {
        if (word[i] == '\n')
        {
            break;
        }

        else
        {
            cout << (char)tolower(word[i]);
        }
    }

    return 0;
}