//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<vector>
//using namespace std;
//int mSize, N, M, c;
//vector<int> vec;
//double total = 0;
//int hash1[50010] = { 0 };
//bool hashTab[50010] = {false};
//bool isPrime(int n) {
//	if (n <= 1) return false;
//	for (int i = 2;i*i <= n;++i) {
//		if (n % i == 0) return false;
//	}
//	return true;
//}
//int main() {
//	scanf("%d %d %d", &mSize, &N, &M);
//	while (!isPrime(mSize)) ++mSize;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		int pos = c % mSize;
//		for (int k = 1;k <= mSize && hashTab[pos];++k) {
//			pos = (c + (k * k)) % mSize;
//		}
//		if (hashTab[pos]) vec.push_back(c);
//		else {
//			hash1[pos] = c;
//			hashTab[pos] = true;
//		}
//	}
//	for (int i = 0;i < M;++i) {
//		scanf("%d", &c);
//		int pos = c % mSize;
//		for (int k = 1;k <= mSize && hash1[pos] != c &&hash1[pos] != 0;++k) {
//			pos = (c + k * k) % mSize;
//			++total;
//		}
//		total++;
//	}
//	for (int i = 0;i < vec.size();++i) printf("%d cannot be inserted.\n", vec[i]);
//	printf("%.1f\n", total / M);
//	system("pause");
//	return 0;
//}