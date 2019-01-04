//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//int n;
//struct Node
//{
//	int h, m, s;
//	Node(int _h, int _m, int _s) :h(_h), m(_m), s(_s) {}
//};
//Node minT(24, 59, 59), maxT(0, 0, 0);
//char strMin[20], strMax[20], id[20];
//int h1, m1, s1, h2, m2, s2;
//
//bool compare(Node a, Node b) {
//	if (a.h != b.h) return a.h < b.h;
//	else if (a.m != b.m) return a.m < b.m;
//	else return a.s < b.s;
//}
//
//void update(Node & a, int h, int m, int s) {
//	a.h = h, a.m = m, a.s = s;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;++i) {
//		scanf("%s %d:%d:%d %d:%d:%d", id, &h1, &m1, &s1, &h2, &m2, &s2);
//		Node signIn(h1, m1, s1), signOut(h2, m2, s2);
//		if (compare(signIn, minT)) {
//			strcpy(strMin, id);
//			update(minT, signIn.h, signIn.m, signIn.s);
//		}
//		if(compare(maxT, signOut)) {
//			strcpy(strMax, id);
//			update(maxT, signOut.h, signOut.m, signOut.s);
//		}
//	}
//	printf("%s %s\n", strMin, strMax);
//	system("pause");
//	return 0;
//}