#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nTests;
    cin >> nTests;

    for (int t = 0; t < nTests; t++)
    {
        string in;
        string out;
        cin >> in;

        for (int i = in.length()-1; i >= 0 ; i--)
        {
            if (in[i] == 'p')
            {
                out += 'q';
            }

            else if (in[i] == 'q')
            {
                out += 'p';
            }
            else
            {
                out += in[i];
            }
        }

        cout <<out<< endl;
    }
    return 0;
}


