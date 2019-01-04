//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 1010;
//int N, M, K, x, y;
//int inDeg[maxn] = { 0 };
//vector<int> Adj[maxn], res;
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &x, &y);
//		Adj[x].push_back(y);
//		inDeg[y]++;
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		int temp[maxn];
//		bool flag = true;
//		memcpy(temp, inDeg, sizeof(temp));
//		for (int j = 0;j < N;++j) {
//			scanf("%d", &x);
//			if (temp[x] != 0) {
//				flag = false;
//				++j;
//				while (j < N) {
//					scanf("%d", &x);
//					++j;
//				}
//				break;
//			}
//			else {
//				for (int k = 0;k < Adj[x].size();++k) temp[Adj[x][k]]--;
//			}
//		}
//		if (!flag) res.push_back(i);
//	}
//	for (int i = 0;i < res.size() - 1;++i) printf("%d ", res[i]);
//	printf("%d\n", res[res.size() - 1]);
//	system("pause");
//	return 0;
//}