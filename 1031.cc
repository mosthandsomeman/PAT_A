//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//int n1, n2, a, b;
//char str[90];
//void getNum(int len) {
//	a = (len + 2) / 3;
//	b = (len + 2) % 3;
//	if (b != 0) {
//		n1 = a - 1;
//		n2 = a + b;
//	}
//	else {
//		n1 = a - 1;
//		n2 = a;
//	}
//}
//int main() {
//	scanf("%s", str);
//	int len = strlen(str);
//	getNum(len);
//	int c = 0;
//	char *space = new char[n2 - 1];
//	for (int i = 0;i < n2 - 2;++i) space[i] = ' ';
//	space[n2 - 2] = '\0';
//	for (int i = 0, j = len - 1;c < n1;++i, --j, ++c) {
//		printf("%c%s%c\n", str[i], space, str[j]);
//	}
//	for (int i = n1;i < n1 + n2;++i) printf("%c", str[i]);
//	printf("\n");
//	system("pause");
//	return 0;
//}