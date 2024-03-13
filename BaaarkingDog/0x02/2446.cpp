#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int cnt = 2 * n - 1;
    while(cnt--)
    {
        if (cnt - n >= 0)
        {
            for (int i = 0; i < (2 * (n - 1)) - cnt; i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < 2 * (cnt - n + 1) + 1; i++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        else
        {
            for (int i = 0; i < cnt; i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < 2 * (n - cnt) - 1; i++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}