//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//const int INF = 1000000000;
//const int maxn = 210;
//int N, M, K, n, x, y, w, minIdx = 0, minDis = INF;
//int G[maxn][maxn];
//struct Node
//{
//	int idx, total;
//	char str[24];
//};
//char tag[3][24] = { "TS simple cycle", "TS cycle", "Not a TS cycle" };
//vector<Node> res;
//int main() {
//	scanf("%d %d", &N, &M);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d %d", &x, &y, &w);
//		G[x][y] = G[y][x] = w;
//	}
//	scanf("%d", &K);
//	for (int i = 1;i <= K;++i) {
//		scanf("%d", &n);
//		set<int> sset;
//		vector<int> vec;
//		for (int j = 0;j < n;++j) {
//			scanf("%d", &x);
//			sset.insert(x);
//			vec.push_back(x);
//		}
//		Node node;
//		node.idx = i;
//		node.total = 0;
//		if (sset.size() == N && vec.size() == N + 1 && vec[0] == vec[n - 1]) memcpy(node.str, tag[0], sizeof(node.str));
//		else if(sset.size() == N && vec.size() > N + 1 && vec[0] == vec[n - 1]) memcpy(node.str, tag[1], sizeof(node.str));
//		else if (sset.size() < N || vec[0] != vec[n - 1]) memcpy(node.str, tag[2], sizeof(node.str));
//		for (int j = 0;j < vec.size() - 1;++j) {
//			x = vec[j], y = vec[j + 1];
//			if (G[x][y] == INF) {
//				node.total = -1;
//				memcpy(node.str, tag[2], sizeof(node.str));
//				break;
//			}
//			else {
//				node.total += G[x][y];
//			}
//		}
//		res.push_back(node);
//		if (node.total < minDis && node.total >= 0 && strcmp(node.str, tag[2]) != 0) {
//			minDis = node.total;
//			minIdx = node.idx;
//		}
//	}
//	for (int i = 0;i < res.size();++i) {
//		if (res[i].total != -1)
//			printf("Path %d: %d (%s)\n", res[i].idx, res[i].total, res[i].str);
//		else
//			printf("Path %d: NA (%s)\n", res[i].idx, res[i].str);
//	}
//	printf("Shortest Dist(%d) = %d\n", minIdx, minDis);
//	system("pause");
//	return 0;
//}