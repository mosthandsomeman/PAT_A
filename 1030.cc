//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 510;
//const int INF = 1000000000;
//int n, m, st, ed;
//int G[maxn][maxn], cost[maxn][maxn];
//int d[maxn], c[maxn], pre[maxn];
//bool vis[maxn] = { false };
//
//void Dijkstra(int s) {
//	fill(d, d + maxn, INF);
//	fill(c, c + maxn, 0);
//	for (int i = 0;i < n;++i) pre[i] = i;
//	d[s] = 0;
//	c[s] = 0;
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
//					c[v] = c[u] + cost[u][v];
//					pre[v] = u;
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					if (c[u] + cost[u][v] < c[v]) {
//						c[v] = c[u] + cost[u][v];
//						pre[v] = u;
//					}
//				}
//			}
//		}
//	}
//}
//
//void DFS(int s, int v) {
//	if (s == v) {
//		printf("%d ", v);
//		return;
//	}
//	DFS(s, pre[v]);
//	printf("%d ", v);
//}
//
//int main() {
//	int u, v, a, b;
//	scanf("%d %d %d %d", &n, &m, &st, &ed);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < m;++i) {
//		scanf("%d %d %d %d", &u, &v, &a, &b);
//		G[u][v] = G[v][u] = a;
//		cost[u][v] = cost[v][u] = b;
//	}
//	Dijkstra(st);
//	DFS(st, ed);
//	printf("%d %d\n", d[ed], c[ed]);
//	system("pause");
//	return 0;
//}