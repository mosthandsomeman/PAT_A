//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<map>
//using namespace std;
//map<double, char> g1, g2, g3;
//
//void insert(double val, int i) {
//	char ch;
//	if (i % 3 == 0)  ch = 'W';
//	else if (i % 3 == 1)  ch = 'T';
//	else ch = 'L';
//	if (i >= 0 && i < 3) g1.insert(pair<double, char>(val, ch));
//	else if (i >= 3 && i < 6) g2.insert(pair<double, char>(val, ch));
//	else g3.insert(pair<double, char>(val, ch));
//}
//
//int main() {
//	double ch;
//	for (int i = 0;i < 9;++i) {
//		scanf("%lf", &ch);
//		insert(ch, i);
//	}
//	printf("%c %c %c %.2lf", g1.rbegin()->second, g2.rbegin()->second, g3.rbegin()->second,
//		(g1.rbegin()->first * g2.rbegin()->first * g3.rbegin()->first * 0.65 - 1) * 2 + 0.005);
//	system("pause");
//	return 0;
//}