#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int cnt = 2 * n;
    int m = n;
    while(cnt--)
    {
        if (cnt - n >= 0)
        {
            for (int i = 0; i < n * 2 - cnt; i++)
            {
                cout<<"*";
            }
            for (int i = 0; i < 2 * (cnt - n); i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < n * 2 - cnt; i++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        else
        {
            for (int i = 0; i < cnt; i++)
            {
                cout<<"*";
            }
            for (int i = 0; i < 2 * (n - cnt); i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < cnt; i++)
            {
                cout<<"*";
            }
            cout<<"\n";

        }
        
    }
    return 0;
}