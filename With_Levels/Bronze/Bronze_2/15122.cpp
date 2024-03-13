// problem: Forbidden Zero
// id: 15122
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool fn(int a)
{
    string s = to_string(a);
    for (auto i : s)
        if (i == '0')
            return false;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = n + 1;; i++)
    {
        if (fn(i))
        {
            cout << i;
            break;
        }
    }

    return 0;
}