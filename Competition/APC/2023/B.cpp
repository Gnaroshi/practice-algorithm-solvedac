// problem: B번 - 2023 아주머학교 프로그래딩 정시머힌
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length(), cnt = 0, ori = 0;
        vector<char> v;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '@')
            {
                v.push_back('a');
                cnt++;
            }
            else if (s[i] == '[')
            {
                v.push_back('c');
                cnt++;
            }
            else if (s[i] == '!')
            {
                v.push_back('i');
                cnt++;
            }
            else if (s[i] == ';')
            {
                v.push_back('j');
                cnt++;
            }
            else if (s[i] == '^')
            {
                v.push_back('n');
                cnt++;
            }
            else if (s[i] == '0')
            {
                v.push_back('o');
                cnt++;
            }
            else if (s[i] == '7')
            {
                v.push_back('t');
                cnt++;
            }
            else if (s[i] == '\\')
            {
                if (i + 2 < iter)
                {
                    if (s[i + 1] == '\\' && s[i + 2] == '\'')
                    {
                        v.push_back('w');
                        i += 2;
                        cnt++;
                    }
                    else if (s[i + 1] == '\'')
                    {
                        v.push_back('v');
                        i++;
                        cnt++;
                    }
                }
                else if (i + 1 < iter)
                {
                    if (s[i + 1] == '\'')
                    {
                        v.push_back('v');
                        i++;
                        cnt++;
                    }
                }
            }
            else
                v.push_back(s[i]);
            ori++;
        }
        if (ori % 2 == 1)
            ori++;
        if (cnt >= ori / 2)
            cout << "I don't understand";
        else
        {
            for (auto i : v)
                cout << i;
        }
        cout << '\n';
    }

    return 0;
}