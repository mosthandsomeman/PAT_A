//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 1010;
//int N, M, K, query;
//vector<int> Adj[maxn];
//bool vis[maxn] = { false };
//
//void DFS(int u) {
//	vis[u] = true;
//	for (int i = 0;i < Adj[u].size();++i) {
//		int v = Adj[u][i];
//		if (v != query && vis[v] == false) {
//			DFS(v);
//		}
//	}
//}
//
//int DFSTrave() {
//	int ans = 0;
//	for (int i = 1;i <= N;++i) {
//		if (vis[i] == false && i != query) {
//			DFS(i);
//			++ans;
//		}
//	}
//	return ans;
//}
//
//int main() {
//	int c1, c2;
//	scanf("%d %d %d", &N, &M, &K);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &c1, &c2);
//		Adj[c1].push_back(c2);
//		Adj[c2].push_back(c1);
//	}
//
//	for (int i = 0;i < K;++i) {
//		fill(vis, vis + maxn, false);
//		scanf("%d", &query);
//		int piece = DFSTrave();
//		printf("%d\n", piece - 1);
//	}
//
//	system("pause");
//	return 0;
//}