//#include<cstdio>
//#include<cstdlib>
//int main() {
//	int n, ant = 0, a = 1, left, right, cur = 0;
//	scanf("%d", &n);
//	while (n / a){
//		left = n / (a * 10), right = n % a, cur = n / a % 10;
//		if (cur == 0) ant += left * a;
//		else if (cur == 1) ant += left * a + right + 1;
//		else ant += (left + 1) * a;
//		a *= 10;
//	}
//	printf("%d\n", ant);
//	system("pause");
//	return 0;
//}