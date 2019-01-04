//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
//int Msize, N, a, pos;
//bool hashTab[50010] = { false };
//bool isPrime(int n) {
//	if (n <= 1) return false;
//	int sqr = (int)sqrt(1.0 * n);
//	for (int i = 2;i <= sqr;++i) {
//		if (n % i == 0) return false;
//	}
//	return true;
//}
//int main() {
//	scanf("%d %d", &Msize, &N);
//	while (!isPrime(Msize)) ++Msize;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		pos = a % Msize;
//		for (int k = 1;k <= Msize && hashTab[pos];++k) {
//			pos = (a + (k * k)) % Msize;
//		}
//		if (hashTab[pos]) printf("-");
//		else {
//			printf("%d", pos);
//			hashTab[pos] = true;
//		}
//		if (i < N - 1) printf(" ");
//	}
//	system("pause");
//	return 0;
//}