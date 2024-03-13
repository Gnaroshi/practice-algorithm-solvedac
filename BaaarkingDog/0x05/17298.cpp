//for문으로 풀면 시간초과
//stack을 이용하면 시간복잡도가 줄어듬
#include <iostream>
#include <stack>

using namespace std;

//스택에 첫 원소를 삽입
//current element를 next로 표시
//만약 스택이 비어있지 않으면 next와 top을 비교
//만약 next가 top보다 크면 pop, next는 pop된 원소의 오큰수
//next보다 작은 원소가 pop될 때까지 계속 pop
//next는 모든 pop된 원소의 오큰수가 된다.
//이후 next를 stack에 삽입
//위의 작업이 모두 끝났다면 스택의 모든 원소를 pop
//해당하는 원소들에 대하여 -1을 출력

int main(void)
{
    int tc; cin>>tc;
    int *arr = new int[tc];
    int *ans = new int[tc];

    stack<int> S;
    for (int i = 0; i < tc; i++) cin>>arr[i];

    for (int i = tc - 1; i > -1; i--)
    {
        if (!S.empty())
        {
            while(!S.empty() && S.top() <= arr[i])
            {
                S.pop();
            }
        }
        if (!S.empty()) ans[i] = S.top();
        else ans[i] = -1;
        S.push(arr[i]);
    }
    for (int i = 0; i < tc; i++) cout<<ans[i]<<" ";
    return 0;
}