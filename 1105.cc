//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int N, m, n, a, b, c, d, pos = 0;
//vector<int> vec;
//bool cmp(int x, int y) { return x > y; }
//int setM_N() {
//	int i = sqrt(N);
//	while (i >= 1) {
//		if (N % i == 0) return i;
//		--i;
//	}
//	return 1;
//}
//int main() {
//	scanf("%d", &N);
//	m = N, n = 1;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		vec.push_back(a);
//	}
//	n = setM_N();
//	m = N / n;
//	sort(vec.begin(), vec.end(), cmp);
//	int * arr = new int[N];
//	a = 0, b = n, c = 0, d = m;
//	while (a < b && c < d) {
//		for (int i = a;i < b;++i) arr[c * n + i] = vec[pos++];
//		for (int i = c + 1;i < d;++i) arr[n * i + b - 1] = vec[pos++];
//		for (int i = b - 2;i >= a;--i) arr[(d - 1) * n + i] = vec[pos++];
//		if (b - a > 1) {
//			for (int i = d - 2;i > c;--i) arr[i * n + a] = vec[pos++];
//		}
//		a++, b--, c++, d--;
//	}
//	for (int i = 0;i < m;++i) {
//		for (int j = 0;j < n;++j)
//		{
//			printf("%d", arr[i * n + j]);
//			if (j < n - 1) printf(" ");
//			else printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int N, m, n, a, b, c, d, k, pos = 0;
//vector<int> vec;
//bool cmp(int x, int y) { return x > y; }
//void setM_N() {
//	int min1, max1;
//	min1 = max1 = sqrt(N);
//	while (min1 * max1 != N) {
//		if (min1 * max1 < N) ++max1;
//		else --min1;
//	}
//	m = max1, n = min1;
//}
//int main() {
//	scanf("%d", &N);
//	m = N, n = 1;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		vec.push_back(a);
//	}
//	setM_N();
//	sort(vec.begin(), vec.end(), cmp);
//	int * arr = new int[N];
//	a = 0, b = n, c = 0, d = m;
//	k = (n + 1) / 2; //¶àÉÙÈ¦
//	while (a < b && c < d) {
//		for (int i = a;i < b;++i) arr[c * n + i] = vec[pos++];
//		for (int i = c + 1;i < d;++i) arr[n * i + b - 1] = vec[pos++];
//		for (int i = b - 2;i >= a;--i) arr[(d - 1) * n + i] = vec[pos++];
//		if (b - a > 1) {
//			for (int i = d - 2;i > c;--i) arr[i * n + a] = vec[pos++];
//		}
//		a++, b--, c++, d--;
//	}
//	for (int i = 0;i < m;++i) {
//		for (int j = 0;j < n;++j)
//		{
//			printf("%d", arr[i * n + j]);
//			if (j < n - 1) printf(" ");
//			else printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}