// problem: 수 이어 쓰기 3
// id: 2154
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "";
    int n, c = 1, ni, si;
    cin >> n;
    for (int i = 1; i <= n; i++)
        s.append(to_string(i));
    cout << s.find(to_string(n)) + 1;

    return 0;
}
// 2868	4
// // problem: 수 이어 쓰기 3
// // id: 2154
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string s = "";
//     int n, c = 1, ni, si;
//     cin >> n;
//     string ns = to_string(n);
//     ni = ns.length();
//     for (int i = 1; i <= n; i++)
//         s.append(to_string(i));
//     si = s.length();
//     for (int i = 0; i < si - ni + 1; i++)
//     {
//         if (s.substr(i, ni) == ns)
//         {
//             cout << i + 1;
//             break;
//         }
//     }

//     return 0;
// } 2868	8