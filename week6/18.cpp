//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
vector<vi>adj;
vi vis;
bool dfs(int node,int par)
{
    vis[node]=1;
    for(int child:adj[node])
     {
        if(child==par)continue;
        if(vis[child])
                return true;
        else
            if(dfs(child,node))return true;
     }
    return false;
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
       (dfs(1,-1))?cout<<"YES CYCLE EXIST":cout<<"NO CYCLE EXIST";
}
