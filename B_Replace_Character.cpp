#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

    int nTests;
    int wordLen = 0, max, min;
    char c;
    char toRepeat, toReplace;

    cin >> nTests;
    for (int _ = 0; _<nTests; _ ++)
    {
        unordered_map<char, int> charCounts;
        string inputStr;
        cin >> wordLen;
        for (int l = 0; l < wordLen; l++)
        {
            cin >> c;
            inputStr += c;
            charCounts[c]++;
        }


        max = 0, min = charCounts[inputStr[0]];
        toRepeat = inputStr[0];
        toReplace = inputStr[0];


        for (const auto &pair : charCounts)
        {
            // cout<<pair.first<<" : "<<pair.second<<endl;
            if (pair.second > max )
            {
                toRepeat = pair.first;
                max = pair.second;
            }
            if (pair.second <= min)
            {
                toReplace = pair.first;
                min = pair.second;
            }
        }
        for (int l = 0; l < wordLen; l++)
        {
            if (inputStr[l] == toReplace)
            {
                inputStr[l] = toRepeat;
                break;
            }
        }
        cout << inputStr<<endl;
    }
    return 0;
}