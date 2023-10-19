#include<bits/stdc++.h>
using namespace std;

int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<pair<int,int>>a;
        int visited[V]={0};
        a.push({0,0});
        visited[0]=1;
        while(!a.empty())
        {
            int node=a.front().first;
            int level=a.front().second;
            if(node==X)
            {
                return a.front().second;
            }
            a.pop();
            for(auto i:adj[node])
            {
                if(visited[i]==0)
                {
                a.push({i,level+1});
                visited[i]=1;
                }
            }
        }
        return -1;
	}