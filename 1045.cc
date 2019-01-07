//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
//const int maxn = 10005;
//int n, m, l, c, k = 1, order[210] = { 0 }, str[maxn] = { 0 }, dp[maxn] = { 0 };
//int main() {
//	scanf("%d", &n);
//	scanf("%d", &m);
//	for (int i = 1;i <= m;++i) {
//		scanf("%d", &c);
//		order[c] = i;
//	}
//	scanf("%d", &l);
//	for (int i = 1;i <= l;++i) {
//		scanf("%d", &c);
//		if (order[c] > 0) str[k++] = c;
//	}
//	k--;
//	int ans = -1;
//	for (int i = 1;i <= k;++i) {
//		dp[i] = 1;
//		for (int j = 1;j < i;++j) {
//			if (order[str[j]] <= order[str[i]] && dp[j] + 1 > dp[i]) {
//				dp[i] = dp[j] + 1;
//			}
//		}
//		ans = max(ans, dp[i]);
//	}
//	printf("%d\n", ans);
//	system("pause");
//	return 0;
//}