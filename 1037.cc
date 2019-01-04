//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 100010;
//int Nc, Np, c;
//long long total = 0;
//vector<int> vecC, vecP;
//bool cmp(int a, int b) {
//	return a > b;
//}
//int main() {
//	scanf("%d", &Nc);
//	for (int i = 1;i <= Nc;++i) {
//		scanf("%d", &c);
//		vecC.push_back(c);
//	}
//	scanf("%d", &Np);
//	for (int i = 1;i <= Np;++i) {
//		scanf("%d", &c);
//		vecP.push_back(c);
//	}
//	sort(vecC.begin(), vecC.end(), cmp);
//	sort(vecP.begin(), vecP.end(), cmp);
//	int idx = 0, idy = 0;
//	while (idx < vecC.size() && idy < vecP.size()) {
//		if (vecC[idx] > 0 && vecP[idy] > 0) {
//			total += vecC[idx++] * vecP[idy++];
//		}
//		else
//			break;
//	}
//	idx = vecC.size() - 1, idy = vecP.size() - 1;
//	while (idx >= 0 && idy >= 0) {
//		if (vecC[idx] < 0 && vecP[idy] < 0) {
//			total += vecC[idx--] * vecP[idy--];
//		}
//		else
//			break;
//	}
//	printf("%lld\n", total);
//	system("pause");
//	return 0;
//}