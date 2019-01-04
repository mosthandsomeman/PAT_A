//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//const int maxn = 510;
//int N, M, x, y, even = 0, odd = 0, num = 0;
//vector<int> Adj[maxn];
//int du[maxn] = { 0 };
//bool vis[maxn] = { false };
//void DFS(int st) {
//	vis[st] = true;
//	++num;
//	for (int i = 0;i < Adj[st].size();++i) {
//		int v = Adj[st][i];
//		if (vis[v] == false) DFS(v);
//	}
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &x, &y);
//		Adj[x].push_back(y);
//		Adj[y].push_back(x);
//		du[x]++;
//		du[y]++;
//	}
//	for (int i = 1;i <= N;++i) {
//		printf("%d", du[i]);
//		if (i < N) printf(" ");
//		else printf("\n");
//		if (du[i] % 2 == 0) ++even;
//		else ++odd;
//	}
//	DFS(1);
//	if (num < N) printf("Non-Eulerian\n");
//	else {
//		if (even == N) printf("Eulerian\n");
//		else if (even == N - 2) printf("Semi-Eulerian\n");
//		else printf("Non-Eulerian\n");
//	}
//	system("pause");
//	return 0;
//}