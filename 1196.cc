//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//using namespace std;
//int N;
//int main() {
//	scanf("%d", &N);
//	int maxn = sqrt(N), first = 0, len = 0;
//	for (int i = 2;i <= maxn;++i) {
//		int j = 0, temp = 1;
//		for (j = i;j <= maxn;++j) {
//			temp *= j;
//			if (N % temp != 0) break;
//		}
//		if (j - i > len) {
//			len = j - i;
//			first = i;
//		}
//	}
//	if (first == 0) printf("1\n%d\n", N);
//	else {
//		printf("%d\n", len);
//		for (int i = 0;i < len;++i) {
//			printf("%d", first + i);
//			if (i < len - 1) printf("*");
//			else printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}