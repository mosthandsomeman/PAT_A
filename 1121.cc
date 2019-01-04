//#include<cstdio>
//#include<cstdlib>
//#include<map>
//#include<set>
//using namespace std;
//map<int, int> idx;
//set<int> sset, res;
//int N, M, x, y;
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d %d", &x, &y);
//		idx[x] = y;
//		idx[y] = x;
//	}
//	scanf("%d", &M);
//	for (int i = 0;i < M;++i) {
//		scanf("%d", &x);
//		sset.insert(x);
//	}
//	for (auto elem : sset) {
//		if (idx.find(elem) == idx.end()) res.insert(elem);
//		else {
//			if (sset.find(idx[elem]) == sset.end()) res.insert(elem);
//		}
//	}
//	int ant = res.size();
//	printf("%d\n", ant);
//	int i = 0;
//	for (auto elem : res) {
//		printf("%05d", elem);
//		++i;
//		if (i < ant) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}