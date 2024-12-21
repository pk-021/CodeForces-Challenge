#include <iostream>
#include <string>
using namespace std;

int main()
{

    int nTests;
    int val;
    cin >> nTests;

    while (nTests--)
    {
        cin >> val;
        string valString = to_string(val);

        while (val> 0)
        {
            if(val<33)
            {
                cout << "NO" << endl;
                break;
            }

            if (val % 33 == 0)
            {
                cout << "YES" << endl;
                break;
            }


            size_t pos;
            if ((pos = valString.find("33")) != std::string::npos)
            {
                valString.erase(pos, 2);
            }
            else
            {
                cout << "NO" << endl;
                break;
            }

            val = valString.empty() ? 0 : std::stoi(valString);
        }
    }

    return 0;
}