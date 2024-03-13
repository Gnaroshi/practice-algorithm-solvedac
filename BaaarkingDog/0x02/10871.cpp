#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, x; cin>>n>>x;
    vector<int> series(n);
    for (int i = 0; i < n; i++)
    {
        cin>>series[i];
        if (series[i] < x)
        {
            cout<<series[i]<<" ";
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}