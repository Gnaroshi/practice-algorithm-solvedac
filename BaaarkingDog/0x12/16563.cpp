#include <bits/stdc++.h>
using namespace std;

// #define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            cout << 1 << '\n';
            continue;
        }

        int iter = num;
        vector<int> ans;
        for (int i = 2; i * i <= iter; i++)
        {
            while (num % i == 0)
            {
                ans.push_back(i);
                num /= i;
            }
        }
        for (auto a : ans)
            cout << a << " ";
        cout << '\n';
    }

    return 0;
}
