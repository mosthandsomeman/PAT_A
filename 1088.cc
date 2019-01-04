//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//using namespace std;
//typedef long int LI;
//bool cmp(LI a, LI b) {
//	return a > b;
//}
//LI gcd(LI a, LI b) {
//	return !b ? a : gcd(b, a % b);
//}
//struct Fraction
//{
//	LI up, down;
//};
//Fraction reduction(Fraction result) {
//	if (result.down < 0) {
//		result.up = -result.up;
//		result.down = -result.down;
//	}
//	if (result.up == 0)  result.down = 1;
//	else {
//		LI d = gcd(abs(result.up), abs(result.down));
//		result.up /= d;
//		result.down /= d;
//	}
//	return result;
//}
//Fraction add(Fraction a, Fraction b) {
//	Fraction result;
//	result.up = a.up * b.down + b.up * a.down;
//	result.down = a.down * b.down;
//	return reduction(result);
//}
//Fraction minu(Fraction a, Fraction b) {
//	Fraction result;
//	result.up = a.up * b.down - b.up * a.down;
//	result.down = a.down * b.down;
//	return reduction(result);
//}
//Fraction multi(Fraction a, Fraction b) {
//	Fraction result;
//	result.up = a.up * b.up;
//	result.down = a.down * b.down;
//	return reduction(result);
//}
//Fraction divide(Fraction a, Fraction b) {
//	Fraction result;
//	result.up = a.up * b.down;
//	result.down = a.down * b.up;
//	return reduction(result);
//}
//void showResult(Fraction result) {
//	result = reduction(result);
//	if (result.down == 1) {
//		if (result.up < 0) printf("(%ld)", result.up);
//		else printf("%ld", result.up);
//	}
//	else if (abs(result.up) >= result.down) {
//		if (result.up < 0)
//			printf("(%ld %ld/%ld)", result.up / result.down, abs(result.up) % result.down, result.down);
//		else
//			printf("%ld %ld/%ld", result.up / result.down, result.up % result.down, result.down);
//	}
//	else {
//		if (result.up < 0) printf("(%ld/%ld)", result.up, result.down);
//		else printf("%ld/%ld", result.up, result.down);
//	}
//}
//int main() {
//	Fraction a, b, c, d, e, f;
//	scanf("%ld/%ld %ld/%ld", &a.up, &a.down, &b.up, &b.down);
//	a = reduction(a);
//	b = reduction(b);
//	c = add(a, b);
//	d = minu(a, b);
//	e = multi(a, b);
//	f = divide(a, b);
//	showResult(a);printf(" + ");showResult(b);printf(" = ");showResult(c);printf("\n");
//	showResult(a);printf(" - ");showResult(b);printf(" = ");showResult(d);printf("\n");
//	showResult(a);printf(" * ");showResult(b);printf(" = ");showResult(e);printf("\n");
//	showResult(a);printf(" / ");showResult(b);printf(" = ");
//	if (b.up == 0) printf("Inf");
//	else { showResult(f); printf("\n"); }
//	system("pause");
//	return 0;
//}