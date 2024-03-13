// #include <iostream>
// #include <stack>

// using namespace std;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n; cin>>n;
//     stack<int> nums;
//     stack<int> numsTemp;
//     stack<int> ans;

//     int temp;
//     for (int i = 0; i < n; i++) 
//     {
//         cin>>temp;
//         nums.push(temp);
//     }

//     int counter = nums.size();
//     int tempMax = -1;
//     int tempTower;
//     int plate;
//     for (int i = 0; i < n; i++)
//     {
//         tempTower = nums.top();
//         nums.pop();
//         counter = nums.size();

//         while(counter > 0)
//         {
//             tempMax = nums.top();
//             if (tempTower < tempMax)
//             {
//                 ans.push(counter);
//                 while(true)
//                 {
//                     if (numsTemp.empty() == 1) break;
//                     plate = numsTemp.top();
//                     nums.push(plate);
//                     numsTemp.pop();
//                 }
//                 break;
//             }
//             else
//             {
//                 plate = nums.top();
//                 numsTemp.push(plate);
//                 nums.pop();
//             }
//             counter--;
//             if (counter == 0)
//             {
//                 while(true)
//                 {
//                     if (numsTemp.empty() == 1) break;
//                     plate = numsTemp.top();
//                     nums.push(plate);
//                     numsTemp.pop();
//                 }
//                 ans.push(0);
//                 break;
//             }
//         }
//     }
//     ans.push(0);

//     int ansEle;
//     for (int i = 0; i < n; i++)
//     {
//         ansEle = ans.top();
//         cout<<ansEle<<" ";
//         ans.pop();
//     }
    

//     return 0;
// }
// 시간초과

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    int n; cin>>n;
    stack<pair<int, int>> S;
    queue<int> ans;
    S.push({100000001, 0});
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        while(S.top().first < temp)
        {
            S.pop();
        }
        ans.push(S.top().second);
        S.push({temp, i + 1});
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans.front()<<" ";
        ans.pop();
    }
}
