// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, m;
//     cin >> n >> m;

//     string pn = "";

//     for (int i = 0; i < n; i++)
//     {
//         pn.push_back('I');
//         pn.push_back('O');
//     }
//     pn.push_back('I');
//     // cout << "pn: " << pn << '\n';

//     string temp;
//     cin >> temp;

//     int ans = 0;
//     bool isPn;
//     for (int i = 0; i < m - n; i++)
//     {
//         isPn = true;
//         for (int j = 0; j < n * 2 + 1; j++)
//         {
//             if (temp[i + j] != pn[j])
//             {
//                 isPn = false;
//                 break;
//             }
//         }
//         if (isPn)
//             ans++;
//     }

//     cout << ans << '\n';

//     return 0;
// }
// 50

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string temp;
    cin >> temp;

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int pn = 0;

        if (temp[i] == 'I')
        {
            while (temp[i + 1] == 'O' && temp[i + 2] == 'I')
            {
                pn++;
                if (pn == n)
                {
                    ans++;
                    pn--;
                }
                i += 2;
            }
        }
        else
            continue;
    }

    cout << ans << '\n';
    return 0;
}