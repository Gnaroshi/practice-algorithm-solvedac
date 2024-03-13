// problem: Barabashka
// id: 31291
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ob[5] = {"white Barabashka", "blue book", "red chair", "gray mouse", "green bottle"};
string rob[5] = {"Barabashka", "book", "chair", "mouse", "bottle"};
string rcl[5] = {"white", "blue", "red", "gray", "green"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    string s, t;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, s);
        int iter = s.length();
        t = "";
        for (int j = 0; j < iter; j++)
        {
            if (isalpha(s[j]))
                t += s[j];
            else if (s[j] == ' ')
                t += ' ';
        }
        v.push_back(t);
    }

    for (auto i : v)
    {
        bool chk = false;
        for (int j = 0; j < 5; j++)
        {
            if (i.find(ob[j]) != string::npos)
            {
                if (j == 0)
                    cout << "white Barabashka\n";
                else
                    cout << ob[j] << '\n';
                chk = true;
                break;
            }
        }
        if (!chk)
        {
            bool tchk[5] = {0};
            int ans = 0, vtsize;
            stringstream st;
            st.str(i);
            vector<string> vt;
            while (st >> t)
                vt.push_back(t);
            vtsize = vt.size() - 1;
            for (int j = 0; j < vtsize; j++)
            {
                for (int k = 0; k < 5; k++)
                {
                    if (vt[j].find(rcl[k]) != string::npos)
                    {
                        for (int a = 0; a < 5; a++)
                        {
                            if (vt[j + 1].find(rob[a]) != string::npos)
                            {
                                tchk[k] = tchk[a] = 1;
                            }
                        }
                    }
                }
            }
            // for (int j = 0; j < 5; j++)
            // {
            //     if (t.find(rob[j]) != string::npos || t.find(rcl[j]) != string::npos)
            //     {
            //         tchk[j] = 1;
            //     }
            // }
            for (int j = 0; j < 5; j++)
            {
                if (!tchk[j])
                {
                    if (j == 0)
                        cout << "white Barabashka\n";
                    else
                        cout << ob[j] << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}