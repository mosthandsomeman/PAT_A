//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//int a, b, c;
//bool flag = false;
//vector<int> r;
//int main() {
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	if (c < 0) {
//		c = -c;
//		flag = true;
//	}
//	if (flag) {
//		printf("-");
//	}
//	if (c == 0) {
//		printf("0\n");
//	}
//	else {
//		while (c != 0) {
//			r.push_back(c % 1000);
//			c /= 1000;
//		}
//		if (r.size() == 1) {
//			printf("%d\n", r[0]);
//		}
//		else {
//			printf("%d", r[r.size() - 1]);
//			for (int i = r.size() - 2; i >= 0;--i) {
//				printf(",%03d", r[i]);
//			}
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}