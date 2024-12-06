#include <iostream>
#include <string>

using namespace std;

string makeInt(int n, int size)
{
    string binary = "";
    string result = "";

    while (n > 0)
    {
        binary = (char)(n % 2 + '0') + binary;
        n /= 2;
    }

    for (int i = 0; i < binary.length(); i++)
    {
        binary[i] == '0' ? (result += '3') : (result += '6');
    }

    while (result.length() < size)
    {
        result = '3' + result;
    }

    return result;
}

int modString(const string &num, int mod)
{
    int remainder = 0;
    for (char digit : num)
    {
        remainder = (remainder * 10 + (digit - '0')) % mod;
    }
    return remainder;
}

int main()
{
    int nTests = 0;
    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        int size;
        bool found = false;
        cin >> size;
        string current = "";

        for (int i = 0; current.length() <= size; i++)
        {
            current = makeInt(i, size);

            if (modString(current, 66) == 0)
            {
                found = true;
                cout << current << endl;
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
