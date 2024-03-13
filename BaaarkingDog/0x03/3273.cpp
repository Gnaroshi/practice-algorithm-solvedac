// #include <iostream>
// using namespace std;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, x; cin>>n;
//     int nums[100001];
//     for (int i = 0; i < n; i++) cin>>nums[i];
//     cin>>x;

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (nums[i]+nums[j] == x) count++;
//         }
//     }

//     cout<<count<<"\n";
//     return 0;
// }
//시간초과

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector <int> v;
    int temp;
    for (int i = 0; i < n; i++) 
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int x; cin>>x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x) break;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == x) count++;
            else if (v[i] + v[j] > x) break;
        }
    }
    
    cout<<count<<"\n";
    return 0;

}