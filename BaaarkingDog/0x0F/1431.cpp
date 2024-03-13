#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b)
{
    if (a.length() != b.length())
    {
        if (a.length() < b.length())
            return true;
        else
            return false;
    }
    else
    {
        int a_num = 0;
        int b_num = 0;

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] <= '9' && a[i] >= '0')
                a_num += (a[i] - '0');
        }

        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] <= '9' && b[i] >= '0')
                b_num += (b[i] - '0');
        }

        if (a_num != b_num)
        {
            return a_num < b_num;
        }
        else
        {
            return a < b;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> V;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        V.push_back(temp);
    }

    sort(V.begin(), V.end(), cmp);

    for (auto s : V)
    {
        cout << s << '\n';
    }

    return 0;
}