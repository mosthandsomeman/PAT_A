//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 510;
//const int INF = 1000000000;
//int n, m, st, ed;
//int G[maxn][maxn], cost[maxn][maxn];
//int d[maxn], minCost = INF;
//bool vis[maxn] = { false };
//vector<int> pre[maxn], path, tempPath;
//
//void Dijkstra(int s) {
//	fill(d, d + maxn, INF);
//	d[s] = 0;
//	for (int i = 0;i < n;++i) {
//		int u = -1, MIN = INF;
//		for (int j = 0;j < n;++j) {
//			if (vis[j] == false && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < n;++v) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					pre[v].clear();
//					pre[v].push_back(u);
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					pre[v].push_back(u);
//				}
//			}
//		}
//	}
//}
//
//void DFS(int s, int v) {
//	if (s == v) {
//		tempPath.push_back(v);
//		int tempCost = 0;
//		for (int i = tempPath.size() - 1;i > 0;--i) {
//			int id = tempPath[i], next = tempPath[i - 1];
//			tempCost += cost[id][next];
//		}
//		if (tempCost < minCost) {
//			minCost = tempCost;
//			path = tempPath;
//		}
//		tempPath.pop_back();
//		return;
//	}
//	tempPath.push_back(v);
//	for (int i = 0;i < pre[v].size();++i) {
//		DFS(s, pre[v][i]);
//	}
//	tempPath.pop_back();
//}
//
//int main() {
//	int u, v, a, b;
//	scanf("%d %d %d %d", &n, &m, &st, &ed);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	fill(cost[0], cost[0] + maxn * maxn, INF);
//	for (int i = 0;i < m;++i) {
//		scanf("%d %d %d %d", &u, &v, &a, &b);
//		G[u][v] = G[v][u] = a;
//		cost[u][v] = cost[v][u] = b;
//	}
//	Dijkstra(st);
//	DFS(st, ed);
//	for (int i = path.size() - 1;i >= 0;--i) {
//		printf("%d ", path[i]);
//	}
//	printf("%d %d\n", d[ed], minCost);
//	system("pause");
//	return 0;
//}