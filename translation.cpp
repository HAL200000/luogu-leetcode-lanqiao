#include <bits/stdc++.h>
using namespace std;
const int maxn = 50, maxm = 70;
const float inf = 1e9;
int n, m, u, v;
float w, dis[maxn];
bool vis[maxn];
int head[maxn], cnt;
//企业：24,42,34, [1--3]
//仓库+(储备库)：28,23,35,31,22,36,29,38,(27,30) [4--13]
int special_point[15] = {0,24,42,34,28,23,35,31,22,36,29,38,27,30};
int f[maxn];
struct node1
{
    vector<int> line;
    float sum;
}min_cost[maxn][maxn];

struct node
{
    int to, nxt;
    float w;
}edge[maxm];

void add_edge(int from, int to, float w)
{
    edge[++cnt].nxt = head[from];
    edge[cnt].to = to;
    edge[cnt].w = w;
    head[from] = cnt;
}

void dijkstra(int s)
{
    priority_queue< pair<float,int>, vector<pair<float,int> >, greater<pair<float,int> > > q;
    dis[s] = 0;
    q.push(make_pair(0,s));
    while(!q.empty())
    {
        int now = q.top().second;
        q.pop();
        if(!vis[now])
        {
            vis[now] = 1;
            for(int i = head[now]; i; i = edge[i].nxt)
            {
                int to = edge[i].to;
                if(dis[to] > dis[now] + edge[i].w )
                {
                    dis[to] = dis[now] + edge[i].w;
                    f[to] = now;
                }
                q.push(make_pair(dis[to], to));
            }
        }
    }
    
}

int main()
{
    n = 42;
    m = 128;
    for(int i = 1; i <= m; i ++)
    {
        cin >> u >> v >> w;
        add_edge(u, v, w);
        //add_edge(v, u, w);
    }
    
    for(int i = 1; i <= 13; i ++)
    {
        memset(vis, 0, sizeof(vis));
        memset(f, 0, sizeof(f));
        for(int j = 1; j <= maxn; j ++) dis[j] = inf;
        int now = special_point[i];
        dijkstra(now);

        for(int j = 1; j <= 13; j++)
        {
            int to = special_point[j];
            
            min_cost[i][j].sum = dis[to];
            printf("The min cost from %d to %d = %.2f \n",i,j,min_cost[i][j].sum);


            while(f[to])
            {
                min_cost[i][j].line.push_back(to);
                to = f[to];
            } 
            min_cost[i][j].line.push_back(now);
            printf("the path is listed below:\n  ");
            if(i == j) continue;
            for(int k = min_cost[i][j].line.size() - 1; k >= 0; k--) 
            {
                cout<<min_cost[i][j].line[k];
                if(k != 0 ) cout<<"->";
            }
            cout<<endl;
        }     
        
    }
    for(int i = 1; i <= 13; i ++)
    {
        for(int j = 1; j <= 13; j++)
        {
            printf("%.2f\t",min_cost[i][j].sum);
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
    /*
    
    
    
}
/*

存图

n = 42 
m = 68

以下是输入：

36 33 48 
36 3 60
3 2 42
33 1 72
33 37 45.6
37 38 42
1 2 48
1 34 54
34 32 30
38 32 81.6
3 10 50.4
10 12 62.4
12 13 96
10 7 96 
2 7 60
2 9 74.4
7 27 140
13 27 100
9 27 48
9 40 33.6
27 40 64
31 9 62.4
32 31 60
32 35 117.6
32 39 74.4
35 39 122.4
39 5 170
39 30 18
40 5 76
40 6 36
5 6 56
5 4 20 
6 4 36
27 11 96
27 26 84
13 21 81.6
21 24 60
24 26 36
21 22 96
22 19 86.4
26 19 33.6
26 25 21.6
22 20 54
20 16 69.6
19 18 26.4
18 16 150
16 23 78
18 23 54
25 18 60
25 15 55.2
11 15 112
11 25 80
11 6 64
6 42 57.6
30 4 84
4 29 80
30 29 74.4
29 28 72
42 41 31.2
41 28 38.4
15 41 33.6
18 15 69.6
15 8 76
28 8 100
23 17 62.4
23 14 60
14 17 112
8 14 72


起点 终点 距离
1 2 40
1 33 60
1 34 45
2 1 40
2 3 35
2 7 50
2 9 62
3 2 35
3 10 42
3 36 50
4 5 10
4 6 30
4 29 40
4 30 70
5 4 10
5 6 28
5 39 85
5 40 38
6 4 30
6 5 28
6 11 32
6 40 30
6 42 48
7 2 50
7 10 48
7 27 70
8 14 36
8 15 38
8 28 50
9 2 62
9 27 40
9 40 28
10 3 42
10 7 48
10 12 52
11 6 32
11 15 56
11 27 48
12 10 52
12 13 80
13 12 80
13 21 68
13 27 50
14 8 36
14 17 56
15 8 38
15 11 56
15 18 58
15 25 46
15 41 28
16 18 75
16 20 58
16 23 65
17 14 56
17 23 52
18 15 58
18 16 75
18 19 22
18 23 45
18 25 30
19 18 22
19 22 72
19 26 28
20 16 58
20 22 45
21 13 68
21 22 80
21 24 50
22 19 72
22 20 45
22 21 80
23 16 65
23 17 52
23 18 45
24 21 50
24 26 30
25 15 46
25 18 30
25 26 18
26 19 28
26 24 30
26 25 18
27 7 70
27 9 40
27 11 48
27 13 50
27 40 32
28 8 50
28 29 60
28 41 32
29 4 40
29 28 60
29 30 62
30 4 70
30 29 62
30 39 15
31 32 50
32 31 50
32 34 25
32 35 98
32 38 68
32 39 62
33 1 60
33 36 40
33 37 38
34 1 45
34 32 25
35 32 98
35 39 102
36 3 50
36 33 40
37 33 38
37 38 35
38 32 68
38 37 35
39 5 85
39 30 15
39 32 62
39 35 102
40 5 38
40 6 30
40 9 28
40 27 32
41 15 28
41 28 32
41 42 26
42 6 48
42 41 26

*/
