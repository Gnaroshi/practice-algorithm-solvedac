// problem: 텔레프라임
// id: 7789
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    bool a = true, b = true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            a = false;
            break;
        }
    }
    string as = to_string(n);
    as.insert(as.begin(), char(t + '0'));
    n = stoi(as);
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            b = false;
            break;
        }
    }
    if (a && b)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}