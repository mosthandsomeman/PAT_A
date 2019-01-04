//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, M, K, n, x, y; 
//const int maxn = 10010;
//vector<int> vec[maxn];
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &x, &y);
//		vec[x].push_back(y);
//		vec[y].push_back(x);
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d", &n);
//		int total = 0;
//		bool * isIn = new bool[N];
//		fill(isIn, isIn + N, false);
//		for (int j = 0;j < n;++j) {
//			scanf("%d", &x);
//			for (int t = 0;t < vec[x].size();++t) {
//				if (isIn[vec[x][t]] == false) {
//					++total;
//				}
//			}
//			isIn[x] = true;
//		}
//		if (total == M) printf("Yes\n");
//		else printf("No\n");
//	}
//	system("pause");
//	return 0;
//}