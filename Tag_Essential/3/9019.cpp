#include <bits/stdc++.h>
using namespace std;

#define MX 10005

int tc;
vector<bool> vist(MX);
char opers[4] = {'D', 'S', 'R', 'L'};

// int get_digit(int a)
// {
//     int digit = 1;
//     while (true)
//     {
//         a /= 10;
//         if (a == 0)
//             break;
//         digit++;
//     }
//     return digit;
// }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        fill(vist.begin(), vist.end(), false);
        // vector<char> v[MX];
        vector<string> v(MX);
        queue<int> q;

        vist[a] = false;
        q.push(a);

        while (!q.empty())
        {
            auto cur = q.front();
            q.pop();
            if (cur == b)
                break;
            int cur_d, cur_s, cur_r, cur_l;
            cur_d = (cur * 2) % 10000;
            if (cur == 0)
                cur_s = 9999;
            else
                cur_s = cur - 1;

            // int cur_digit = get_digit(cur) - 1;
            // int intg = 1;
            // for (int i = 0; i < cur_digit; i++)
            //     intg *= 10;

            // int r_one, r_ex;
            // r_one = cur % 10;
            // r_ex = cur / 10;
            cur_r = (cur % 10) * 1000 + (cur / 10);

            // int l_one, l_ex;
            // l_one = cur / 1000;
            // l_ex = cur % 1000;
            cur_l = (cur % 1000) * 10 + (cur / 1000);

            int oper = -1;
            // cout << "cur: " << cur;
            string cur_string = v[cur];
            for (int nxt : {cur_d, cur_s, cur_r, cur_l})
            {
                oper++;
                // cout << " " << opers[oper] << " " << nxt;
                if (vist[nxt])
                    continue;
                vist[nxt] = true;
                // for (auto t : v[cur])
                // {
                //     v[nxt].push_back(t);
                // }
                // v[nxt].push_back(opers[oper]);
                v[nxt] = cur_string + opers[oper];
                q.push(nxt);
            }
            // cout << '\n';
        }

        // for (auto t : v[b])
        //     cout << t;
        cout << v[b];
        cout << '\n';
    }

    return 0;
}