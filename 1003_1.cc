//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<set>
//using namespace std;
//const int maxn = 1000;
//const int INF = 1000000000;
//struct Node
//{
//	int v, dis;
//	Node(int _v, int _dis) :v(_v), dis(_dis) {}
//};
//int n, m, st, ed, weight[maxn];
//int d[maxn], w[maxn], num[maxn];
//vector<Node> Adj[maxn];
//set<int> pre[maxn];
//
//void bellMan(int s) {
//	fill(d, d + maxn, INF);
//	memset(num, 0, sizeof(num));
//	memset(w, 0, sizeof(w));
//	d[s] = 0;
//	w[s] = 1;
//	num[s] = 1;
//	for (int i = 0;i < n - 1;++i) {
//		for (int u = 0;u < n;++u) {
//			for (int j = 0;j < Adj[u].size();++j) {
//				int v = Adj[u][j].v;
//				int dis = Adj[u][j].dis;
//				if (d[u] + dis < d[v]) {
//					d[v] = d[u] + dis;
//					w[v] = w[u] + weight[v];
//					num[v] = num[u];
//					pre[v].clear();
//					pre[v].insert(u);
//				}
//				else if (d[u] + dis == d[v]) {
//					if (w[u] + weight[v] > w[v]) {
//						w[v] = w[u] + weight[v];
//					}
//					pre[v].insert(u);
//					num[v] = 0;
//					for (auto it = pre[v].begin();it != pre[v].end();++it) {
//						num[v] += num[*it];
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d %d %d", &n, &m, &st, &ed);
//	for (int i = 0;i < n;++i) {
//		scanf("%d", weight + i);
//	}
//	int u, v, wt;
//	for (int i = 0;i < m;++i) {	
//		scanf("%d %d %d", &u, &v, &wt);
//		Adj[u].push_back(Node(v, wt));
//		Adj[v].push_back(Node(u, wt));
//	}
//
//	bellMan(st);
//	printf("%d %d\n", num[ed], w[ed]);
//	system("pause");
//	return 0;
//}