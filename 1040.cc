//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<iostream>
//using namespace std;
//const int maxn = 1005;
//int dp[maxn][maxn];
//string str;
//int main() {
//	getline(cin, str);
//	int len = str.size(), ans = 1;
//	memset(dp, 0, sizeof(dp));
//	for (int i = 0;i < len;++i) {
//		dp[i][i] = 1;
//		if (i < len - 1) {
//			if (str[i] == str[i + 1]) {
//				dp[i][i + 1] = 1;
//				ans = 2;
//			}
//		}
//	}
//	for (int L = 3;L <= len;++L) {
//		for (int i = 0;i + L - 1 < len;++i) {
//			int j = i + L - 1;
//			if (str[i] == str[j] && dp[i + 1][j - 1] == 1) {
//				dp[i][j] = 1;
//				ans = L;
//			}
//		}
//	}
//	printf("%d\n", ans);
//	system("pause");
//	return 0;
//}