#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int freq[26];
    //전역변수로 배열을 선언하면 자동으로 0으로 초기화가 됨
    //하지만 지역변수로 선언하면 쓰레기 값이 들어가게 됨
    //이를 0으로 초기화 해주기 위하여 fill을 사용
    fill(freq, freq+26, 0);

    string s;
    cin>>s;
    for(auto c : s)
    {
        freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<freq[i]<<' ';
    }

}