#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846


using namespace std;

int main()
{
    int X, Y, K, x, y;

    int nTests;
    cin >> nTests;

    for (int _ = 0; _ < nTests; _++)
    {
        cin >> X;
        cin >> Y;
        cin >> K;

        x = ceil(K * cos(M_PI / 4));
        y = ceil(K * sin(M_PI / 4));

        cout << "0 " << "0 " << x << " " << y << endl;
        cout << "0 " << y << " " << x << " " << "0" << endl;
    }

    return 0;
}