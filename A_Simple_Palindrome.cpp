#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nTests;
    cin >> nTests;

    int nVals;
    int counts[5];

    string vowels = "aeiou";
    for (int i = 0; i < nTests; i++)
    {
        cin >> nVals;
        if (nVals <= 5)
        {
            cout << vowels.substr(0, nVals);
        }
        else
        {
            for(int i =0;i<5;i++)
            {
                counts[i] = nVals/5 ;
            }
            for(int i =0;i<nVals%5;i++)
            {
                counts[i] ++;
            }

            for (int i = 0; i < 5; i++)
            {
                while(counts[i]>0)
                {
                    cout<<vowels[i];
                    counts[i] = counts[i]-1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}