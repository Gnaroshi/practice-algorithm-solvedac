#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int m = n;
    while(n--)
    {
        for(int i = 0; i < (m - n - 1); i++)
        {
            cout<<" ";
        }
        for(int i = 0; i < (n + 1) * 2 - 1; i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}