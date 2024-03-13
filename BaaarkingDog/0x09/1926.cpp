#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int n, m; cin>>n>>m;
    int pics[502][502];
    bool vstd[502][502];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>pics[i][j];
        }
    }

    int maxPic = 0;
    int numPic = 0;
    int area;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int cx, cy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pics[i][j] == 0) continue;
            else if (vstd[i][j] == 1) continue;

            vstd[i][j] = 1;
            numPic++;
            area = 0;

            queue<pair<int, int>> Q;
            Q.push({i, j});
            while(Q.empty() == false)
            {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int d = 0; d < 4; d++)
                {
                    cx = cur.first + dx[d];
                    cy = cur.second + dy[d];
                    if (cx < 0 || cx > n - 1 || cy < 0 || cy > m - 1) continue;
                    if (vstd[cx][cy] || pics[cx][cy] != 1) continue;
                    vstd[cx][cy] = 1;
                    Q.push({cx, cy});
                }
            }
            maxPic = max(maxPic, area);
        }
    }
    cout<<numPic<<"\n"<<maxPic;
    return 0;

}