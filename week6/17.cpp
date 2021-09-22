//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
vector<vi>adj;
vi vis,col;
bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int child:adj[node]){
        if(!vis[child])
         if(dfs(child,c^1))return true;
        else
            if(col[node]==col[child])
                return true;
    }
    return false;
}
int main()
{   
        int n;
        cin>>n;
        adj.assign(n+1,vi());
        vis.assign(n+1,0);
        col.assign(n+1,0);
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
        (dfs(1,0))?cout<<"YES BIPARTITE":cout<<"NOT BIPARTITE";
}
