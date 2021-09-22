//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
vector<vi>adj;
vi vis;
void dfs(int node)
{
    vis[node]=1;for(int child:adj[node])if(!vis[child])dfs(child);
}
int main()
{   
        int n;
        cin>>n;
        adj.assign(n+1,vi());
        vis.assign(n+1,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int x;
                cin>>x;
                if(x)
                {
                    adj[i].push_back(j);
                }
            }
        }
        int x,y;
        cin>>x>>y;
        dfs(x);
        (vis[y])?cout<<"YES PATH EXIST\n":cout<<"NO SUCH PATH EXIST\n";
}
