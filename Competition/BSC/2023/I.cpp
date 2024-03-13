// problem: I번 - 임스의 데일리 인증 스터디
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector<string> a;
    vector<string> b;
    while (n--)
    {
        getline(cin, s);
        if (s.length() > 7)
        {
            if (s.substr(0, 7) == "boj.kr/")
            {
                bool chk = true;
                int iter = s.length();
                for (int i = 7; i < iter; i++)
                {
                    if (!isdigit(s[i]))
                    {
                        chk = false;
                        break;
                    }
                }
                if (chk)
                    b.emplace_back(s);
                else
                    a.emplace_back(s);
            }
            else
                a.emplace_back(s);
        }
        else
            a.emplace_back(s);
    }
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    for (auto i : a)
        cout << i << '\n';
    for (auto i : b)
        cout << i << '\n';

    return 0;
}