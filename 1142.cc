//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<set>
//using namespace std;
//const int INF = 1000000000;
//const int maxn = 210;
//int N, M, K, x, y, n;
//int G[maxn][maxn];
//bool judge(vector<int> vec) {
//	if (vec.size() == 1) return true;
//	for (int i = 0;i < vec.size();++i) {
//		for (int j = i + 1;j < vec.size();++j) {
//			if (G[vec[i]][vec[j]] == INF) return false;
//		}
//	}
//	return true;
//}
//bool isadjacent(vector<int> vec, int x) {
//	for (int i = 0;i < vec.size();++i) {
//		if (G[x][vec[i]] != INF) return true;
//	}
//	return false;
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &x, &y);
//		G[x][y] = G[y][x] = 1;
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		vector<int> vec;
//		set<int> sset;
//		scanf("%d", &n);
//		for (int j = 0;j < n;++j) {
//			scanf("%d", &x);
//			vec.push_back(x);
//			sset.insert(x);
//		}
//		int tag = 0;//0 not a cli  1  not max 2 yes
//		if (judge(vec)) {
//			tag = 2;
//			for (int t = 1;t <= N;++t) {
//				if (sset.find(t) == sset.end() && isadjacent(vec, t)) {
//					vec.push_back(t);
//					if (judge(vec)) {
//						tag = 1;
//						break;
//					}
//					vec.pop_back();
//				}
//			}
//			if (tag == 1) printf("Not Maximal\n");
//			else printf("Yes\n");
//		}
//		else printf("Not a Clique\n");
//	}
//	system("pause");
//	return 0;
//}