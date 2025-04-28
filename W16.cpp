#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>&adj,int n,int u,int v)
{
    if(adj[u][v]==1){ 
        return 1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(adj[u][i]==1 && i>u)
        {
            return dfs(adj,n,i,v);
        }
    }
    
    return -1;
    
}



int main() {

    int n,u,v;
    cin>>n;
    
    vector<vector<int>> adjM(n,vector<int> (n,0));
    int edge;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adjM[u][v]=1;
        adjM[v][u]=1;
    }
    
    cin>>u>>v;
    int ans = dfs(adjM,n,u-1,v-1);
    if(ans==1) cout<<"Yes path exists";
    if(ans==-1) cout<<"No path exists";
    return 0;
}

