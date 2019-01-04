//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<map>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int INF = 1000000000;
//const int maxn = 210;
//int N, K, city = 0, beg, edd, a, cost;
//map<string, int> nameToId;
//map<int, string> idToName;
//string st, name, name2;
//vector<int> pre[maxn], path, tempPath;
//int G[210][210] = { 0 }, d[maxn] = { 0 }, w[maxn] = { 0 }, c[maxn] = { 0 }, num[maxn] = { 0 };
//bool vis[maxn] = { false };
//int change(string str) {
//	if (nameToId.find(str) == nameToId.end()) {
//		nameToId[str] = city;
//		idToName[city] = str;
//		++city;
//	}
//	return nameToId[str];
//}
//void Dijkstra(int s) {
//	fill(d, d + maxn, INF);
//	fill(c, c + maxn, 0);
//	fill(vis, vis + maxn, false);
//	d[s] = 0;
//	c[s] = 0;
//	num[s] = 1;
//	for (int i = 0;i < N;++i) {
//		int u = -1, MIN = INF;
//		for (int j = 0;j < N;++j) {
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < N;++v) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					pre[v].clear();
//					pre[v].push_back(u);
//					num[v] = num[u];
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					pre[v].push_back(u);
//					num[v] += num[u];
//				}
//			}
//		}
//	}
//}
//int minCnt = INF, maxHap = 0;
//void DFS(int s, int v) {
//	if (s == v) {
//		tempPath.push_back(v);
//		int total = 0, nodeCnt = tempPath.size();
//		for (int i = 0;i < tempPath.size();++i) {
//			total += w[tempPath[i]];
//		}
//		if (total > maxHap || (total == maxHap && nodeCnt < minCnt)) {
//			path = tempPath;
//			maxHap = total;
//			minCnt = nodeCnt;
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
//	cin >> N >> K >> st;
//	beg = change(st);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < N - 1;++i) {
//		cin >> name >> a;
//		int id = change(name);
//		w[id] = a;
//	}
//	edd = nameToId["ROM"];
//	for (int i = 0;i < K;++i) {
//		cin >> name >> name2 >> a;
//		int id1 = nameToId[name];
//		int id2 = nameToId[name2];
//		G[id1][id2] = G[id2][id1] = a;
//	}
//	Dijkstra(beg);
//	DFS(beg, edd);
//	printf("%d %d %d %d\n", num[edd], d[edd], maxHap, maxHap / (minCnt - 1));
//	reverse(path.begin(), path.end());
//	for (int i = 0;i < path.size();++i) {
//		printf("%s", idToName[path[i]].c_str());
//		if (i < path.size() - 1) printf("->");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}