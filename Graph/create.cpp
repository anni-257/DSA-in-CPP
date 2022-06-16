#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj_Matrix(){
	int n,m;
	cout<<"Enter No.of Vertex and Number of Edges: ";
	cin>>n>>m;
	vector<vector<int>> adj(n+1,vector<int> (n+1,0)); 
	for(int i=0;i<m;++i){
		int u,v;
		cout<<"Enter two connected vertices: ";
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}	
	
	return adj;
}

vector<vector<int>> adj_List(){
	int n,m;
	cout<<"Enter No.of Vertex and Number of Edges: ";
	cin>>n>>m;
	vector<vector<int>> adj(n+1);
	for(int i=0;i<m;i++){
		int u,v;
		cout<<"Enter two connected vertices: ";
		cin>>u>>v;
		adj[u].emplace_back(v);
		adj[v].emplace_back(u);
	}
	
	return adj;
	
}

vector<int> BFS(int v, vector<vector<int>>& adj){
	vector<int> bfs;
	vector<int> vis(v+1,0);
	for(int i=1;i<v;i++){
		if(!vis[i]){
			queue<int>q;
			q.push(i);
			vis[i]=1;
			while(!q.empty()){
				int node=q.front();
				q.pop();
				bfs.push_back(node);
			
				for(auto x: adj[node]){
					if(!vis[x]){
						q.push(x);
						vis[x]=1;
					
					}
				}
			}
		}
	}
	return bfs;
}

void dfsOfGraph(int node, vector<int>& vis, vector<vector<int>>& adj, vector<int>& dfs){
	dfs.push_back(node);
	vis[node]=1;
	for(auto x : adj[node]){
		if(!vis[x]){
			dfsOfGraph(x,vis,adj,dfs);
		}
	}
}

vector<int> DFS(int v,vector<vector<int>>& adj){
	vector<int> dfs;
	vector<int> vis(v+1);
	
	for(int i=1; i<=v; ++i){
		if(!vis[i])
			dfsOfGraph(i,vis,adj,dfs);
		
	}
	return dfs;
}

bool checkForCycle(int s,vector<vector<int>>& adj,vector<int>& visited){
	queue<pair<int,int>>q;
	visited[s]=1;
	q.push({s,-1});
	
	while(!q.empty()){
		int node=q.front().first;
		int par=q.front().second;
		q.pop();
		
		for(auto x:adj[node]){
			if(!visited[x]){
				visited[x]=1;
				q.push({x,node});
			}
			else if(par!=x){
				return true;
			}
		}
	}
	
	return false;
	
}

bool isCycle(int v,vector<vector<int>>& adj){
	vector<int> visited(v+1,0);
	for(int i=1;i<=v;i++){
		if(!visited[i]){
			if(checkForCycle(i,adj,visited)){
				return true;
			}
		}
		
		
	}
	return false;
}


int main(){
	int n=3;
	cout<<"Creating Adjacent_Matrix"<<endl;
	vector<vector<int>> adj_M=adj_Matrix();
	
	vector<vector<int>> adj_L=adj_List();
	
	cout<<"Adjacency Matrix"<<endl;
	for(auto x: adj_M){
		for(auto y:x)
			cout<<y<<" ";
		cout<<endl;
	}
	
	cout<<"Adjacency List"<<endl;
	for(auto x: adj_L){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	
	cout<<"BFS of a Graph"<<endl;
	vector<int> bfs=BFS(n,adj_L);
	
	for(auto x:bfs){
		cout<<x<<" ";
	}
	cout<<endl;
	
	cout<<"DFS of a Graph"<<endl;
	vector<int> dfs=DFS(n,adj_L);
	
	for(auto x:dfs){
		cout<<x<<" ";
	}
	cout<<endl;
	
	cout<<"Is this graph contain cycle: "<<std::boolalpha<<isCycle(n,adj_L)<<endl;


	return 0;
}
