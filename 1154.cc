//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<queue>
//using namespace std;
//const int maxn = 10010;
//int N, M, K, c, flag = 0;
//int arr[maxn] = { 0 };
//set<int> sset;
//vector<int> Adj[maxn];
//bool vis[maxn] = { false };
//void BFSTrave() {
//	for (int i = 0;i < N;++i) {
//		int u = i;
//		for (int j = 0;j < Adj[u].size();++j) {
//			int v = Adj[u][j];
//			if (arr[u] == arr[v]) {
//				flag = 1;
//				break;
//			}
//		}
//	}
//	if (flag == 1) printf("No\n");
//	else printf("%d-coloring\n", sset.size());
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	int u, v;
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &u, &v);
//		Adj[u].push_back(v);
//		Adj[v].push_back(u);
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		fill(arr, arr + maxn, 0);
//		fill(vis, vis + maxn, false);
//		sset.clear();
//		flag = 0;
//		for (int j = 0;j < N;++j) {
//			scanf("%d", arr + j);
//			sset.insert(arr[j]);
//		}
//		BFSTrave();
//	}
//	system("pause");
//	return 0;
//}