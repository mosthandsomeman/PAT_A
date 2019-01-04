//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//const int maxn = 1020;
//const int INF = 1000000000;
//int d[maxn] = { 0 }, G[maxn][maxn] = {0}, n, m, k, ds;
//bool vis[maxn] = { false };
//struct Node
//{
//	int gas;
//	double minMax, ave; 
//	Node(int _gas, double _min, double _ave):gas(_gas), minMax(_min), ave(_ave){}
//};
//vector<Node> vec;
//bool cmp(Node & a, Node & b) {
//	if (a.minMax != b.minMax) return a.minMax > b.minMax;
//	else if (a.ave != b.ave) return a.ave < b.ave;
//	else return a.gas < b.gas;
//}
//int change(char str[]) {
//	if (str[0] == 'G') {
//		str[0] = '0';
//		return atoi(str) + n;
//	}
//	else
//		return atoi(str);
//}
//
//void Dijsktra(int s) {
//	fill(d, d + maxn, INF);
//	fill(vis, vis + maxn, false);
//	d[s] = 0;
//	for (int i = 1;i <= n + m;++i) {
//		int u = -1, min = INF;
//		for (int j = 1;j <= n + m;++j) {
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 1;v <= m + n;++v) {
//			if (vis[v] == false && G[u][v] != INF && d[u] + G[u][v] < d[v]) {
//				d[v] = d[u] + G[u][v];
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d%d%d%d", &n, &m, &k, &ds);
//	char strU[5], strV[5];
//	int u, v, dis;
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < k;++i) {
//		scanf("%s %s %d", strU, strV, &dis);
//		u = change(strU);
//		v = change(strV);
//		G[u][v] = G[v][u] = dis;
//	}
//	double sum, min;
//	bool flag;
//	for (int i = 1;i <= m;++i) {
//		sum = 0, min = INF;
//		Dijsktra(n + i);
//		flag = true;
//		for (int j = 1;j <= n;++j) {
//			sum += d[j];
//			if (d[j] < min) {
//				min = d[j];
//			}
//			if (d[j] > ds) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag == false) {
//			continue;
//		}
//		vec.push_back(Node(i, min, sum / n));
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	if (vec.size() == 0) printf("No Solution\n");
//	else {
//		printf("G%d\n", vec[0].gas);
//		printf("%.1f %.1f\n", vec[0].minMax, vec[0].ave);
//	}
//
//	system("pause");
//	return 0;
//}