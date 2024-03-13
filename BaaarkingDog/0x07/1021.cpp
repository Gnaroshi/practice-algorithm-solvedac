// #include <iostream>
// #include <deque>

// //deque: double ended queue

// using namespace std;

// int main(void)
// {
//     int n, m; cin>>n>>m;
//     int *arr = new int[n];
//     deque<int> dq;

//     int temp;
//     for (int i = 0; i < m; i++)
//     {
//         cin>>temp;
//         arr[i] = temp; 
//     }
//     for (int i = 0; i < n; i++) dq.push_back(i + 1);

//     int loc = 0;
//     int cnt = 0;
//     int tempEle;
//     while(loc != m - 1)
//     {
//         if (abs(arr[loc] - dq.front()) > abs(arr[loc] - dq.back()))
//         {
//             while(true)
//             {
//                 if (dq.back() == arr[loc])
//                 {
//                     dq.pop_back();
//                     loc++;
//                     break;
//                 }
//                 else
//                 {
//                     tempEle = dq.back();
//                     dq.push_front(tempEle);
//                     dq.pop_back();
//                     cnt++;
//                 }
//             }
//         }
//         else
//         {
//             while(true)
//             {
//                 if (dq.front() == arr[loc])
//                 {
//                     dq.pop_front();
//                     loc++;
//                     break;
//                 }
//                 else
//                 {
//                     tempEle = dq.front();
//                     dq.push_back(tempEle);
//                     dq.pop_front();
//                     cnt++;
//                 }
//             }

//         }
//     }

//     cout<<cnt<<"\n";
//     return 0;

// }
// 위 코드는 이전의 deque를 보존

// #include <iostream>
// #include <deque>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m; cin>>n>>m;
    deque<int> dq;
    for (int i = 0; i < n; i++) dq.push_back(i + 1);

    int temp;
    int loc;
    int cnt = 0;
    while(m--)
    {
        cin>>temp;
        loc = find(dq.begin(), dq.end(), temp) - dq.begin();

        while(dq.front() != temp)
        {
            if (loc > dq.size() - loc)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cnt++;
        }
        dq.pop_front();
    }

    cout<<cnt<<"\n";
    return 0;
}