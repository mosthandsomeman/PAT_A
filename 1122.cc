//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//const int maxn = 210;
//const int INF = 1000000000;
//int N, M, K, x, y, G[maxn][maxn] = { 0 }, n;
//int main() {
//	scanf("%d %d", &N, &M);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &x, &y);
//		G[x][y] = G[y][x] = 1;
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d", &n);
//		vector<int> vec;
//		set<int> sset;
//		for (int j = 0;j < n;++j) {
//			scanf("%d", &x);
//			vec.push_back(x);
//			sset.insert(x);
//		}
//		if (vec.size() == N + 1 && sset.size() == N && vec[0] == vec[vec.size() - 1]) {
//			bool flag = true;
//			for (int j = 0;j < vec.size() - 1;++j) {
//				if (G[vec[j]][vec[j + 1]] == INF) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag) printf("YES\n");
//			else printf("NO\n");
//		}
//		else printf("NO\n");
//	}
//	system("pause");
//	return 0;
//}