//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, d;
//bool isPrime(int num) {
//	if (num <= 1) return false;
//	int sqr = (int)sqrt(1.0 * num);
//	for (int i = 2;i <= sqr;++i) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//int getValue() {
//	vector<int> vec;
//	if (n == 0) vec.push_back(0);
//	else {
//		int num = n;
//		while (num != 0) {
//			vec.push_back(num % d);
//			num /= d;
//		}
//	}
//	int sum = 0;
//	for (int i = 0;i < vec.size();++i) {
//		sum = sum * d + vec[i];
//	}
//	return sum;
//}
//
//int main() {
//	while (scanf("%d", &n), n >= 0) {
//		scanf("%d", &d);
//		if (isPrime(n) && isPrime(getValue())) printf("Yes\n");
//		else printf("No\n");
//	}
//	system("pause");
//	return 0;
//}