#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nTests; // number of test cases
    int len;
    int val;

    bool valid;
    int result;

    cin >> nTests;
    for (int _ = 0; _ < nTests; _++)
    {
        valid = true;
        cin >> len;
        result = 0;
        
        for (int i = 0; i < len; i++)
        {
            cin >> val;
            val = (i + 1) - val;

            if (abs(val) > 1)
            {
                valid = false;
            }
            result += val;
        };

        if (result == 0 && valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}