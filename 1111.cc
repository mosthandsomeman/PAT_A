//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int INF = 1000000000;
//const int maxn = 510;
//int N, M, st, ed;
//int ds[maxn] = { 0 }, df[maxn] = { 0 }, num[maxn] = { 0 }, G[maxn][maxn] = { 0 }, time[maxn][maxn] = { 0 };
//vector<int> preS[maxn], pathS, tempPathS, preF[maxn], pathF, tempPathF;
//bool visS[maxn] = { false }, visF[maxn] = { false };
//void Dijsktra(int st) {
//	fill(ds, ds + maxn, INF);
//	fill(df, df + maxn, INF);
//	fill(num, num + maxn, INF);
//	fill(visS, visS + maxn, false);
//	fill(visF, visF + maxn, false);
//	ds[st] = 0;
//	df[st] = 0;
//	num[st] = 1;
//	for (int i = 0;i < N;++i) {
//		{
//			int u = -1, MIN = INF;
//			for (int j = 0;j < N;++j) {
//				if (!visS[j] && ds[j] < MIN) {
//					u = j, MIN = ds[j];
//				}
//			}
//			if (u == -1) return;
//			visS[u] = true;
//			for (int v = 0;v < N;++v) {
//				if (!visS[v] && G[u][v] != INF) {
//					if (ds[u] + G[u][v] < ds[v]) {
//						ds[v] = ds[u] + G[u][v];
//						preS[v].clear();
//						preS[v].push_back(u);
//						num[v] = num[u];
//					}
//					else if (ds[u] + G[u][v] == ds[v]) {
//						preS[v].push_back(u);
//						num[v] += num[u];
//					}
//				}
//			}
//		}
//		{
//			int u = -1, MIN = INF;
//			for (int j = 0;j < N;++j) {
//				if (!visF[j] && df[j] < MIN) {
//					u = j, MIN = df[j];
//				}
//			}
//			if (u == -1) return;
//			visF[u] = true;
//			for (int v = 0;v < N;++v) {
//				if (!visF[v] && G[u][v] != INF) {
//					if (df[u] + time[u][v] < df[v]) {
//						df[v] = df[u] + time[u][v];
//						preF[v].clear();
//						preF[v].push_back(u);
//					}
//					else if (df[u] + time[u][v] == df[v]) {
//						preF[v].push_back(u);
//					}
//				}
//			}
//		}
//	}
//}
//int optTime = INF, optInter = INF;
//void DFSS(int s, int v) {
//	if (s == v) {
//		tempPathS.push_back(v);
//		int total = 0;
//		for (int i = tempPathS.size() - 1;i > 0; --i) {
//			total += time[tempPathS[i]][tempPathS[i - 1]];
//		}
//		if (total < optTime) {
//			optTime = total;
//			pathS = tempPathS;
//		}
//		tempPathS.pop_back();
//		return;
//	}
//	tempPathS.push_back(v);
//	for (int i = 0;i < preS[v].size();++i) {
//		DFSS(s, preS[v][i]);
//	}
//	tempPathS.pop_back();
//}
//void DFSF(int s, int v) {
//	if (s == v) {
//		tempPathF.push_back(v);
//		int total = tempPathF.size() - 1;
//		if (total < optInter) {
//			optInter = total;
//			pathF = tempPathF;
//		}
//		tempPathF.pop_back();
//		return;
//	}
//	tempPathF.push_back(v);
//	for (int i = 0;i < preF[v].size();++i) {
//		DFSF(s, preF[v][i]);
//	}
//	tempPathF.pop_back();
//}
//void Dayin(vector<int> tmp) {
//	for (int i = tmp.size() - 1;i >= 0;--i) {
//		printf("%d", tmp[i]);
//		if (i > 0) printf(" -> ");
//		else printf("\n");
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	int u, v, tag, len, tt;
//	fill(G[0], G[0] + maxn * maxn, INF);
//	fill(time[0], time[0] + maxn * maxn, INF);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d %d %d %d", &u, &v, &tag, &len, &tt);
//		if (tag == 1) {
//			G[u][v] = len;
//			time[u][v] = tt;
//		}
//		else {
//			G[u][v] = G[v][u] = len;
//			time[u][v] = time[v][u] = tt;
//		}
//	}
//	scanf("%d %d", &st, &ed);
//	Dijsktra(st);
//	DFSS(st, ed);
//	DFSF(st, ed);
//	if (pathS == pathF) {
//		printf("Distance = %d; Time = %d: ", ds[ed], df[ed]);
//		Dayin(pathS);
//	}
//	else {
//		printf("Distance = %d: ", ds[ed]);
//		Dayin(pathS);
//		printf("Time = %d: ", df[ed]);
//		Dayin(pathF);
//	}
//	system("pause");
//	return 0;
//}