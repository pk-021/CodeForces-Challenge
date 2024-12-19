#include <iostream>
#include <string>
using namespace std;



int main(){
    
    string a, b;
    cin >> a >> b;

    if(a.length()>b.length())
    {
        cout<<a.length();
        return 0;
    }
    else if(b.length()>a.length()){
        cout<<b.length();
        return 0;
    }

    for(int i=0;i<a.length();i++)
    {
        if(a[i] != b[i])
        {
            cout<<a.length();
            return 0;
        }
    }

    cout<<"-1";
    return 0;
}