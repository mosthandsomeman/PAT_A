//#include<cstdio>
//#include<cstdlib>
//#include<set>
//using namespace std;
//int N, c, sum, ant = 0;
//set<int> sset;
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		sum = 0;
//		while (c != 0) {
//			sum += c % 10;
//			c /= 10;
//		}
//		sset.insert(sum);
//	}
//	ant = sset.size();
//	printf("%d\n", ant);
//	int i = 0;
//	for (auto elem : sset) {
//		printf("%d", elem);
//		++i;
//		if (i < ant) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}