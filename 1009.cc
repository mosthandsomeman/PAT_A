//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
//const int maxn = 1010;
//int K, f, num = 0;
//double c, A[maxn], B[maxn], C[maxn * 2];
//
//int main() {
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d %lf", &f, &c);
//		A[f] = c;
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d %lf", &f, &c);
//		B[f] = c;
//	}
//	fill(C, C + maxn * 2, 0);
//	for (int i = 0;i < maxn;++i) {
//		for (int j = 0;j < maxn;++j) {
//			C[i + j] += A[i] * B[j];
//		}
//	}
//	for (int i = 0;i < maxn * 2;++i) {
//		if (C[i] != 0.0) ++num;
//	}
//	printf("%d", num);
//	for (int i = maxn * 2 - 1;i >= 0;--i) {
//		if (C[i] != 0.0) {
//			printf(" %d %.1lf", i, C[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}