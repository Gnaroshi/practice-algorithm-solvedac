// #include <iostream>
// using namespace std;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc; cin>>tc;
//     string *words = new string[tc];
//     string temp;
//     int tempLen;
//     for (int i = 0; i < tc; i++) cin>>words[i];
//     for (int i = 0; i < tc; i++)
//     {
//         for (int j = i; j < tc; j++)
//         {
//             if (words[i].length() > words[j].length())
//             {
//                 temp = words[i];
//                 words[i] = words[j];
//                 words[j] = temp;
//             }
//             else if (words[i].length() == words[j].length())
//             {
//                 tempLen = words[i].length();
//                 for (int k = 0; k < tempLen; k++)
//                 {
//                     if (words[i][k] > words[j][k])
//                     {
//                         temp = words[i];
//                         words[i] = words[j];
//                         words[j] = temp;
//                         break;
//                     }
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < tc; i++)
//     {
//         cout<<words[i]<<"\n";
//     }
//     return 0;

// }
//시간초과

//아래의 코드는 algorithm과 vector을 이용하여 풀어본 코드
//compare bool 함수를 만들어 길이를 비교 후 정렬
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// bool compare(vector<pair<int, string>> a, vector<pair<int, string>> b)
// {
//     if (a.length() == b.length()) return a < b;
//     else return a.length() < b.length();
// }

int main(void)
{
    int n; cin>>n;
    string temp;
    vector<pair<int, string>> words;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        words.push_back({temp.length(), temp});
    }
    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());
    for (int i = 0; i < words.size(); i++) cout<<words[i].second<<"\n";
    return 0;
}