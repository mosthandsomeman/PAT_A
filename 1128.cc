//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<cstring>
//#include<iostream>
//#include<functional>
//#include<algorithm>
//
//using namespace std;
//
//bool judgeQueen(int * arr, int n) {
//	for (int i = 1;i <= n;++i) {
//		for (int j = i + 1;j <= n;++j) {
//			if (abs(j - i) == abs(arr[i] - arr[j]) || arr[i] == arr[j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	int a, b;
//	cin >> a;
//	for (int i = 0;i < a;++i) {
//		cin >> b;
//		int * arr = new int[b + 1];
//		for (int j = 1;j <= b;++j) {
//			cin >> arr[j];
//		}
//		if (b >= 4 && judgeQueen(arr, b))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	system("pause");
//	return 0;
//}