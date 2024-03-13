// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, string>> V(n);

//     for (int i = 0; i < n; i++)
//     {
//         string temp;
//         cin >> temp;
//         V[i] = {i + 1, temp};
//     }

//     for (int i = 0; i < m; i++)
//     {
//         string temp;
//         cin >> temp;
//         if (('0' < temp[0] && '9' >= temp[0]))
//         {
//             cout << V[stoi(temp) - 1].second << '\n';
//         }
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (V[j].second == temp)
//                 {
//                     cout << V[j].first << '\n';
//                 }
//             }
//         }
//     }
//     return 0;
// }
//시간초과
// maps 이용

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> V(n);
    map<string, int> M;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        V[i] = {i, temp};
        M.insert({temp, i});
    }

    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        if (('0' < temp[0]) && ('9' >= temp[0]))
        {
            cout << V[stoi(temp) - 1].second << '\n';
        }
        else
        {
            auto iter = M.find(temp);
            cout << iter->second + 1 << '\n';
        }
    }

    return 0;
}