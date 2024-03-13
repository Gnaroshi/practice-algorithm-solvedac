// #include <bits/stdc++.h>

// using namespace std;

// int main(void)
// {
//     int n, l; cin>>n>>l;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++) cin>>arr[i];
//     deque<int> DQ;
    
//     int loc = 0;
//     while(n--)
//     {
//         int tempMin = 1000000001;
//         if (DQ.size() < l)
//         {
//             DQ.push_back(arr[loc]);
            
//         }
//         else
//         {
//             DQ.pop_front();
//             DQ.push_back(arr[loc]);
//         }

//         for (int i = 0; i < DQ.size(); i++)
//         {
//             if (tempMin > DQ[i])
//             {
//                 tempMin = DQ[i];
//             }
//         }
//         cout<<tempMin<<" ";
//         loc++;
//     }
    
//     return 0;
// }
//시간 초과

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l; cin>>n>>l;

    deque<pair<int,int>> DQ;
    
    int temp;

    for (int i = 0; i < n; ++i)
    {
        cin>>temp;

        while (!DQ.empty() && DQ.back().second >= temp) DQ.pop_back();
        DQ.push_back({i, temp});

        // cout<<"DQ: ";
        // for (int j = 0; j < DQ.size(); j++)
        // {
        //     cout<<DQ[j].first<<" ";
        //     cout<<DQ[j].second<<" ";
        //     cout<<":: ";
        // }
        // cout<<"\n";

        if (DQ.front().first < i - l + 1) DQ.pop_front();
        cout<<DQ.front().second<<" ";
    }
    return 0;
}
