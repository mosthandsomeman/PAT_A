//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 510;
//const int INF = 1000000000;
//int cmax, n, sp, m;
//int d[maxn] = { 0 }, w[maxn] = { 0 }, G[maxn][maxn] = { 0 }, sendVal = INF, takeVal = INF;
//vector<int> pre[maxn], path, tempPath;
//bool vis[maxn] = {false};
//void Dijsktra(int s) {
//	fill(d, d + maxn, INF);
//	d[s] = 0;
//	for (int i = 0;i <= n;++i) {
//		int u = -1, MIN = INF;
//		for (int j = 0;j <= n;++j) {
//			if (vis[j] == false && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v <= n;++v) {
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
//void DFS(int s, int v) {
//	if (v == s) {
//		tempPath.push_back(v);
//		int sendNum = 0, takeNum = 0, half = cmax / 2;
//		for (int i = tempPath.size() - 2;i >= 0;--i) {
//			int id = tempPath[i];
//			if (w[id] >= half) takeNum += w[id] - half;
//			else {
//				int need = half - w[id];
//				if (takeNum > 0) {
//					if (takeNum >= need) takeNum -= need;
//					else {
//						sendNum += need - takeNum;
//						takeNum = 0;
//					}
//				}
//				else sendNum += need;
//			}
//		}
//		if (sendNum < sendVal || (sendNum == sendVal && takeNum < takeVal)) {
//			path = tempPath;
//			sendVal = sendNum, takeVal = takeNum;
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
//int main() {
//	scanf("%d %d %d %d", &cmax, &n, &sp, &m);
//	for (int i = 1;i <= n;++i) scanf("%d", w + i);
//	int u, v, dis;
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < m;++i) {
//		scanf("%d %d %d", &u, &v, &dis);
//		G[u][v] = G[v][u] = dis;
//	}
//	Dijsktra(0);
//	DFS(0, sp);
//	printf("%d ", sendVal);
//	for (int i = path.size() - 1;i >= 0;--i) {
//		printf("%d", path[i]);
//		if (i > 0)printf("->");
//		else printf(" %d\n", takeVal);
//	}
//	system("pause");
//	return 0;
//}