#include <iostream>
using namespace std;

int main()
{

    int nTests;
    char c;
    char inputStr[5000];

    cin >> nTests;
    cin.ignore();

    while (nTests--)
    {
        int i = 0;
        int ZeroIndx = -1;
        int wordlen = 0;

        while ((c = cin.get()) != '\n')
        {
            inputStr[i] = c;
            if (c == '0' && ZeroIndx == -1)
            {
                // cout<<"here: "<<i<<endl;
                ZeroIndx = i;
            }
            i++;
        }
        inputStr[i] = '\0';
        wordlen = i;

        if (ZeroIndx == -1 || ZeroIndx == (wordlen - 1))
        {
            cout << "1 " << wordlen << " 1 1" << endl;
            continue;
        }
        // cout<<"sliding window:"<<wordlen-ZeroIndx<<endl;

        int slidingWin = wordlen - ZeroIndx;
        int maxIndx = 0;
        int value ;

        for (i = 0; i < wordlen - slidingWin; i++)
        {
            for(int j=i;j<slidingWin;j++)
            {
                if(inputStr[j] ^ inputStr[wordlen-slidingWin+j] )
            }
        }
    }

    return 0;
}