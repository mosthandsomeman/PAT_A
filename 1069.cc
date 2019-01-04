//#include<cstdio>
//#include<cstdlib>
//#include<set>
//#include<algorithm>
//using namespace std;
//int num, a, b;
//void setNum(int n) {
//	a = b = 0;
//	multiset<int> sset;
//	int tmp = n;
//	while (tmp != 0) {
//		sset.insert(tmp % 10);
//		tmp /= 10;
//	}
//	while (sset.size() != 4) sset.insert(0);
//	for (auto it = sset.begin(); it != sset.end();++it) {
//		b = b * 10 + *it;
//	}
//	for (auto it = sset.rbegin(); it != sset.rend();++it) {
//		a = a * 10 + *it;
//	}
//}
//int main() {
//	scanf("%d", &num);
//	setNum(num);
//	if (a == b) {
//		printf("%04d - %04d = 0000\n", a, a);
//	}
//	else {
//		while (a - b != 6174) {
//			printf("%04d - %04d = %04d\n", a, b, a - b);
//			setNum(a - b);
//		}
//		printf("%04d - %04d = %04d\n", a, b, a - b);
//	}
//	system("pause");
//	return 0;
//}