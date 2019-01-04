//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//typedef long long LL;
//char num1[11], num2[11], tmp[11];
//int tag, radix;
//LL INF = (1LL << 63 - 1);
//
//void calValue(LL & val, char num[], int len, int ra) {
//	for (int i = 0;i < len;++i) {
//		int ch = 0;
//		if (num[i] >= 'a' && num[i] <= 'z') ch = num[i] - 'a' + 10;
//		else ch = num[i] - '0';
//		val = ch + val * ra;
//		if (val < 0 || val > INF) {
//			val = -1;
//			return;
//		}
//	}
//}
//
//LL getOtherRadix(char num[], int len, LL value) {
//	LL sum = 0;
//	LL low, high, mid;
//	int ch = 0;
//	if (num[0] >= 'a' && num[0] <= 'z') ch = num[0] - 'a' + 10;
//	else ch = num[0] - '0';
//	int h = 0;
//	for (int i = 0;i < len;++i) {
//		int tmp = 0;
//		if (num[i] >= 'a' && num[i] <= 'z') tmp = num[i] - 'a' + 10;
//		else tmp = num[i] - '0';
//		if (tmp > ch) ch = tmp;
//	}
//	low = ch + 1;
//	high = max(low, value) + 1;
//	while (low <= high) {
//		mid = low + (high - low) / 2;
//		sum = 0;
//		calValue(sum, num, len, mid);
//		if (sum == value) return mid;
//		else if (sum < value && sum != -1) low = mid + 1;
//		else if (sum == -1) high = mid - 1;
//		else high = mid - 1;
//	}
//	return -1;
//}
//
//int main() {
//	scanf("%s %s %d %d", num1, num2, &tag, &radix);
//	LL value = 0;
//	LL ra = -1;
//	if (tag == 2) {
//		strcpy(tmp, num1);
//		strcpy(num1, num2);
//		strcpy(num2, tmp);
//	}
//	calValue(value, num1, strlen(num1), radix);
//	ra = getOtherRadix(num2, strlen(num2), value);
//	if (ra == -1) printf("Impossible");
//	else printf("%lld", ra);
//	system("pause");
//	return 0;
//}