#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    int n_len = n.length();
    if (n_len == 1 && n[0] == '0')
    {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 0; i < n_len; i++)
    {
        vector<int> temp;
        int one_digit = int(n[i] - '0');
        for (int j = 0; j < 3; j++)
        {
            temp.push_back(one_digit % 2);
            one_digit /= 2;
        }
        for (int j = 0; j < 3; j++)
        {
            int t = temp.back();
            v.push_back(t);
            temp.pop_back();
        }
    }

    if (v.size() == 1)
    {
        cout << v[0];
    }
    else
    {
        bool first = true;
        for (auto i : v)
        {
            if (i == 0 && first)
            {
                continue;
            }
            else
                first = false;
            cout << i;
        }
    }
    cout << '\n';

    return 0;
}