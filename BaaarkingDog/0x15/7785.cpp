// #include <bits/stdc++.h>
// using namespace std;

// int n;
// vector<pair<string, string>> v;
// vector<string> ans;

// bool cmp(string a, string b)
// {
//     return a > b;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n;

//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         string temp1, temp2;
//         cin >> temp1 >> temp2;
//         v.push_back({temp1, temp2});
//     }

//     for (auto input_v : v)
//     {
//         if (input_v.second == "enter")
//         {
//             bool isIn = false;
//             for (auto temp : ans)
//             {
//                 if (temp == input_v.first)
//                 {
//                     isIn = true;
//                     break;
//                 }
//             }
//             if (!isIn)
//             {
//                 ans.push_back(input_v.first);
//             }
//         }

//         if (input_v.second == "leave")
//         {
//             auto iter = find(ans.begin(), ans.end(), input_v.first);
//             if (iter != ans.end())
//                 ans.erase(iter);
//         }
//     }

//     sort(ans.begin(), ans.end(), cmp);
//     for (auto temp : ans)
//         cout << temp << '\n';

//     return 0;
// }
// timeout
