// problem: Slice String
// id: 30034
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chkad[26], chkau[26], chkn[10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, sl;
    string s;
    cin >> n;
    char c;
    while (n--)
    {
        cin >> c;
        if (isupper(c))
            chkau[c - 'A'] = 1;
        else
            chkad[c - 'a'] = 1;
    }
    cin >> m;
    while (m--)
    {
        cin >> c;
        chkn[c - '0'] = 1;
    }
    cin >> k;
    while (k--)
    {
        cin >> c;
        if (isalpha(c))
        {
            if (isupper(c))
                chkau[c - 'A'] = 0;
            else
                chkad[c - 'a'] = 0;
        }
        else
            chkn[c - '0'] = 0;
    }
    cin >> sl;
    cin.ignore();
    getline(cin, s);
    bool isE = true;
    string t = "";
    vector<string> v;
    for (auto i : s)
    {
        isE = true;
        if (isalpha(i))
        {
            if (isupper(i))
            {
                if (chkau[i - 'A'])
                    isE = false;
            }
            else
            {
                if (chkad[i - 'a'])
                    isE = false;
            }
        }
        else if (isdigit(i))
        {
            if (chkn[i - '0'])
                isE = false;
        }
        else
            isE = false;
        if (isE)
        {
            t += i;
        }
        else
        {
            if (t.length() != 0)
            {
                v.emplace_back(t);
                t = "";
            }
        }
    }
    if (t.length() != 0)
        v.emplace_back(t);
    for (auto i : v)
        cout << i << '\n';

    return 0;
}