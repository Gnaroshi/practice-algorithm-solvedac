// problem: 일우는 야바위꾼
// id: 20361
// time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, x, k, a, b;
//     cin >> n >> x >> k;
//     int *ns = (int *)malloc(sizeof(int) * n + 1);
//     fill(ns, ns + n + 1, 0);
//     ns[x] = 1;
//     for (int i = 0; i < k; i++)
//     {
//         cin >> a >> b;
//         if (ns[a] == 1 || ns[b] == 1)
//             swap(ns[a], ns[b]);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (ns[i])
//         {
//             cout << i;
//             break;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, k, t, a, b;
    cin >> n >> x >> k;
    t = x;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        if (a == t)
            t = b;
        else if (b == t)
            t = a;
    }
    cout << t;

    return 0;
}