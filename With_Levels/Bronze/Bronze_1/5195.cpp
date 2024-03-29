// // problem: Stump Speech
// // id: 5195
// // tag:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc, n, p, ans, l, wl;
//     string s, t;
//     bool chk;
//     cin >> tc >> n;
//     for (int tcc = 1; tcc <= tc; tcc++)
//     {
//         map<string, int> m;
//         ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin.ignore();
//             getline(cin, s);
//             cin >> p;
//             m[s] = p;
//         }
//         cin.ignore();
//         string t = "";
//         while (getline(cin, s))
//         {
//             if (s.length() == 1 && isdigit(s[0]))
//                 break;
//             t += ' ';
//             t += s;
//         }

//         l = t.length();
//         for (auto w : m)
//         {
//             wl = w.first.length();
//             for (int i = 0; i < l - wl + 1; i++)
//             {
//                 if (t.substr(i, wl) == w.first)
//                     ans += w.second;
//             }
//         }
//         cout << "Data Set " << tcc << ":\n"
//              << ans << '\n';
//     }

//     return 0;
// }
