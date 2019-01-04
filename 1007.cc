//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
//const int maxn = 10010;
//int n, dp[maxn], A[maxn];
//bool flag = false;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", A + i);
//		if (A[i] >= 0) flag = true;
//	}
//	if (!flag) {
//		printf("0 %d %d", A[1], A[n]);
//	}
//	else {
//		int st, ed, sum = -1, k = 0;
//		fill(dp, dp + n + 10, 0);
//		for (int i = 1;i <= n;++i) {
//			dp[i] = max(dp[i - 1] + A[i], A[i]);
//			if (dp[i - 1] + A[i] <= A[i]) {
//				k = i;
//			}
//			if (dp[i] > sum) {
//				sum = dp[i];
//				ed = i;
//				st = k;
//			}
//		}
//		printf("%d %d %d", sum, A[st], A[ed]);
//	}
//
//	system("pause");
//	return 0;
//}