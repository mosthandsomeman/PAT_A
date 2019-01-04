//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//const int maxn = 50010;
//int N;
//int inOr[maxn], preOr[maxn];
//int getFirst(int preL, int preR, int inL, int inR) {
//	int i;
//	for (i = inL;i <= inR;++i) {
//		if (inOr[i] == preOr[preL]) break;
//	}
//	if (preL == preR) return preOr[preL];
//	int numleft = i - inL;
//	if (numleft > 0)  return getFirst(preL + 1, preL + numleft, inL, i - 1);
//	else return getFirst(preL + numleft + 1, preR, i + 1, inR);
//}
//int main(){
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) scanf("%d", preOr + i);
//	for (int i = 0;i < N;++i) scanf("%d", inOr + i);
//	printf("%d\n", getFirst(0, N - 1, 0, N - 1));
//	system("pause");
//	return 0;
//}