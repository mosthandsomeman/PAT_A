//#include<cstdio>
//#include<cstdlib>
//#include<set>
//#include<vector>
//using namespace std;
//int N, K;
//vector<set<int> > vec;
//int main() {
//	int m, a, b, c;
//	double nc, nt;
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		set<int> sset;
//		scanf("%d", &m);
//		for (int j = 0;j < m;++j) {
//			scanf("%d", &c);
//			sset.insert(c);
//		}
//		vec.push_back(sset);
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d %d", &a, &b);
//		nc = 0, nt = vec[a - 1].size();
//		for (auto it = vec[b - 1].begin(); it != vec[b - 1].end();++it) {
//			if (vec[a - 1].find(*it) != vec[a - 1].end()) ++nc;
//			else ++nt;
//		}
//		printf("%.1f%%\n", nc / nt * 100);
//	}
//	system("pause");
//	return 0;
//}