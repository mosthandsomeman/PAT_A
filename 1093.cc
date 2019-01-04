//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//const int maxn = 100010;
//const int MOD = 1000000007;
//int leftPNum[maxn] = {0};
//char str[maxn];
//
//int main() {
//	scanf("%s", str);
//	int len = strlen(str);
//	for (int i = 0;i < len;++i) {
//		if ( i > 0) {
//			leftPNum[i] = leftPNum[i - 1];
//		}
//		if (str[i] == 'P') {
//			leftPNum[i]++;
//		}
//	}
//	int ans = 0, rightTNum = 0;
//	for (int i = len - 1; i >= 0; --i) {
//		if (str[i] == 'T') {
//			rightTNum++;
//		}
//		else if (str[i] == 'A') {
//			ans = (ans + leftPNum[i] * rightTNum) % MOD;
//		}
//	}
//
//	printf("%d\n", ans);
//	return 0;
//}