//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//int n, m, c, index, temp;
//int arr[200005];
//int main() {
//	scanf("%d", &n);
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", arr + i);
//	}
//	arr[n + 1] = 0x7fffffff;
//	scanf("%d", &m);
//	int midPos = (n + m + 1) / 2, i = 1, count = 0;
//	for (int j = 1;j <= m;++j) {
//		scanf("%d", &temp);
//		while (arr[i] < temp) {
//			++count;
//			if (count == midPos) cout << arr[i];
//			++i;
//		}
//		++count;
//		if (count == midPos) cout << temp;
//	}
//	while (i <= n){
//		++count;
//		if (count == midPos) cout << arr[i];
//		++i;
//	}
//	system("pause");
//	return 0;
//}