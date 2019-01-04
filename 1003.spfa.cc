//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 1000;
//const int INF = 1000000000;
//struct Node
//{
//	int v, dis;
//	Node(int _v, int _dis) :v(_v), dis(_dis) {}
//};
//int n, m, st, ed;
//int d[maxn], weight[maxn], numInq[maxn], num[maxn], w[maxn];
//bool inq[maxn] = { false };
//vector<Node> Adj[maxn];
//
//bool SPFA(int s) {
//	fill(d, d + maxn, INF);
//	memset(numInq, 0, sizeof(numInq));
//	memset(num, 0, sizeof(num));
//	memset(w, 0, sizeof(w));
//	memset(inq, false, sizeof(inq));
//	queue<int> q;
//	q.push(s);
//	numInq[s]++;
//	inq[s] = true;
//	num[s] = 1;
//	w[s] = 0;
//	d[s] = 0;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		inq[u] = false;
//		for (int j = 0;j < Adj[u].size();++j) {
//			int v = Adj[u][j].v;
//			int dis = Adj[u][j].dis;
//			if (d[u] + dis < d[v]) {
//				d[v] = d[u] + dis;
//				w[v] = w[u] + weight[v];
//				num[v] = num[u];
//				if (inq[v] == false) {
//					q.push(v);
//					numInq[v]++;
//					inq[v] = true;
//					if (numInq[v] > n - 1) {
//						return false;
//					}
//				}
//			}
//			else if (d[u] + dis == d[v]) {
//				if (w[u] + weight[v] > w[v]) {
//					w[v] = w[u] + weight[v];
//				}
//				num[v] += num[u];
//				if (inq[v] == false) {
//					q.push(v);
//					numInq[v]++;
//					inq[v] = true;
//					if (numInq[v] > n - 1) {
//						return false;
//					}
//				}
//			}
//		}
//	}
//	return true;
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
//	SPFA(st);
//	printf("%d %d\n", num[ed], w[ed]);
//	system("pause");
//	return 0;
//}
