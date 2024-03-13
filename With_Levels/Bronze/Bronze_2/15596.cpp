// problem: 정수 N개의 합
// id: 15596
// time taken:
// tag: implement function

#include <vector>
long long sum(std::vector<int> &a)
{
    long long ans = 0;
    for (auto i : a)
        ans += i;
    return ans;
}
