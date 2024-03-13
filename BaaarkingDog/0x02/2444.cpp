#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int m = n;
    int cnt = n * 2;
    while(cnt--)
    {
        if (cnt - n >= 0)
        {
            for (int i = 0; i < cnt - n; i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < (2 * m - cnt) * 2 - 1; i++)
            {
                cout<<"*";
            }
        }
        else
        {
            for (int i = 0; i < (m - cnt); i++)
            {
                cout<<" ";
            }
            for (int i = 0; i < cnt * 2 - 1; i++)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}