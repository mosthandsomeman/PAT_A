//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<cmath>
//using namespace std;
//int N, L, num, flag = 0;
//string str, sub;
//bool isPrime(int n) {
//		if (n <= 1) return false;
//		for (int i = 2;i * i <= n;++i) {
//			if (n % i == 0) return false;
//		}
//		return true;
//}
//int main() {
//	cin >> N >> L >> str;
//	for (int i = 0;i <= N - L;++i) {
//		sub = str.substr(i, L);
//		num = stoi(sub);
//		if (isPrime(num)) {
//			cout << sub << endl;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0) cout << "404" << endl;
//	system("pause");
//	return 0;
//}