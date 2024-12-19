#include <iostream>
using namespace std;

int main()
{
    long int i;
    cin >> i;

    if(i == 0)
    {
        cout<<'1'<<endl;
        return 0;
    }

    int vals[] = {8, 4, 2, 6};
    int remainder = i%4;

    if(remainder == 0)
    {
        cout<<6<<endl;
    }
    else if(remainder == 1)
    {
        cout<<8<<endl;
    }
    if(remainder == 2)
    {
        cout<<4<<endl;
    }
    if(remainder == 3)
    {
        cout<<2<<endl;
    }

    return 0;
}