#include <bits/stdc++.h>
using namespace std;

//정석적인 구현
struct NODE
{
    struct NODE *prev, *next;
    int data;
};

//야매 연결 리스트
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void traverse(int dat[], int pre[], int nxt[])
{
    int cur = nxt[0];
    while(true)
    {
        cout<<dat[cur]<<' ';
        cur = nxt[cur];
        if (cur == -1) break;
    }
    cout<<"\n\n";
    return;
}

int main(void)
{
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    dat[0] = -1; pre[0] = -1, nxt[0] = 2;
    dat[2] = 13; pre[2] = 0; nxt[2] = 1;
    dat[1] = 65; pre[1] = 2; nxt[1] = 4;
    dat[4] = 21; pre[4] = 1; nxt[4] = 5;
    dat[5] = 17; pre[5] = 4; nxt[5] = -1;
    
    traverse(dat, pre, nxt);

}

