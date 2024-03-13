// problem: 0 = not cute / 1 = cute
// id: 10886
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t)
            cnt++;
    }
    if (cnt > n / 2)
        cout << "Junhee is cute!";
    else
        cout << "Junhee is not cute!";

    return 0;
}