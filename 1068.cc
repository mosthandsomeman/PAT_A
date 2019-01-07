//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 10005;
//const int maxv = 110;
//int N, V;
//int c[maxn] = { 0 }, dp[maxv] = { 0 };
//bool select1[maxn][maxv] = { false };
//bool cmp(int a, int b) { return a > b; }
//int main() {
//	scanf("%d %d", &N, &V);
//	for (int i = 1;i <= N;++i) scanf("%d", c + i);
//	sort(c + 1, c + N + 1, cmp);
//	for (int i = 1;i <= N;++i) {
//		for (int v = V; v >= c[i];--v) {
//			if (dp[v] <= dp[v - c[i]] + c[i]) {
//				dp[v] = dp[v - c[i]] + c[i];
//				select1[i][v] = true;
//			}
//		}
//	}
//	if (dp[V] != V) printf("No Solution\n");
//	else {
//		vector<int> vec;
//		int v = V, i = N;
//		while (v > 0) {
//			if (select1[i][v]) {
//				vec.push_back(c[i]);
//				v -= c[i];
//			}
//			--i;
//		}
//		for (int i = 0;i < vec.size();++i) {
//			printf("%d", vec[i]);
//			if (i < vec.size() - 1) printf(" ");
//			else printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}