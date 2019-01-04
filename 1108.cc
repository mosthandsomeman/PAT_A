//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//char a[50], b[50];
//double sum = 0, temp;
//int cnt = 0, N;
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%s", a);
//		sscanf(a, "%lf", &temp);
//		sprintf(b, "%.2f", temp);
//		int flag = 0;
//		for (int j = 0;j < strlen(a);++j) {
//			if (a[j] != b[j]) flag = 1;
//		}
//		if (flag || temp < -1000 || temp > 1000) {
//			printf("ERROR: %s is not a legal number\n", a);
//		}
//		else {
//			++cnt;
//			sum += temp;
//		}
//	}
//	if (cnt == 1) printf("The average of 1 number is %.2f\n", sum);
//	else if (cnt > 2) printf("The average of %d numbers is %.2f\n", cnt, sum / cnt);
//	else printf("The average of 0 numbers is Undefined\n");
//	system("pause");
//	return 0;
//}