// problem: Insert Digit
// id:
// time taken:
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        string num;
        ll n, d, loc;
        cin >> n >> d;
        cin >> num;
        bool isD = false;
        for (int i = 0; i < n; i++)
        {
            if (!isD)
            {
                if (num[i] - '0' < d)
                {
                    cout << d << num[i];
                    isD = true;
                }
                else
                    cout << num[i];
            }
            else
                cout << num[i];
        }
        if (!isD)
            cout << d;
        cout << '\n';
    }

    return 0;
}