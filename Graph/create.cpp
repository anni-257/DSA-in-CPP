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


int main(){
	int n=6;
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


	return 0;
}
