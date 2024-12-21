#include <iostream>
using namespace std;



int main(){
    int nTests;
    int n, k;

    cin>>nTests;
    while(nTests--)
    {
        
        cin>>n>>k;
        int * output = new int[n]();
        int count =0;
        int majors = n/k;

        for(count=1;count<=majors;count++)
        {
            output[count*k-1] = count;
        }

        for(int i=0;i<n;i++)
        {
            if(output[i] == 0){
                output[i] = count;
                count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}