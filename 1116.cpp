//#include<cstdio>
//#include<cstdlib>
//#include<map>
//using namespace std;
//int N, K, c;
//bool isPrime(int x) {
//	if (x <= 1) return false;
//	for (int i = 2;i * i <= x;++i) {
//		if (x % i == 0) return false;
//	}
//	return true;
//}
//map<int, int> res, check;
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d", &c);
//		if (i == 1) res[c] = 1;
//		else {
//			if (isPrime(i)) res[c] = 2;
//			else res[c] = 3;
//		}
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d", &c);
//		printf("%04d: ", c);
//		if (res.find(c) == res.end()) printf("Are you kidding?\n");
//		else {
//			if (check.find(c) == check.end()) {
//				if (res[c] == 1) printf("Mystery Award\n");
//				else if (res[c] == 2) printf("Minion\n");
//				else printf("Chocolate\n");
//				check[c] = 1;
//			}
//			else printf("Checked\n");
//		}
//	}
//	system("pause");
//	return 0;
//}