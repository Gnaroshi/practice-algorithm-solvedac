// problem: 이진수 나눗셈
// id: 22950
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, iter;
    string s;
    cin >> n >> s >> k;
    iter = s.length();
    l = iter;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '1')
        {
            l = i;
            break;
        }
    }
    s = s.substr(l);
    iter = s.length();
    if (iter == 0)
    {
        cout << "YES";
        return 0;
    }
    else if (iter < k)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        reverse(s.begin(), s.end());
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '1')
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}