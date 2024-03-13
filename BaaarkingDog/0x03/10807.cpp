#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int *nums = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) cin>>nums[i];
    int v; cin>>v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == v) count++;
    }
    cout<<count<<"\n";
    return 0;
}
