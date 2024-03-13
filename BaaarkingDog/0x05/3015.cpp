
#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int tc; cin>>tc;
    //first가 키, second는 연속으로 볼 수 있는 사람의 수
    stack<pair<int, int>> S;
    //답, 서로 볼 수 있는 쌍의 수
    long long sum = 0;

    int temp;
    int tempSum = 0;
    for (int i = 0; i < tc; i++)
    {
        cin>>temp;
        tempSum = 1;
        //다음 사람과의 키가 같거나 작을 때까지
        //키의 내림차순을 유지
        while(!S.empty() && S.top().first <= temp)
        {
            //볼 수 있는 사람들의 연속 하는 수 만큼 답에 더함
            sum += S.top().second;
            //현재 키와 같다면
            if (S.top().first == temp) tempSum += S.top().second;
            S.pop();
        }
        if (!S.empty()) sum++;
        S.push({temp, tempSum});
    }
    cout<<sum<<"\n";

    return 0;
}