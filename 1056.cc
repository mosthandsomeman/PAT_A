//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include<map>
//#include<set>
//using namespace std;
//const int maxn = 1010;
//int Np, Ng, c, ans = 0;
//int arr[1010], order[1010], Rank[1010] = {0};
//map<int, int> idx;
//int main() {
//	scanf("%d %d", &Np, &Ng);
//	for (int i = 0;i < Np;++i) {
//		scanf("%d", arr + i);
//		idx[arr[i]] = i;
// 	}
//	for (int i = 0;i < Np;++i)
//		scanf("%d", order + i);
//	int groups = Np / Ng;
//	if (groups == 0) groups = 1;
//	if (Np % Ng != 0 &&  Np / Ng > 0) ++groups;
//	int curLen = Np;
//	vector<set<int> > vec;
//	while (groups != 1) {
//		vec.clear();
//		for (int i = 0;i < groups;++i) {
//			set<int> sset;
//			for (int j = i * Ng; j < (i + 1) * Ng && j < curLen;++j) {
//				sset.insert(arr[order[j]]);
//			}
//			vec.push_back(sset);
//		}
//		int otherRank = vec.size() + 1;
//		fill(order, order + 1010, 0);
//		curLen = otherRank - 1;
//		for (int i = 0;i < vec.size();++i) {
//			for (auto elem : vec[i]) {
//				Rank[idx[elem]] = otherRank;
//			}
//			order[i] = idx[*vec[i].rbegin()];
//		}
//		groups = curLen / Ng;
//		if (groups == 0) groups = 1;
//		if (curLen % Ng != 0 && curLen / Ng > 0) ++groups;
//	}
//	if (groups == 1) {
//		set<int> sset;
//		for (int i = 0;i < curLen;++i) {
//			sset.insert(arr[order[i]]);
//		}
//		for (auto elem : sset) {
//			Rank[idx[elem]] = 2;
//		}
//		Rank[idx[*sset.rbegin()]] = 1;
//	}
//	for (int i = 0;i < Np;++i) {
//		printf("%d", Rank[i]);
//		if (i < Np - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}