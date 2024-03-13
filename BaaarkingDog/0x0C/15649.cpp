#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool chck[10];

void arrf(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if(!chck[i])
        {
            arr[k] = i;
            chck[i] = 1;
            arrf(k + 1);
            chck[i] = 0;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    arrf(0);

    return 0;
}