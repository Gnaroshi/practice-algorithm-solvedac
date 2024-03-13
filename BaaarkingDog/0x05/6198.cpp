#include <iostream>
#include <stack>

using namespace std;

int main(void)
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    long long ans = 0;
    long long temp;
    stack<int> S;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        while(S.empty() == 0 && S.top() < temp + 1)
        {
            S.pop();
        }
        ans += S.size();
        S.push(temp);
    }
    cout<<ans<<"\n";



    return 0;
}
