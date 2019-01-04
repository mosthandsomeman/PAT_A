//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//int N, flag = 0;
//int vec[110] = { 0 };
//bool judge(int a, int b) {
//	int wolf = 0, per = 0, x;
//	for (int i = 1;i <= N;++i) {
//		if (wolf > 1 || per > 1) return false;
//		x = vec[i];
//		if (x > 0) {
//			if (x == a || x == b) {
//				if (i == a || i == b) ++wolf;
//				else ++per;
//			}
//		}
//		else {
//			x = -x;
//			if (x != a && x != b) {
//				if (i == a || i == b) ++wolf;
//				else ++per;
//			}
//		}
//	}
//	if (wolf == 1 && per == 1) return true;
//	else return false;
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;++i) scanf("%d", vec + i);
//	for (int i = 1;i <= N;++i) {
//		for (int j = i + 1;j <= N;++j) {
//			if (judge(i, j)) {
//				printf("%d %d", i, j);
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) break;
//	}
//	if (flag == 0) printf("No Solution\n");
//	system("pause");
//	return 0;
//}