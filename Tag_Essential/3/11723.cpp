// #include <bits/stdc++.h>
// using namespace std;

// set<int> S;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     S.clear();
//     while (tc--)
//     {
//         string temp;
//         cin >> temp;
//         int input_int;
//         if (temp == "add")
//         {
//             cin >> input_int;
//             if (S.count(input_int) == 0)
//             {
//                 S.insert(input_int);
//             }
//         }
//         else if (temp == "remove")
//         {
//             cin >> input_int;
//             if (S.count(input_int) != 0)
//             {
//                 set<int>::iterator it;
//                 it = S.find(input_int);
//                 S.erase(input_int);
//             }
//         }
//         else if (temp == "check")
//         {
//             cin >> input_int;
//             if (S.count(input_int) != 0)
//             {
//                 cout << "1\n";
//             }
//             else
//                 cout << "0\n";
//         }
//         else if (temp == "toggle")
//         {
//             cin >> input_int;
//             if (S.count(input_int) == 0)
//             {
//                 S.insert(input_int);
//             }
//             else
//             {
//                 set<int>::iterator it;
//                 it = S.find(input_int);
//                 S.erase(it);
//             }
//         }
//         else if (temp == "all")
//         {
//             S.clear();
//             for (int i = 1; i < 21; i++)
//             {
//                 S.insert(i);
//             }
//         }
//         else // empty
//         {
//             S.clear();
//         }
//     }
//     return 0;
// }
//시간초과

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    int input_int;
    int bits_ans = 0;
    string s;

    while (tc--)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> input_int;
            bits_ans |= (1 << input_int);
        }
        else if (s == "remove")
        {
            cin >> input_int;
            bits_ans &= ~(1 << input_int);
        }
        else if (s == "check")
        {
            cin >> input_int;
            if (bits_ans & (1 << input_int))
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (s == "toggle")
        {
            cin >> input_int;
            bits_ans ^= (1 << input_int);
        }
        else if (s == "all")
        {
            bits_ans = (1 << 21) - 1;
        }
        else // empty
        {
            bits_ans = 0;
        }
    }
    return 0;
}